#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitEffectConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_6B7AEFA8A141B912_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x11AE7870)
#define CLASS_2_6B7AEFA8A141B912_METHOD_2_0CAC8436EC78EB6B_OFFSET UNITYSDK_OFFSET(0x11AE7960)
#define CLASS_2_6B7AEFA8A141B912_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x11AE7C80)
#define CLASS_2_6B7AEFA8A141B912__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE7BB0)
#define CLASS_2_6B7AEFA8A141B912__ONBIND_OFFSET UNITYSDK_OFFSET(0x11AE7760)
#define CLASS_2_6B7AEFA8A141B912___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11AE7C20)

inline static constexpr unsigned int Class_2_6B7AEFA8A141B912_TypeDefinitionIndex = 66604;

class Class_2_6B7AEFA8A141B912 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::GridFightTraitEffectConfig* Field_2_5; // 0x60
	::RPG::Client::AnimatorButton* Field_2_1; // 0x68
	::RPG::Client::GridFightTrait* Field_2_3; // 0x70
	::System::String* Field_2_8; // 0x78
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_2; // 0x80
	::System::String* Field_2_7; // 0x88
	::System::Action_1<::System::Object*>* Field_2_6; // 0x90
	::RPG::Client::GridFightTraitConfigBase* Field_2_4; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B7AEFA8A141B912__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B7AEFA8A141B912__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6B7AEFA8A141B912_METHOD_2_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CAC8436EC78EB6B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_6B7AEFA8A141B912_METHOD_2_0CAC8436EC78EB6B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B7AEFA8A141B912___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_6B7AEFA8A141B912_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};
