#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELRECOMMENDATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18803A20)
#define RPG_GAMECORE_CHIMERADUELRECOMMENDATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18803B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRecommendationRow_TypeDefinitionIndex = 10624;

	class ChimeraDuelRecommendationRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChimeraIDList; // 0x10
		::System::UInt32 RecommendationID; // 0x18
		::System::UInt32 MasterID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRECOMMENDATIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelRecommendationRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRecommendationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRECOMMENDATIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
