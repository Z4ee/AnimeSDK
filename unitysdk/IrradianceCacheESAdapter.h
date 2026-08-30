#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/VoxelIrradianceCacheProxyMode.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace RPG::Client { class IAssetOperation; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class VoxelIrradianceCache; }
namespace UnityEngine { class VoxelIrradianceCacheData; }

#define IRRADIANCECACHEESADAPTER_CHECKVOXELIRRADIANCECACHE_OFFSET UNITYSDK_OFFSET(0x161C00A0)
#define IRRADIANCECACHEESADAPTER_DISABLEVIC_OFFSET UNITYSDK_OFFSET(0x161BF8C0)
#define IRRADIANCECACHEESADAPTER_ENABLEVIC_OFFSET UNITYSDK_OFFSET(0x161BFD40)
#define IRRADIANCECACHEESADAPTER_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x161BFC50)
#define IRRADIANCECACHEESADAPTER_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x161BFB20)
#define IRRADIANCECACHEESADAPTER_METHOD_6_4D3083F9FF0D275B_OFFSET UNITYSDK_OFFSET(0x161C0130)
#define IRRADIANCECACHEESADAPTER_METHOD_6_9259A31A15545FC5_OFFSET UNITYSDK_OFFSET(0x161C03C0)
#define IRRADIANCECACHEESADAPTER_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x161C0000)
#define IRRADIANCECACHEESADAPTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x161C0820)
#define IRRADIANCECACHEESADAPTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x161C0620)
#define IRRADIANCECACHEESADAPTER_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x161C0050)
#define IRRADIANCECACHEESADAPTER_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x161BFBC0)
#define IRRADIANCECACHEESADAPTER_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x161BFA30)
#define IRRADIANCECACHEESADAPTER_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x161BFA80)
#define IRRADIANCECACHEESADAPTER_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x161BFCF0)
#define IRRADIANCECACHEESADAPTER_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x161BFCA0)
#define IRRADIANCECACHEESADAPTER_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x161BFB70)
#define IRRADIANCECACHEESADAPTER_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x161BF870)
#define IRRADIANCECACHEESADAPTER_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x161BFF70)
#define IRRADIANCECACHEESADAPTER_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x161BFC10)
#define IRRADIANCECACHEESADAPTER_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x161BFAD0)
#define IRRADIANCECACHEESADAPTER_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x161BF7B0)
#define IRRADIANCECACHEESADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x161C0900)

inline static constexpr unsigned int IrradianceCacheESAdapter_TypeDefinitionIndex = 47777;

class IrradianceCacheESAdapter : public ::ScenenLightManager::SceneManagedLightComponent1
{
public:
	::UnityEngine::VoxelIrradianceCache* KGBIEADAEJG; // 0x28
	::UnityEngine::VoxelIrradianceCacheData* NDHIALHJPCK; // 0x30
	::UnityEngine::Mesh* GEAMIDMPIAA; // 0x38
	::System::String* OONEMIPDIAF; // 0x40
	::System::String* MBAPAJOHHJE; // 0x48
	::UnityEngine::Vector3 MAKKHCLEMBG; // 0x50
	::UnityEngine::VoxelIrradianceCacheProxyMode PNODNPMCNCK; // 0x5C
	::System::Single LFEAJEGHEBH; // 0x60
	::System::Single GKAFBPONEEP; // 0x64
	::System::Boolean EJKPPAGBOEN; // 0x68
	::RPG::Client::IAssetOperation* HKKNPDJKFON; // 0x70
	::RPG::Client::IAssetOperation* CPMCAFELJGP; // 0x78
	::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x80
	::System::Int32 LightQualityVersion; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER__CTOR_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void CheckVoxelIrradianceCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_CHECKVOXELIRRADIANCECACHE_OFFSET))(this);
	}

	::System::Boolean Method_6_4D3083F9FF0D275B(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_METHOD_6_4D3083F9FF0D275B_OFFSET))(this, a1);
	}

	::System::Boolean Method_6_9259A31A15545FC5(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_METHOD_6_9259A31A15545FC5_OFFSET))(this, a1);
	}

	::System::Void EnableVIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ENABLEVIC_OFFSET))(this);
	}

	::System::Void DisableVIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_DISABLEVIC_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONDISABLE_OFFSET))(this);
	}
};
