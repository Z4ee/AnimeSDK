#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CharacterRampTexPass_CharacterRampPerMaterial.h"
#include "unitysdk/NapMaterialFlags.h"
#include "unitysdk/NapMaterialProperty.h"
#include "unitysdk/NapMaterial___c__DisplayClass48_0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector4.h"

class NapRenderer;
class VectorArrayBuffer;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NAPMATERIAL_COLLECTMATCAPVECTORARRAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x190FF5F0)
#define NAPMATERIAL_GETMATERIALFROMCONTAINER_OFFSET UNITYSDK_OFFSET(0x190FE6D0)
#define NAPMATERIAL_GET_CACHEDSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x190FEA40)
#define NAPMATERIAL_GET_HASINSTANCEDMAT_OFFSET UNITYSDK_OFFSET(0x190FE2C0)
#define NAPMATERIAL_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x190FE3D0)
#define NAPMATERIAL_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x190FE960)
#define NAPMATERIAL_GET_SUPPORTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x190FED50)
#define NAPMATERIAL_HASFLAG_OFFSET UNITYSDK_OFFSET(0x190FEDF0)
#define NAPMATERIAL_INITPROPERTY_OFFSET UNITYSDK_OFFSET(0x190FFAC0)
#define NAPMATERIAL_REBINDARRAYPROPERTYBUFFER_OFFSET UNITYSDK_OFFSET(0x190FF030)
#define NAPMATERIAL_REFRESHMATCAPVECTORARRAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19100FA0)
#define NAPMATERIAL_REFRESHMATERIALMATCAPVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x190FFFA0)
#define NAPMATERIAL_REPLACEINSTANCEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x190FF5A0)
#define NAPMATERIAL_RESET_OFFSET UNITYSDK_OFFSET(0x190FEE60)
#define NAPMATERIAL_SETFLAG_OFFSET UNITYSDK_OFFSET(0x190FEFD0)
#define NAPMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19101D50)
#define NAPMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19101D10)
#define NAPMATERIAL__REFRESHMATCAPVECTORARRAYPROPERTIES_G__GETFLOAT_48_0_OFFSET UNITYSDK_OFFSET(0x19101CC0)

inline static constexpr unsigned int NapMaterial_TypeDefinitionIndex = 29575;

