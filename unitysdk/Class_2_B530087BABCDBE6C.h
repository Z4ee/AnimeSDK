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

#define CLASS_2_B530087BABCDBE6C_METHOD_2_0CAC8436EC78EB6B_OFFSET UNITYSDK_OFFSET(0xA9B5140)
#define CLASS_2_B530087BABCDBE6C_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA9B5450)
#define CLASS_2_B530087BABCDBE6C_METHOD_2_94BC1D64AA24B10A_OFFSET UNITYSDK_OFFSET(0xA9B5040)
#define CLASS_2_B530087BABCDBE6C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B5380)
#define CLASS_2_B530087BABCDBE6C__ONBIND_OFFSET UNITYSDK_OFFSET(0xA9B4F10)
#define CLASS_2_B530087BABCDBE6C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA9B53F0)

inline static constexpr unsigned int Class_2_B530087BABCDBE6C_TypeDefinitionIndex = 67544;

class Class_2_B530087BABCDBE6C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Action_1<::System::Object*>* Field_2_1; // 0x60
	::RPG::Client::GridFightTraitEffectConfig* Field_2_2; // 0x68
	::System::String* Field_2_3; // 0x70
	::RPG::Client::GridFightTraitConfigBase* Field_2_4; // 0x78
	::System::String* Field_2_5; // 0x80
	::RPG::Client::AnimatorButton* Field_2_6; // 0x88
	::RPG::Client::GridFightTrait* Field_2_7; // 0x90
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_8; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B530087BABCDBE6C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B530087BABCDBE6C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_94BC1D64AA24B10A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B530087BABCDBE6C_METHOD_2_94BC1D64AA24B10A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CAC8436EC78EB6B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B530087BABCDBE6C_METHOD_2_0CAC8436EC78EB6B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B530087BABCDBE6C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B530087BABCDBE6C_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
