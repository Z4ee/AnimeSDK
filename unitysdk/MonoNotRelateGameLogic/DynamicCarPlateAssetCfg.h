#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoNotRelateGameLogic/DeviceCarType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define MONONOTRELATEGAMELOGIC_DYNAMICCARPLATEASSETCFG__CTOR_OFFSET UNITYSDK_OFFSET(0xF3ADB70)

namespace MonoNotRelateGameLogic
{
	inline static constexpr unsigned int DynamicCarPlateAssetCfg_TypeDefinitionIndex = 65319;

	class DynamicCarPlateAssetCfg : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::UnityEngine::Material* DynamicCarPlateMaterial; // 0x58
		::System::Collections::Generic::Dictionary_2<::MonoNotRelateGameLogic::DeviceCarType, ::Il2CppArray<::UnityEngine::Mesh*>*>* CarPlateMesheGroups; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_DYNAMICCARPLATEASSETCFG__CTOR_OFFSET))(this);
		}
	};
}
