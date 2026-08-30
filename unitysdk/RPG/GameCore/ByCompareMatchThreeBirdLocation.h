#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_2DFED8C2CCA24E37_OFFSET UNITYSDK_OFFSET(0x1BBA33F0)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_34FBFD2D9B910F2A_OFFSET UNITYSDK_OFFSET(0x1C32A440)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_50A89E2182EADD97_OFFSET UNITYSDK_OFFSET(0x1BBA3210)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_D1B1015F19514840_OFFSET UNITYSDK_OFFSET(0x1BBA3430)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA3420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMatchThreeBirdLocation_TypeDefinitionIndex = 20745;

	class ByCompareMatchThreeBirdLocation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BirdID; // 0x20
		::RPG::GameCore::DynamicFloat* LocationID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34FBFD2D9B910F2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_34FBFD2D9B910F2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50A89E2182EADD97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_50A89E2182EADD97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2DFED8C2CCA24E37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_2DFED8C2CCA24E37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1B1015F19514840(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_D1B1015F19514840_OFFSET))(a1, a2);
		}
	};
}
