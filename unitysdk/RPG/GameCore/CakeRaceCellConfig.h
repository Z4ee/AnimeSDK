#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACECELLCONFIG_METHOD_2_6DFCAE526C6A7F2A_OFFSET UNITYSDK_OFFSET(0x187701C0)
#define RPG_GAMECORE_CAKERACECELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187704C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCellConfig_TypeDefinitionIndex = 17512;

	class CakeRaceCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceCellType Type; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Int32 HazardWeight; // 0x20
		::System::UInt32 Height; // 0x24
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* GroudedActions; // 0x28
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* LeaveActions; // 0x30
		::System::Boolean CanRevive; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6DFCAE526C6A7F2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCONFIG_METHOD_2_6DFCAE526C6A7F2A_OFFSET))(a1, a2);
		}
	};
}
