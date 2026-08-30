#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

#define CLASS_2_716EF029D605CBA8_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x105DA520)
#define CLASS_2_716EF029D605CBA8_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x105DA4D0)
#define CLASS_2_716EF029D605CBA8_GET_FEVERTEAM_OFFSET UNITYSDK_OFFSET(0x105DA580)
#define CLASS_2_716EF029D605CBA8_METHOD_2_CECCF9E70C3BCD62_OFFSET UNITYSDK_OFFSET(0x105DA480)
#define CLASS_2_716EF029D605CBA8_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x105DA570)
#define CLASS_2_716EF029D605CBA8_SET_FEVERTEAM_OFFSET UNITYSDK_OFFSET(0x105DA590)
#define CLASS_2_716EF029D605CBA8__CTOR_OFFSET UNITYSDK_OFFSET(0x105DA5A0)

inline static constexpr unsigned int Class_2_716EF029D605CBA8_TypeDefinitionIndex = 57024;

class Class_2_716EF029D605CBA8 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::TeamType _FeverTeam_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_716EF029D605CBA8__CTOR_OFFSET))(this);
	}

	::Class_2_716EF029D605CBA8* Method_2_CECCF9E70C3BCD62(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_2_716EF029D605CBA8*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_716EF029D605CBA8_METHOD_2_CECCF9E70C3BCD62_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_716EF029D605CBA8_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_716EF029D605CBA8_GETEVENTTYPE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_716EF029D605CBA8_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::TeamType get_FeverTeam()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_716EF029D605CBA8_GET_FEVERTEAM_OFFSET))(this);
	}

	::System::Void set_FeverTeam(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_716EF029D605CBA8_SET_FEVERTEAM_OFFSET))(this, a1);
	}
};
