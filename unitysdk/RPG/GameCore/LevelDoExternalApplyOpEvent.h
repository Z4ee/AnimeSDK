#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"

#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D5650)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D56F0)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D56A0)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xB6D55D0)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D5740)
#define RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D5750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDoExternalApplyOpEvent_TypeDefinitionIndex = 52357;

	class LevelDoExternalApplyOpEvent : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_B87448D5E720C3DE Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelDoExternalApplyOpEvent* Init(::Struct_2_B87448D5E720C3DE op)
		{
			return ((::RPG::GameCore::LevelDoExternalApplyOpEvent*(*)(::PVOID, ::Struct_2_B87448D5E720C3DE))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_INIT_OFFSET))(this, op);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDOEXTERNALAPPLYOPEVENT___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
