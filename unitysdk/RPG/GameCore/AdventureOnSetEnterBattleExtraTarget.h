#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84AFC0)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA84B060)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA84B010)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_INIT_OFFSET UNITYSDK_OFFSET(0xA84AF70)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA84B0B0)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84B0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureOnSetEnterBattleExtraTarget_TypeDefinitionIndex = 45552;

	class AdventureOnSetEnterBattleExtraTarget : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnSetEnterBattleExtraTarget* Init(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* target)
		{
			return ((::RPG::GameCore::AdventureOnSetEnterBattleExtraTarget*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_INIT_OFFSET))(this, target);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