class NapMaterial : public ::System::Object
{
public:
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapColorTint()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x24370);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__RefractParam()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x24378);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapTexID()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x24380);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__RefractDepth()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x24388);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_RefreshMatCapVectorArrayProperties()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x24390);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapAlphaBurst()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x24398);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapColorBurst()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243A0);
	}
	static ::Il2CppArray<::System::ValueTuple_5<::NapMaterialProperty, ::Il2CppArray<::NapMaterialProperty>*, ::Il2CppArray<::NapMaterialProperty>*, ::Il2CppArray<::NapMaterialProperty>*, ::Il2CppArray<::NapMaterialProperty>*>>** StaticGet_floatPackSettings()
	{
		return (::Il2CppArray<::System::ValueTuple_5<::NapMaterialProperty, ::Il2CppArray<::NapMaterialProperty>*, ::Il2CppArray<::NapMaterialProperty>*, ::Il2CppArray<::NapMaterialProperty>*, ::Il2CppArray<::NapMaterialProperty>*>>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243A8);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapVSpeed()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243B0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_matcapVectorArrayProperties()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243B8);
	}
	static ::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::Il2CppArray<::NapMaterialProperty>*>>** StaticGet_vectorProperties()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::Il2CppArray<::NapMaterialProperty>*>>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243C0);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapRefract()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243C8);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapBlendMode()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243D0);
	}
	static ::Il2CppArray<::NapMaterialProperty>** StaticGet__MatCapUSpeed()
	{
		return (::Il2CppArray<::NapMaterialProperty>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x243D8);
	}
	// static const ::System::Int32 MAX_ARRAY_PROPERTY_COUNT = 0x5; // 0x0
	::Il2CppArray<::CharacterRampTexPass_CharacterRampPerMaterial>* rampInput; // 0x10
	::Il2CppArray<::System::Int32>* cachedTexIDs; // 0x18
	::Il2CppArray<::UnityEngine::Vector4>* arrayValues; // 0x20
	::UnityEngine::Material* _material; // 0x28
	::VectorArrayBuffer* arrayPropertyBuffer; // 0x30
	::NapRenderer* napRenderer; // 0x38
	::System::Int32 prevResbuildVersion; // 0x40
	::NapMaterialFlags flags; // 0x44
	::System::Int32 matIndex; // 0x48
	::System::Int32 materialIDCount; // 0x4C
	::UnityEngine::Vector4 _RampTexParams1; // 0x50
	::System::Int32 usedMaterialIDCount; // 0x60
	::System::Single albedoSmoothness; // 0x64
	::System::Single _RampTexParams0_w; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPMATERIAL__CCTOR_OFFSET))();
	}

	::System::Boolean get_hasInstancedMat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_GET_HASINSTANCEDMAT_OFFSET))(this);
	}

	::UnityEngine::Material* get_material()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_GET_MATERIAL_OFFSET))(this);
	}

	::UnityEngine::Material* get_sharedMaterial()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_GET_SHAREDMATERIAL_OFFSET))(this);
	}

	::UnityEngine::Material* get_CachedSharedMaterial()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_GET_CACHEDSHAREDMATERIAL_OFFSET))(this);
	}

	::UnityEngine::Material* GetMaterialFromContainer(::System::Collections::Generic::List_1<::UnityEngine::Material*>* materials)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NAPMATERIAL_GETMATERIALFROMCONTAINER_OFFSET))(this, materials);
	}

	::System::Boolean get_SupportPerObjectShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_GET_SUPPORTPEROBJECTSHADOW_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_RESET_OFFSET))(this);
	}

	::System::Void SetFlag(::NapMaterialFlags flags, ::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPMATERIAL_SETFLAG_OFFSET))(this, flags, value);
	}

	::System::Boolean HasFlag(::NapMaterialFlags flags, ::System::Boolean checkAllFlags)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapMaterialFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPMATERIAL_HASFLAG_OFFSET))(this, flags, checkAllFlags);
	}

	::System::Void RebindArrayPropertyBuffer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_REBINDARRAYPROPERTYBUFFER_OFFSET))(this);
	}

	::System::Void ReplaceInstancedMaterial(::UnityEngine::Material* material)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NAPMATERIAL_REPLACEINSTANCEDMATERIAL_OFFSET))(this, material);
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* CollectMatCapVectorArrayProperties()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + NAPMATERIAL_COLLECTMATCAPVECTORARRAYPROPERTIES_OFFSET))();
	}

	static ::Il2CppArray<::NapMaterialProperty>* InitProperty(::System::String* name)
	{
		return ((::Il2CppArray<::NapMaterialProperty>*(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPMATERIAL_INITPROPERTY_OFFSET))(name);
	}

	static ::System::Void RefreshMaterialMatCapVectorArray(::UnityEngine::Material*& mat)
	{
		return ((::System::Void(*)(::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + NAPMATERIAL_REFRESHMATERIALMATCAPVECTORARRAY_OFFSET))(mat);
	}

	::System::Void RefreshMatCapVectorArrayProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_REFRESHMATCAPVECTORARRAYPROPERTIES_OFFSET))(this);
	}

	static ::System::Single _RefreshMatCapVectorArrayProperties_g__GetFloat_48_0(::System::Int32 propertyID, ::NapMaterial___c__DisplayClass48_0& a2)
	{
		return ((::System::Single(*)(::System::Int32, ::NapMaterial___c__DisplayClass48_0&))((::PBYTE)hIl2Cpp + NAPMATERIAL__REFRESHMATCAPVECTORARRAYPROPERTIES_G__GETFLOAT_48_0_OFFSET))(propertyID, a2);
	}
};
