#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELINSERTABILITYABORT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DCC60)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DCD30)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DCCE0)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT_INIT_OFFSET UNITYSDK_OFFSET(0xB6DCB70)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DCD80)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DCDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInsertAbilityAbort_TypeDefinitionIndex = 52382;

	class LevelInsertAbilityAbort : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetList; // 0x18
		::RPG::GameCore::GameEntity* CasterEntity; // 0x20
		::System::String* InsertAbilityName; // 0x28
		::System::Boolean ShowInActionBar; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelInsertAbilityAbort* Init(::Class_1_E3A8B05AA1BBEE81* pInstance)
		{
			return ((::RPG::GameCore::LevelInsertAbilityAbort*(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_INIT_OFFSET))(this, pInstance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
