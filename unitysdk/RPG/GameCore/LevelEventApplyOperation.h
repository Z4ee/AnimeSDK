#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"

#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD24070)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD24110)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD240C0)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_INIT_OFFSET UNITYSDK_OFFSET(0x1DD24020)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD24160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEventApplyOperation_TypeDefinitionIndex = 56987;

	class LevelEventApplyOperation : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::OperationTypeMask OperationMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEventApplyOperation* Init(::RPG::GameCore::OperationTypeMask a1)
		{
			return ((::RPG::GameCore::LevelEventApplyOperation*(*)(::PVOID, ::RPG::GameCore::OperationTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
