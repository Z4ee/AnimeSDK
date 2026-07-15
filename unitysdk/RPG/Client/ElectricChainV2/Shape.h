#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x18E18300)
#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x18E18220)
#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E11110)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 70187;

	class Shape : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::Vector3 _CachedPoint; // 0x18
		::System::Boolean _Cached; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_BF972395CC722BF9_OFFSET))(this);
		}

		::System::Void Method_1_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_2450CFC043E97F54_OFFSET))(this);
		}
	};
}
