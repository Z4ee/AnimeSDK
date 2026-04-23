#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"

class Class_1_05E595DC72CB83CA;
class Class_1_8976C473AE3B2B47;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6DE98EDC44ECA45A_METHOD_1_6C5FAA36997AA199_OFFSET UNITYSDK_OFFSET(0xA7B4CF0)
#define CLASS_1_6DE98EDC44ECA45A_METHOD_1_A17EAF248A955182_OFFSET UNITYSDK_OFFSET(0xA7B5040)
#define CLASS_1_6DE98EDC44ECA45A_METHOD_1_EE410820BF510F18_OFFSET UNITYSDK_OFFSET(0xA7B4C70)
#define CLASS_1_6DE98EDC44ECA45A_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xA7B4B10)
#define CLASS_1_6DE98EDC44ECA45A_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xA7B4BB0)
#define CLASS_1_6DE98EDC44ECA45A__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B5230)

inline static constexpr unsigned int Class_1_6DE98EDC44ECA45A_TypeDefinitionIndex = 49913;

class Class_1_6DE98EDC44ECA45A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::GameEntityList*>* Field_1_2; // 0x10
	::RPG::GameCore::GameWorld* Field_1_0; // 0x18
	::Class_1_8976C473AE3B2B47* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE98EDC44ECA45A__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_6DE98EDC44ECA45A_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE98EDC44ECA45A_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_EE410820BF510F18(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_6DE98EDC44ECA45A_METHOD_1_EE410820BF510F18_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6C5FAA36997AA199(::Class_1_05E595DC72CB83CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*))((::PBYTE)hIl2Cpp + CLASS_1_6DE98EDC44ECA45A_METHOD_1_6C5FAA36997AA199_OFFSET))(this, a1);
	}

	::System::Void Method_1_A17EAF248A955182(::Class_1_05E595DC72CB83CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*))((::PBYTE)hIl2Cpp + CLASS_1_6DE98EDC44ECA45A_METHOD_1_A17EAF248A955182_OFFSET))(this, a1);
	}
};
