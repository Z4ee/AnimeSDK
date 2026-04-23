#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define RPG_GAMECORE_CAKERACEEVENTHANDLER_METHOD_2_10B3E16EAA3C89C0_OFFSET UNITYSDK_OFFSET(0x18770DB0)
#define RPG_GAMECORE_CAKERACEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18770F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceEventHandler_TypeDefinitionIndex = 17420;

	class CakeRaceEventHandler : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceCoreEventType EventType; // 0x10
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* Actions; // 0x18
		::System::Boolean IsOnlyListenOwner; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEVENTHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_10B3E16EAA3C89C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceEventHandler*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceEventHandler*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEVENTHANDLER_METHOD_2_10B3E16EAA3C89C0_OFFSET))(a1, a2);
		}
	};
}
