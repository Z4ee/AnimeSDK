#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x16BE7CB0)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16BE7D70)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16BE7C00)
#define RPG_CUSTOMRP_DEFORMATIONMARKTERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE7E20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DeformationMarkTerrain_TypeDefinitionIndex = 36172;

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
