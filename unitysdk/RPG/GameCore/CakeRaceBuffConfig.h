#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffStackType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceEventHandler; }
namespace RPG::GameCore { class CakeRacePropertyModifier; }

#define RPG_GAMECORE_CAKERACEBUFFCONFIG_METHOD_2_B6D0FE43E2FFB509_OFFSET UNITYSDK_OFFSET(0x1D0FE3B0)
#define RPG_GAMECORE_CAKERACEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FE640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBuffConfig_TypeDefinitionIndex = 18154;

	class CakeRaceBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceBuffName Name; // 0x10
		::System::Int32 DurationMs; // 0x14
		::RPG::GameCore::CakeRaceBuffStackType StackType; // 0x18
		::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* PropertyModifiers; // 0x20
		::Il2CppArray<::RPG::GameCore::CakeRaceEventHandler*>* EventHandlers; // 0x28
		::Il2CppArray<::System::Int32>* Params; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6D0FE43E2FFB509(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBUFFCONFIG_METHOD_2_B6D0FE43E2FFB509_OFFSET))(a1, a2);
		}
	};
}
