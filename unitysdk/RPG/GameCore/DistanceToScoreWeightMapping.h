#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DistanceToScoreWeight; }

#define RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING_METHOD_2_56E783EDC45E71CF_OFFSET UNITYSDK_OFFSET(0x196BDA90)
#define RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x196BDB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistanceToScoreWeightMapping_TypeDefinitionIndex = 14863;

	class DistanceToScoreWeightMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DistanceToScoreWeight*>* WeightConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_56E783EDC45E71CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistanceToScoreWeightMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistanceToScoreWeightMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING_METHOD_2_56E783EDC45E71CF_OFFSET))(a1, a2);
		}
	};
}
