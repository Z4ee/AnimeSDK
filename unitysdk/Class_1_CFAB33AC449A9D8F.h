#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

class Class_1_C7BC7BD156CC39DE;
namespace RPG::Client { class IRogueTournPersonaStylePumanOrbInfo; }

#define CLASS_1_CFAB33AC449A9D8F_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xBE335B0)
#define CLASS_1_CFAB33AC449A9D8F_GET_PUMANORBINFO_OFFSET UNITYSDK_OFFSET(0xBE335F0)
#define CLASS_1_CFAB33AC449A9D8F_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xBE335D0)
#define CLASS_1_CFAB33AC449A9D8F_METHOD_1_76BE4CFCDF7FD7CF_OFFSET UNITYSDK_OFFSET(0xBE334B0)
#define CLASS_1_CFAB33AC449A9D8F_METHOD_1_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0xBE33410)
#define CLASS_1_CFAB33AC449A9D8F_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xBE335C0)
#define CLASS_1_CFAB33AC449A9D8F_SET_PUMANORBINFO_OFFSET UNITYSDK_OFFSET(0xBE33600)
#define CLASS_1_CFAB33AC449A9D8F_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xBE335E0)
#define CLASS_1_CFAB33AC449A9D8F_UPDATE_OFFSET UNITYSDK_OFFSET(0xBE33560)
#define CLASS_1_CFAB33AC449A9D8F__CTOR_OFFSET UNITYSDK_OFFSET(0xBE334A0)

inline static constexpr unsigned int Class_1_CFAB33AC449A9D8F_TypeDefinitionIndex = 67705;

class Class_1_CFAB33AC449A9D8F : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaStylePumanOrbInfo* _PumanOrbInfo_k__BackingField; // 0x10
	::Enum_3_0F1B992870941C13_4 _SourceType_k__BackingField; // 0x18
	::System::UInt64 _ModifierID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F__CTOR_OFFSET))(this);
	}

	static ::Class_1_CFAB33AC449A9D8F* Method_1_98FE8344617B99D4(::Class_1_C7BC7BD156CC39DE* a1)
	{
		return ((::Class_1_CFAB33AC449A9D8F*(*)(::Class_1_C7BC7BD156CC39DE*))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_METHOD_1_98FE8344617B99D4_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_C7BC7BD156CC39DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7BC7BD156CC39DE*))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_76BE4CFCDF7FD7CF(::Class_1_C7BC7BD156CC39DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7BC7BD156CC39DE*))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_METHOD_1_76BE4CFCDF7FD7CF_OFFSET))(this, a1);
	}

	::System::UInt64 get_ModifierID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_GET_MODIFIERID_OFFSET))(this);
	}

	::System::Void set_ModifierID(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_SET_MODIFIERID_OFFSET))(this, a1);
	}

	::Enum_3_0F1B992870941C13_4 get_SourceType()
	{
		return ((::Enum_3_0F1B992870941C13_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_GET_SOURCETYPE_OFFSET))(this);
	}

	::System::Void set_SourceType(::Enum_3_0F1B992870941C13_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_4))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_SET_SOURCETYPE_OFFSET))(this, a1);
	}

	::RPG::Client::IRogueTournPersonaStylePumanOrbInfo* get_PumanOrbInfo()
	{
		return ((::RPG::Client::IRogueTournPersonaStylePumanOrbInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_GET_PUMANORBINFO_OFFSET))(this);
	}

	::System::Void set_PumanOrbInfo(::RPG::Client::IRogueTournPersonaStylePumanOrbInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStylePumanOrbInfo*))((::PBYTE)hIl2Cpp + CLASS_1_CFAB33AC449A9D8F_SET_PUMANORBINFO_OFFSET))(this, a1);
	}
};
