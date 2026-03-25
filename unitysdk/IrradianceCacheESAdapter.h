#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/VoxelIrradianceCacheProxyMode.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
class Class_1_E4CB20B056222958;
namespace RPG::Client { class IAssetOperation; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class VoxelIrradianceCache; }
namespace UnityEngine { class VoxelIrradianceCacheData; }

#define IRRADIANCECACHEESADAPTER_CHECKVOXELIRRADIANCECACHE_OFFSET UNITYSDK_OFFSET(0x111DF550)
#define IRRADIANCECACHEESADAPTER_DISABLEVIC_OFFSET UNITYSDK_OFFSET(0x111DED90)
#define IRRADIANCECACHEESADAPTER_ENABLEVIC_OFFSET UNITYSDK_OFFSET(0x111DF210)
#define IRRADIANCECACHEESADAPTER_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x111DF120)
#define IRRADIANCECACHEESADAPTER_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x111DEFF0)
#define IRRADIANCECACHEESADAPTER_METHOD_6_05DE2E18EDE0747F_OFFSET UNITYSDK_OFFSET(0x111DF5E0)
#define IRRADIANCECACHEESADAPTER_METHOD_6_9259A31A15545FC5_OFFSET UNITYSDK_OFFSET(0x111DF830)
#define IRRADIANCECACHEESADAPTER_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x111DF4B0)
#define IRRADIANCECACHEESADAPTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x111DFC40)
#define IRRADIANCECACHEESADAPTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x111DFA40)
#define IRRADIANCECACHEESADAPTER_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x111DF500)
#define IRRADIANCECACHEESADAPTER_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x111DF090)
#define IRRADIANCECACHEESADAPTER_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x111DEF00)
#define IRRADIANCECACHEESADAPTER_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x111DEF50)
#define IRRADIANCECACHEESADAPTER_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x111DF1C0)
#define IRRADIANCECACHEESADAPTER_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x111DF170)
#define IRRADIANCECACHEESADAPTER_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x111DF040)
#define IRRADIANCECACHEESADAPTER_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x111DED40)
#define IRRADIANCECACHEESADAPTER_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x111DF420)
#define IRRADIANCECACHEESADAPTER_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x111DF0E0)
#define IRRADIANCECACHEESADAPTER_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x111DEFA0)
#define IRRADIANCECACHEESADAPTER_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x111DEC80)
#define IRRADIANCECACHEESADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x111DFD20)
#define IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x111DFD60)
#define IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x111DFD80)
#define IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x111DFD90)
#define IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x111DFD70)

inline static constexpr unsigned int IrradianceCacheESAdapter_TypeDefinitionIndex = 38218;

class IrradianceCacheESAdapter : public ::ScenenLightManager::SceneManagedLightComponent1
{
public:
	::UnityEngine::VoxelIrradianceCache* Field_6_0; // 0x28
	::UnityEngine::VoxelIrradianceCacheData* Field_6_1; // 0x30
	::UnityEngine::Mesh* Field_6_2; // 0x38
	::System::String* Field_6_3; // 0x40
	::System::String* Field_6_4; // 0x48
	::UnityEngine::Vector3 Field_6_5; // 0x50
	::UnityEngine::VoxelIrradianceCacheProxyMode Field_6_6; // 0x5C
	::System::Single Field_6_7; // 0x60
	::System::Single Field_6_8; // 0x64
	::System::Boolean Field_6_9; // 0x68
	::RPG::Client::IAssetOperation* Field_6_10; // 0x70
	::RPG::Client::IAssetOperation* Field_6_11; // 0x78
	::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x80
	::System::Int32 LightQualityVersion; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER__CTOR_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
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

	::System::Void OnGetFromPoolAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
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

	::System::Boolean Method_6_05DE2E18EDE0747F(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_METHOD_6_05DE2E18EDE0747F_OFFSET))(this, a1);
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

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, P0);
	}
};
