#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AABB.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumeType.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define LOCALAMBIENTVOLUME_CONTAINS_OFFSET UNITYSDK_OFFSET(0x118E8590)
#define LOCALAMBIENTVOLUME_CULL_OFFSET UNITYSDK_OFFSET(0x118E8250)
#define LOCALAMBIENTVOLUME_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x118E8790)
#define LOCALAMBIENTVOLUME_GETDATA_OFFSET UNITYSDK_OFFSET(0x118E8450)
#define LOCALAMBIENTVOLUME_GETID_OFFSET UNITYSDK_OFFSET(0x118E83E0)
#define LOCALAMBIENTVOLUME_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x118E6D60)
#define LOCALAMBIENTVOLUME_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x118E6DE0)
#define LOCALAMBIENTVOLUME_GET_ISINVERSE_OFFSET UNITYSDK_OFFSET(0x118E8230)
#define LOCALAMBIENTVOLUME_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x118E8210)
#define LOCALAMBIENTVOLUME_GET_VOLUMN_OFFSET UNITYSDK_OFFSET(0x118E8240)
#define LOCALAMBIENTVOLUME_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x118E7990)
#define LOCALAMBIENTVOLUME_METHOD_6_2A06FF69BDFDBD4F_OFFSET UNITYSDK_OFFSET(0x118E7750)
#define LOCALAMBIENTVOLUME_METHOD_6_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x118E7220)
#define LOCALAMBIENTVOLUME_METHOD_6_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x118E7600)
#define LOCALAMBIENTVOLUME_METHOD_6_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x118E7E30)
#define LOCALAMBIENTVOLUME_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x118E7100)
#define LOCALAMBIENTVOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x118E7940)
#define LOCALAMBIENTVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x118E7700)
#define LOCALAMBIENTVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x118E76B0)
#define LOCALAMBIENTVOLUME_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x118E7150)
#define LOCALAMBIENTVOLUME_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x118E6C40)
#define LOCALAMBIENTVOLUME_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x118E87F0)
#define LOCALAMBIENTVOLUME_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x118E8860)
#define LOCALAMBIENTVOLUME_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x118E6B40)
#define LOCALAMBIENTVOLUME_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x118E6D20)
#define LOCALAMBIENTVOLUME_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x118E6DA0)
#define LOCALAMBIENTVOLUME_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x118E6CD0)
#define LOCALAMBIENTVOLUME_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x118E6C00)
#define LOCALAMBIENTVOLUME_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x118E6C90)
#define LOCALAMBIENTVOLUME_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x118E6E30)
#define LOCALAMBIENTVOLUME_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x118E6B00)
#define LOCALAMBIENTVOLUME_RPG_CUSTOMRP_IAMBIENTVOLUMNE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x118E8A00)
#define LOCALAMBIENTVOLUME_SETFORCELERP_OFFSET UNITYSDK_OFFSET(0x118E7030)
#define LOCALAMBIENTVOLUME_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x118E6BB0)
#define LOCALAMBIENTVOLUME_SETTSCENABLED_OFFSET UNITYSDK_OFFSET(0x118E8640)
#define LOCALAMBIENTVOLUME_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x118E8220)
#define LOCALAMBIENTVOLUME_SPAWNED_OFFSET UNITYSDK_OFFSET(0x118E8720)
#define LOCALAMBIENTVOLUME_START_OFFSET UNITYSDK_OFFSET(0x118E71A0)
#define LOCALAMBIENTVOLUME_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x118E6850)
#define LOCALAMBIENTVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x118E8970)
#define LOCALAMBIENTVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x118E88C0)
#define LOCALAMBIENTVOLUME___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x118E8AC0)
#define LOCALAMBIENTVOLUME___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x118E8AE0)
#define LOCALAMBIENTVOLUME___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x118E8AF0)
#define LOCALAMBIENTVOLUME___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x118E8AD0)

inline static constexpr unsigned int LocalAmbientVolume_TypeDefinitionIndex = 38329;

