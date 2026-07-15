#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_CONVINCEANCHORCONFIG_ANCHORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1802A8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceAnchorConfig_AnchorData_TypeDefinitionIndex = 57952;

	class ConvinceAnchorConfig_AnchorData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Vector3 CamLocalPos; // 0x18
		::UnityEngine::Quaternion CamLocalRot; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_ANCHORDATA__CTOR_OFFSET))(this);
		}
	};
}
