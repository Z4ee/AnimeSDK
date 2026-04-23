#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"

#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D8250)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D82F0)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D82A0)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_INIT_OFFSET UNITYSDK_OFFSET(0xB6D8200)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D8340)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D8350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEventApplyOperation_TypeDefinitionIndex = 52356;

	class LevelEventApplyOperation : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::OperationTypeMask OperationMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEventApplyOperation* Init(::RPG::GameCore::OperationTypeMask opMask)
		{
			return ((::RPG::GameCore::LevelEventApplyOperation*(*)(::PVOID, ::RPG::GameCore::OperationTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_INIT_OFFSET))(this, opMask);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
