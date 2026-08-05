#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_VSIGNALSOURCEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA85A0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VSignalSourceAsset_TypeDefinitionIndex = 84131;

	class VSignalSourceAsset : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VSIGNALSOURCEASSET__CTOR_OFFSET))(this);
		}
	};
}
