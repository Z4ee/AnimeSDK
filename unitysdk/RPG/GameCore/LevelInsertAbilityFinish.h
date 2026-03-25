#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98ED10)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98EDE0)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98ED90)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xA98EC10)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xA98EE30)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98EE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInsertAbilityFinish_TypeDefinitionIndex = 45729;

	class LevelInsertAbilityFinish : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* InsertAbilityName; // 0x18
		::RPG::GameCore::GameEntity* CasterEntity; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetList; // 0x28
		::System::Boolean Silence; // 0x30
		::System::Boolean ShowInActionBar; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelInsertAbilityFinish* Init(::Class_1_E3A8B05AA1BBEE81* pInstance, ::System::Boolean silence)
		{
			return ((::RPG::GameCore::LevelInsertAbilityFinish*(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_INIT_OFFSET))(this, pInstance, silence);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
