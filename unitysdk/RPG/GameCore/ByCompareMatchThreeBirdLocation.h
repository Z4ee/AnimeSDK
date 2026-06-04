#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_0A2836F70137B5D2_OFFSET UNITYSDK_OFFSET(0x1951E490)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_4BAE5F190C56B87E_OFFSET UNITYSDK_OFFSET(0x1951E510)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_50A89E2182EADD97_OFFSET UNITYSDK_OFFSET(0x1951E2B0)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_94599E0E08FF9385_OFFSET UNITYSDK_OFFSET(0x1951E1E0)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1951E260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMatchThreeBirdLocation_TypeDefinitionIndex = 19835;

	class ByCompareMatchThreeBirdLocation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BirdID; // 0x20
		::RPG::GameCore::DynamicFloat* LocationID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_94599E0E08FF9385(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_94599E0E08FF9385_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50A89E2182EADD97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_50A89E2182EADD97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0A2836F70137B5D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_0A2836F70137B5D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4BAE5F190C56B87E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_METHOD_4_4BAE5F190C56B87E_OFFSET))(a1, a2);
		}
	};
}
