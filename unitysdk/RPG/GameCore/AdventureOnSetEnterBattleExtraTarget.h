#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCEDEC0)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCCEDF60)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCCEDF10)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_INIT_OFFSET UNITYSDK_OFFSET(0xCCEDE70)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xCCEDFB0)
#define RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCEDFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureOnSetEnterBattleExtraTarget_TypeDefinitionIndex = 52899;

	class AdventureOnSetEnterBattleExtraTarget : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnSetEnterBattleExtraTarget* Init(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::RPG::GameCore::AdventureOnSetEnterBattleExtraTarget*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETENTERBATTLEEXTRATARGET_INIT_OFFSET))(this, a1);
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
