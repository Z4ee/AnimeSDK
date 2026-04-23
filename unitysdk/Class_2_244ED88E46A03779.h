#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

#define CLASS_2_244ED88E46A03779_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xAA19180)
#define CLASS_2_244ED88E46A03779_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xAA19130)
#define CLASS_2_244ED88E46A03779_GET_FEVERTEAM_OFFSET UNITYSDK_OFFSET(0xAA191E0)
#define CLASS_2_244ED88E46A03779_METHOD_2_CECCF9E70C3BCD62_OFFSET UNITYSDK_OFFSET(0xAA190E0)
#define CLASS_2_244ED88E46A03779_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAA191D0)
#define CLASS_2_244ED88E46A03779_SET_FEVERTEAM_OFFSET UNITYSDK_OFFSET(0xAA191F0)
#define CLASS_2_244ED88E46A03779__CTOR_OFFSET UNITYSDK_OFFSET(0xAA19200)

inline static constexpr unsigned int Class_2_244ED88E46A03779_TypeDefinitionIndex = 52392;

class Class_2_244ED88E46A03779 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::TeamType _FeverTeam_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_244ED88E46A03779__CTOR_OFFSET))(this);
	}

	::Class_2_244ED88E46A03779* Method_2_CECCF9E70C3BCD62(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_2_244ED88E46A03779*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_244ED88E46A03779_METHOD_2_CECCF9E70C3BCD62_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_244ED88E46A03779_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_244ED88E46A03779_GETEVENTTYPE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_244ED88E46A03779_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::TeamType get_FeverTeam()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_244ED88E46A03779_GET_FEVERTEAM_OFFSET))(this);
	}

	::System::Void set_FeverTeam(::RPG::GameCore::TeamType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_244ED88E46A03779_SET_FEVERTEAM_OFFSET))(this, value);
	}
};
