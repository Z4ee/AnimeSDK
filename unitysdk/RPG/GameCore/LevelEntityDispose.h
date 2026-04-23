#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYDISPOSE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D61D0)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D6180)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D6130)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xB6D6220)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_INIT_OFFSET UNITYSDK_OFFSET(0xB6D60E0)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xB6D6230)
#define RPG_GAMECORE_LEVELENTITYDISPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D6240)
#define RPG_GAMECORE_LEVELENTITYDISPOSE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D6250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityDispose_TypeDefinitionIndex = 52318;

	class LevelEntityDispose : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityDispose* Init(::RPG::GameCore::GameEntity* target)
		{
			return ((::RPG::GameCore::LevelEntityDispose*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_INIT_OFFSET))(this, target);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Target()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_SET_TARGET_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
