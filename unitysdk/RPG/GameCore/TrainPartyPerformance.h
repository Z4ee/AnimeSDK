#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyPerformanceCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCE_METHOD_2_484F6C1C98F2D5BC_OFFSET UNITYSDK_OFFSET(0x19DF79D0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF7B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformance_TypeDefinitionIndex = 15447;

	class TrainPartyPerformance : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformanceCharacter*>* Characters; // 0x10
		::System::String* LevelGraphConfigPath; // 0x18
		::Il2CppArray<::System::UInt32>* Groups; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_484F6C1C98F2D5BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCE_METHOD_2_484F6C1C98F2D5BC_OFFSET))(a1, a2);
		}
	};
}
