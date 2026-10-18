#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LocalFogSphereInstance_FogBlendMode.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define LOCALFOGSPHEREINSTANCE_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xB8364A0)
#define LOCALFOGSPHEREINSTANCE_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xB836450)
#define LOCALFOGSPHEREINSTANCE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xB8352C0)
#define LOCALFOGSPHEREINSTANCE_METHOD_6_151F18E94867FFE1_OFFSET UNITYSDK_OFFSET(0xB8355F0)
#define LOCALFOGSPHEREINSTANCE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB835B70)
#define LOCALFOGSPHEREINSTANCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB835AA0)
#define LOCALFOGSPHEREINSTANCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB835670)
#define LOCALFOGSPHEREINSTANCE_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0xB8363B0)
#define LOCALFOGSPHEREINSTANCE_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xB836250)
#define LOCALFOGSPHEREINSTANCE_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0xB836520)
#define LOCALFOGSPHEREINSTANCE_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xB8365F0)
#define LOCALFOGSPHEREINSTANCE_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xB8365A0)
#define LOCALFOGSPHEREINSTANCE_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0xB836370)
#define LOCALFOGSPHEREINSTANCE_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xB8364E0)
#define LOCALFOGSPHEREINSTANCE_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xB8361E0)
#define LOCALFOGSPHEREINSTANCE_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xB836560)
#define LOCALFOGSPHEREINSTANCE_SETENABLE_OFFSET UNITYSDK_OFFSET(0xB835ED0)
#define LOCALFOGSPHEREINSTANCE_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xB836400)
#define LOCALFOGSPHEREINSTANCE_SETTSC_OFFSET UNITYSDK_OFFSET(0xB835D10)
#define LOCALFOGSPHEREINSTANCE_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xB835F30)
#define LOCALFOGSPHEREINSTANCE_UPDATEMATERIALBLOCK_OFFSET UNITYSDK_OFFSET(0xB8358C0)
#define LOCALFOGSPHEREINSTANCE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xB835C30)
#define LOCALFOGSPHEREINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB836690)
#define LOCALFOGSPHEREINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB836630)
#define LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_0_OFFSET UNITYSDK_OFFSET(0xB8366B0)
#define LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_1_OFFSET UNITYSDK_OFFSET(0xB836700)
#define LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_2_OFFSET UNITYSDK_OFFSET(0xB836750)
#define LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_3_OFFSET UNITYSDK_OFFSET(0xB8367A0)
#define LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_4_OFFSET UNITYSDK_OFFSET(0xB8367F0)

inline static constexpr unsigned int LocalFogSphereInstance_TypeDefinitionIndex = 47469;

class LocalFogSphereInstance : public ::ScenenLightManager::SceneManagedLightComponent1
{
public:
	static ::System::String** StaticGet_LOADPOKNALM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalFogSphereInstance_TypeDefinitionIndex)->GetStaticField(0x6EA40);
	}
	static ::System::String** StaticGet_DBCOFCOKNHA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalFogSphereInstance_TypeDefinitionIndex)->GetStaticField(0x6EA48);
	}
	::RPG::CustomRP::CustomLightQualityFilter lightQualityFilter; // 0x28
	::System::Int32 LightQualityVersion; // 0x2C
	::System::Boolean overrideRenderQueue; // 0x30
	::System::Int32 renderQueue; // 0x34
	::LocalFogSphereInstance_FogBlendMode blendMode; // 0x38
	::System::Boolean enableGradient; // 0x3C
	::UnityEngine::Color color; // 0x40
	::UnityEngine::Texture* scatterFadaRamp; // 0x50
	::System::Single lower; // 0x58
	::System::Single upper; // 0x5C
	::System::Single fadePointNear; // 0x60
	::System::Single nearDensity; // 0x64
	::System::Single fadePointFar; // 0x68
	::System::Single farDensity; // 0x6C
	::System::Boolean blenderFogOn; // 0x70
	::System::Boolean volumeFogOn; // 0x71
	::UnityEngine::Material* additiveMaterial; // 0x78
	::UnityEngine::Material* alphaBlendMaterial; // 0x80
	::UnityEngine::Material* additiveGradientMaterial; // 0x88
	::UnityEngine::Material* alphaBlendGradientMaterial; // 0x90
	::System::Boolean KBLIDDNGJLI; // 0x98
	::System::Single FLLKOLEFNMG; // 0x9C
	::UnityEngine::MaterialPropertyBlock* ACDAFHAFPHI; // 0xA0
	::UnityEngine::Renderer* OMPBEGMFNGM; // 0xA8
	::UnityEngine::Material* GKFAFNFNPKA; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE__CCTOR_OFFSET))();
	}

	::UnityEngine::Material* get_material()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_GET_MATERIAL_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONDESTROY_OFFSET))(this);
	}

	static ::System::Void Method_6_151F18E94867FFE1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_METHOD_6_151F18E94867FFE1_OFFSET))(a1);
	}

	::System::Void UpdateMaterialBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_UPDATEMATERIALBLOCK_OFFSET))(this);
	}

	::System::Void UpdateMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_UPDATEMATERIAL_OFFSET))(this);
	}

	::System::Void SetTSC(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_SETTSC_OFFSET))(this, a1, a2);
	}

	::System::Void SetEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_SETENABLE_OFFSET))(this, a1);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_GETTYPEID_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__39_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_0_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__39_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_1_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__39_2(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_2_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__39_3(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_3_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__39_4(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE__UNSERIALIZEASYNC_B__39_4_OFFSET))(this, a1);
	}
};
