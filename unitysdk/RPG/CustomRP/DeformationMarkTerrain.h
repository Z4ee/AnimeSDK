#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1813BBF0)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1813BCC0)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1813BB40)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1813BD70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DeformationMarkTerrain_TypeDefinitionIndex = 35105;

	class DeformationMarkTerrain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ReceiveDeformation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONDISABLE_OFFSET))(this);
		}

		::System::Void ApplySettings(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_APPLYSETTINGS_OFFSET))(this, enable);
		}
	};
}