class LocalAmbientVolume : public ::ScenenLightManager::SceneManagedLightComponent1
{
public:
	static ::UnityEngine::Material** StaticGet__LAV_Material()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x47030);
	}
	static ::System::Int32* StaticGet__ES_LevelShadowColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x12830);
	}
	static ::System::Int32* StaticGet__ES_LevelHighLightColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x12834);
	}
	static ::System::Int32* StaticGet__ES_LevelHighLight()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x12838);
	}
	static ::System::Int32* StaticGet__ES_LevelSkinLightColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x1283C);
	}
	static ::System::Int32* StaticGet__ES_LevelShadow()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x12840);
	}
	static ::System::Int32* StaticGet__ES_LevelMid()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x12844);
	}
	static ::System::Int32* StaticGet__ES_LevelSkinShadowColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalAmbientVolume_TypeDefinitionIndex)->GetStaticField(0x12848);
	}
	::UnityEngine::Shader* VolumeShader; // 0x28
	::System::Int32 Priority; // 0x30
	::UnityEngine::Rendering::AmbientVolumeType Scope; // 0x34
	::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x38
	::System::Int32 LightQualityVersion; // 0x3C
	::System::Boolean UseLerp; // 0x40
	::System::Boolean LerpWithCustomCol2; // 0x41
	::System::Boolean LerpWithAlpha; // 0x42
	::System::Boolean UseInvert; // 0x43
	::UnityEngine::Gradient* col1; // 0x48
	::UnityEngine::Gradient* col2; // 0x50
	::System::Single ColTransBias; // 0x58
	::System::Single ColTransSmoothness; // 0x5C
	::System::Single ColTransBias2; // 0x60
	::System::Single ColTransSmoothness2; // 0x64
	::UnityEngine::Vector4 TransDir; // 0x68
	::UnityEngine::Vector3 EdgeExtend; // 0x78
	::System::Single EdgeSmooth; // 0x84
	::System::String* CharacterLightAsset; // 0x88
	::System::Boolean UseCustomCharParam; // 0x90
	::UnityEngine::Color LevelSkinLightColor; // 0x94
	::UnityEngine::Color LevelSkinShadowColor; // 0xA4
	::UnityEngine::Color LevelHighLightColor; // 0xB4
	::UnityEngine::Color LevelShadowColor; // 0xC4
	::System::Single LevelShadow; // 0xD4
	::System::Single LevelMid; // 0xD8
	::System::Single LevelHighLight; // 0xDC
	::System::Boolean _IsVisible_k__BackingField; // 0xE0
	::System::Single Field_6_28; // 0xE4
	::UnityEngine::Renderer* Field_6_37; // 0xE8
	::UnityEngine::Material* Field_6_38; // 0xF0
	::UnityEngine::Texture2D* Field_6_39; // 0xF8
	::UnityEngine::Texture2D* Field_6_40; // 0x100
	::RPG::CustomRP::AABB Field_6_41; // 0x108
	::System::Boolean Field_6_42; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME__CCTOR_OFFSET))();
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONOBJECTDESTROY_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_6_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_METHOD_6_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_6_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_METHOD_6_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_6_2A06FF69BDFDBD4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_METHOD_6_2A06FF69BDFDBD4F_OFFSET))(this);
	}

	::System::Void Method_6_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_METHOD_6_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_6_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsVisible(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SET_ISVISIBLE_OFFSET))(this, value);
	}

	::System::Boolean get_IsInverse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GET_ISINVERSE_OFFSET))(this);
	}

	::UnityEngine::Renderer* get_Volumn()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GET_VOLUMN_OFFSET))(this);
	}

	::System::Boolean Cull(::Il2CppArray<::UnityEngine::Plane>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_CULL_OFFSET))(this, a1);
	}

	::System::Int32 GetID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETID_OFFSET))(this);
	}

	::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETDATA_OFFSET))(this, a1);
	}

	::System::Boolean Contains(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_CONTAINS_OFFSET))(this, a1);
	}

	::System::Void SetForceLerp(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SETFORCELERP_OFFSET))(this, a1);
	}

	::System::Void SetTSCEnabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SETTSCENABLED_OFFSET))(this, a1);
	}

	::System::Void Spawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SPAWNED_OFFSET))(this);
	}

	::System::Void Despawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_DESPAWNED_OFFSET))(this);
	}

	::System::Void OnLightweightActivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
	}

	::System::Boolean RPG_CustomRP_IAmbientVolumne_Contains(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_RPG_CUSTOMRP_IAMBIENTVOLUMNE_CONTAINS_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, P0);
	}
};
