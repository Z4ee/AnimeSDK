#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_D481624284E0D4C0_CLEAR_OFFSET UNITYSDK_OFFSET(0x17CB9F50)
#define CLASS_2_D481624284E0D4C0_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x17CB9EE0)
#define CLASS_2_D481624284E0D4C0_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17CB9FA0)
#define CLASS_2_D481624284E0D4C0__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBA000)

inline static constexpr unsigned int Class_2_D481624284E0D4C0_TypeDefinitionIndex = 65934;

class Class_2_D481624284E0D4C0 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D481624284E0D4C0__CTOR_OFFSET))(this);
	}

	static ::Class_2_D481624284E0D4C0* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_D481624284E0D4C0*(*)())((::PBYTE)hIl2Cpp + CLASS_2_D481624284E0D4C0_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D481624284E0D4C0_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D481624284E0D4C0_ONEXECUTE_OFFSET))(this);
	}
};
