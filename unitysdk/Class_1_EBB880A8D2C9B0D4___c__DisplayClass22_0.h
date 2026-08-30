#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class IMapDataSource; }

#define CLASS_1_EBB880A8D2C9B0D4___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3FDD90)
#define CLASS_1_EBB880A8D2C9B0D4___C__DISPLAYCLASS22_0___CHECKSUBMISSIONCONDITIONS_B__0_OFFSET UNITYSDK_OFFSET(0xC400A90)

inline static constexpr unsigned int Class_1_EBB880A8D2C9B0D4___c__DisplayClass22_0_TypeDefinitionIndex = 62285;

class Class_1_EBB880A8D2C9B0D4___c__DisplayClass22_0 : public ::System::Object
{
public:
	::RPG::Client::NavMap::IMapDataSource* mapData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::SubMissionState __CheckSubMissionConditions_b__0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4___C__DISPLAYCLASS22_0___CHECKSUBMISSIONCONDITIONS_B__0_OFFSET))(this, a1);
	}
};
