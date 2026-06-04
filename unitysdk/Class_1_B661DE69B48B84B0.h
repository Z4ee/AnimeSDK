#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"

class Class_1_12210BFF9F8CB0CA;
class Class_1_D8203AFB32E9259C;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_B661DE69B48B84B0_METHOD_1_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0x112A89A0)
#define CLASS_1_B661DE69B48B84B0_METHOD_1_92E298F85CD1081D_OFFSET UNITYSDK_OFFSET(0x112A84E0)
#define CLASS_1_B661DE69B48B84B0_METHOD_1_ABDF6914795CF7E3_OFFSET UNITYSDK_OFFSET(0x112A83B0)
#define CLASS_1_B661DE69B48B84B0_METHOD_1_D00CA09B6254F1ED_OFFSET UNITYSDK_OFFSET(0x112A86E0)
#define CLASS_1_B661DE69B48B84B0_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x112A7F80)
#define CLASS_1_B661DE69B48B84B0_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x112A80B0)
#define CLASS_1_B661DE69B48B84B0__CTOR_OFFSET UNITYSDK_OFFSET(0x112A8B30)

inline static constexpr unsigned int Class_1_B661DE69B48B84B0_TypeDefinitionIndex = 50773;

class Class_1_B661DE69B48B84B0 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::Class_1_12210BFF9F8CB0CA* Field_1_3; // 0x10
	::Class_1_D8203AFB32E9259C* Field_1_4; // 0x18
	::RPG::GameCore::GameWorld* Field_1_5; // 0x20
	::System::Boolean Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_ABDF6914795CF7E3(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_ABDF6914795CF7E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_92E298F85CD1081D(::Class_1_D8203AFB32E9259C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_92E298F85CD1081D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D00CA09B6254F1ED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_D00CA09B6254F1ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_2DE13BE11F24F545_OFFSET))(this, a1);
	}
};
