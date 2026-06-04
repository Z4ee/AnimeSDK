#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MapConnectivityEdgeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG_METHOD_2_653BB01D7C861BAE_OFFSET UNITYSDK_OFFSET(0x198BB800)
#define RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198BB8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapConnectivityEdgeWeightConfig_TypeDefinitionIndex = 16521;

	class MapConnectivityEdgeWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MapConnectivityEdgeType, ::System::Single>* EdgeTypeWeights; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_653BB01D7C861BAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapConnectivityEdgeWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapConnectivityEdgeWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG_METHOD_2_653BB01D7C861BAE_OFFSET))(a1, a2);
		}
	};
}
