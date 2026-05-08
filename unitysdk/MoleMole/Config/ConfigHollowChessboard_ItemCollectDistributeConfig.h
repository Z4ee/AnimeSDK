#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTDISTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1241D170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectDistributeConfig_TypeDefinitionIndex = 43436;

	class ConfigHollowChessboard_ItemCollectDistributeConfig : public ::System::Object
	{
	public:
		::System::Int32 Weight; // 0x10
		::UnityEngine::Vector2 BurstDistanceRatio; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTDISTRIBUTECONFIG__CTOR_OFFSET))(this);
		}
	};
}
