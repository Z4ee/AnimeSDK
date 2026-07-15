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

#define CLASS_2_57958B24C7F372CD_METHOD_2_1B5CCAA3C91F67F2_OFFSET UNITYSDK_OFFSET(0x16DC70D0)
#define CLASS_2_57958B24C7F372CD_METHOD_2_EAD24AFE10569E66_OFFSET UNITYSDK_OFFSET(0x16DC6F90)
#define CLASS_2_57958B24C7F372CD__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC7410)
#define CLASS_2_57958B24C7F372CD__ONBIND_OFFSET UNITYSDK_OFFSET(0x16DC6E60)

inline static constexpr unsigned int Class_2_57958B24C7F372CD_TypeDefinitionIndex = 69026;

class Class_2_57958B24C7F372CD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::GridFightTraitConfigBase* Field_2_1; // 0x60
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_2; // 0x68
	::RPG::Client::GridFightTrait* Field_2_3; // 0x70
	::System::String* Field_2_4; // 0x78
	::System::Action_1<::System::Object*>* Field_2_5; // 0x80
	::System::String* Field_2_6; // 0x88
	::RPG::Client::GridFightTraitEffectConfig* Field_2_7; // 0x90
	::RPG::Client::AnimatorButton* Field_2_8; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EAD24AFE10569E66(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD_METHOD_2_EAD24AFE10569E66_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B5CCAA3C91F67F2(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_57958B24C7F372CD_METHOD_2_1B5CCAA3C91F67F2_OFFSET))(this, a1);
	}
};
