#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_7;
namespace RPG::Client { class IRogueTournPersonaStyleAncientCoinHubInfo; }

#define CLASS_1_B12F67C9F21F46F1_GET_ANCIENTCOININFO_OFFSET UNITYSDK_OFFSET(0x19899E20)
#define CLASS_1_B12F67C9F21F46F1_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x19899DE0)
#define CLASS_1_B12F67C9F21F46F1_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x19899E00)
#define CLASS_1_B12F67C9F21F46F1_METHOD_1_33F68CBA78A78894_OFFSET UNITYSDK_OFFSET(0x19899CE0)
#define CLASS_1_B12F67C9F21F46F1_METHOD_1_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x19899C40)
#define CLASS_1_B12F67C9F21F46F1_SET_ANCIENTCOININFO_OFFSET UNITYSDK_OFFSET(0x19899E30)
#define CLASS_1_B12F67C9F21F46F1_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x19899DF0)
#define CLASS_1_B12F67C9F21F46F1_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x19899E10)
#define CLASS_1_B12F67C9F21F46F1_UPDATE_OFFSET UNITYSDK_OFFSET(0x19899D90)
#define CLASS_1_B12F67C9F21F46F1__CTOR_OFFSET UNITYSDK_OFFSET(0x19899CD0)

inline static constexpr unsigned int Class_1_B12F67C9F21F46F1_TypeDefinitionIndex = 67699;

class Class_1_B12F67C9F21F46F1 : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo* _AncientCoinInfo_k__BackingField; // 0x10
	::Enum_3_0F1B992870941C13_4 _SourceType_k__BackingField; // 0x18
	::System::UInt64 _ModifierID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1__CTOR_OFFSET))(this);
	}

	static ::Class_1_B12F67C9F21F46F1* Method_1_98FE8344617B99D4(::Class_1_BB4B99DE4C2501EC_7* a1)
	{
		return ((::Class_1_B12F67C9F21F46F1*(*)(::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_METHOD_1_98FE8344617B99D4_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_BB4B99DE4C2501EC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_33F68CBA78A78894(::Class_1_BB4B99DE4C2501EC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_METHOD_1_33F68CBA78A78894_OFFSET))(this, a1);
	}

	::System::UInt64 get_ModifierID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_GET_MODIFIERID_OFFSET))(this);
	}

	::System::Void set_ModifierID(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_SET_MODIFIERID_OFFSET))(this, a1);
	}

	::Enum_3_0F1B992870941C13_4 get_SourceType()
	{
		return ((::Enum_3_0F1B992870941C13_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_GET_SOURCETYPE_OFFSET))(this);
	}

	::System::Void set_SourceType(::Enum_3_0F1B992870941C13_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_4))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_SET_SOURCETYPE_OFFSET))(this, a1);
	}

	::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo* get_AncientCoinInfo()
	{
		return ((::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_GET_ANCIENTCOININFO_OFFSET))(this);
	}

	::System::Void set_AncientCoinInfo(::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyleAncientCoinHubInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B12F67C9F21F46F1_SET_ANCIENTCOININFO_OFFSET))(this, a1);
	}
};
