#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C6A82A0)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C6A8360)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6A81F0)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A8410)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DeformationMarkTerrain_TypeDefinitionIndex = 37031;

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

		::System::Void ApplySettings(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_APPLYSETTINGS_OFFSET))(this, a1);
		}
	};
}
