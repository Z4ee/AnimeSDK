#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA21FD40)
#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0xA21F310)
#define RPG_CLIENT_ELECTRICCHAINV2_SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA218FA0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 67731;

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

		::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_FC26FA0DD9B4AAF4_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SHAPE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
