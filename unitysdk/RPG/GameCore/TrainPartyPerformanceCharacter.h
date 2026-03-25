#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_METHOD_2_47FBB1E0DAD85FB8_OFFSET UNITYSDK_OFFSET(0x178AE710)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_METHOD_2_E797777778018645_OFFSET UNITYSDK_OFFSET(0x178AE550)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x178AE700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceCharacter_TypeDefinitionIndex = 14874;

	class TrainPartyPerformanceCharacter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::UInt32 AnchorID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E797777778018645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_METHOD_2_E797777778018645_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_47FBB1E0DAD85FB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_METHOD_2_47FBB1E0DAD85FB8_OFFSET))(a1, a2);
		}
	};
}
