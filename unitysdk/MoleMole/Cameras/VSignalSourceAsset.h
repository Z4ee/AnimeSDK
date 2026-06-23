#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_VSIGNALSOURCEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x144C6210)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VSignalSourceAsset_TypeDefinitionIndex = 67458;

	class VSignalSourceAsset : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VSIGNALSOURCEASSET__CTOR_OFFSET))(this);
		}
	};
}
