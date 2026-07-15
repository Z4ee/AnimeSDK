#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Shape.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_POINT_METHOD_2_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x18E17450)
#define RPG_CLIENT_ELECTRICCHAINV2_POINT_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x18E17560)
#define RPG_CLIENT_ELECTRICCHAINV2_POINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E15D40)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Point_TypeDefinitionIndex = 70188;

	class Point : public ::RPG::Client::ElectricChainV2::Shape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POINT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_4AB9012B5D01108B()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POINT_METHOD_2_4AB9012B5D01108B_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_C2245EC58D417830()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POINT_METHOD_2_C2245EC58D417830_OFFSET))(this);
		}
	};
}
