#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoNotRelateGameLogic/DeviceCarType.h"
#include "unitysdk/NPCCrowd/Accessories/MonoDeviceNumberPlate_Handle.h"
#include "unitysdk/NPCCrowd/Accessories/MonoDeviceNumberPlate_RandomPool.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MonoNotRelateGameLogic { class DynamicCarPlateAssetCfg; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_CLEARRANDOMPOOL_OFFSET UNITYSDK_OFFSET(0x12D0F1E0)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_DESPAWNINDEXTOPOOL_OFFSET UNITYSDK_OFFSET(0x12D0EC70)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_INITRANDOMPOOL_OFFSET UNITYSDK_OFFSET(0x12D0EDD0)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_INIT_OFFSET UNITYSDK_OFFSET(0x12D0E1B0)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12D0EA20)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_SPAWNRANDOMINDEXFROMPOOL_OFFSET UNITYSDK_OFFSET(0x12D0E3C0)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_UPDATEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x12D0E9E0)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x12D0E5B0)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D0F3B0)
#define NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0F360)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int MonoDeviceNumberPlate_TypeDefinitionIndex = 44542;

	class MonoDeviceNumberPlate : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Accessories::MonoDeviceNumberPlate_Handle>** StaticGet_Entries()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Accessories::MonoDeviceNumberPlate_Handle>**)Il2CppClass::FromTypeDefinitionIndex(MonoDeviceNumberPlate_TypeDefinitionIndex)->GetStaticField(0x43260);
		}
		static ::System::Collections::Generic::Dictionary_2<::MonoNotRelateGameLogic::DeviceCarType, ::NPCCrowd::Accessories::MonoDeviceNumberPlate_RandomPool>** StaticGet_Pools()
		{
			return (::System::Collections::Generic::Dictionary_2<::MonoNotRelateGameLogic::DeviceCarType, ::NPCCrowd::Accessories::MonoDeviceNumberPlate_RandomPool>**)Il2CppClass::FromTypeDefinitionIndex(MonoDeviceNumberPlate_TypeDefinitionIndex)->GetStaticField(0x43268);
		}
		static ::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg** StaticGet__assetCfg()
		{
			return (::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg**)Il2CppClass::FromTypeDefinitionIndex(MonoDeviceNumberPlate_TypeDefinitionIndex)->GetStaticField(0x43270);
		}
		::NPCCrowd::Accessories::MonoDeviceNumberPlate_Handle _poolHandle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE__CCTOR_OFFSET))();
		}

		::System::Void Init(::MonoNotRelateGameLogic::DeviceCarType deviceType, ::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::MonoNotRelateGameLogic::DeviceCarType, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_INIT_OFFSET))(this, deviceType, accessory);
		}

		::System::Void UpdateMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_UPDATEMESH_OFFSET))(this);
		}

		::System::Void UpdateDebugInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_UPDATEDEBUGINFO_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_ONDESTROY_OFFSET))(this);
		}

		static ::NPCCrowd::Accessories::MonoDeviceNumberPlate_Handle SpawnRandomIndexFromPool(::MonoNotRelateGameLogic::DeviceCarType deviceType, ::System::Int32 accessoryID)
		{
			return ((::NPCCrowd::Accessories::MonoDeviceNumberPlate_Handle(*)(::MonoNotRelateGameLogic::DeviceCarType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_SPAWNRANDOMINDEXFROMPOOL_OFFSET))(deviceType, accessoryID);
		}

		static ::System::Void DespawnIndexToPool(::NPCCrowd::Accessories::MonoDeviceNumberPlate_Handle handle)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::MonoDeviceNumberPlate_Handle))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_DESPAWNINDEXTOPOOL_OFFSET))(handle);
		}

		static ::System::Void InitRandomPool(::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg* assetCfg)
		{
			return ((::System::Void(*)(::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_INITRANDOMPOOL_OFFSET))(assetCfg);
		}

		static ::System::Void ClearRandomPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_MONODEVICENUMBERPLATE_CLEARRANDOMPOOL_OFFSET))();
		}
	};
}
