#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CharacterRampTexPass_CharacterRampPerMaterial.h"
#include "unitysdk/NapMaterialFlags.h"
#include "unitysdk/NapMaterial___c__DisplayClass50_0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector4.h"

class NapRenderer;
class VectorArrayBuffer;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NAPMATERIAL_COLLECTMATCAPVECTORARRAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C4C8860)
#define NAPMATERIAL_GETMATERIALFROMCONTAINER_OFFSET UNITYSDK_OFFSET(0x1C4C7EC0)
#define NAPMATERIAL_GET_CACHEDSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4C8220)
#define NAPMATERIAL_GET_HASINSTANCEDMAT_OFFSET UNITYSDK_OFFSET(0x1C4C7AB0)
#define NAPMATERIAL_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4C7BC0)
#define NAPMATERIAL_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4C8140)
#define NAPMATERIAL_GET_SUPPORTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1C4C8530)
#define NAPMATERIAL_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1C4C85D0)
#define NAPMATERIAL_REFRESHMATCAPVECTORARRAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C4C97B0)
#define NAPMATERIAL_REFRESHMATERIALMATCAPVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1C4C8CA0)
#define NAPMATERIAL_REPLACEINSTANCEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4C8810)
#define NAPMATERIAL_RESET_OFFSET UNITYSDK_OFFSET(0x1C4C8640)
#define NAPMATERIAL_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1C4C87B0)
#define NAPMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4CA280)
#define NAPMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CA240)
#define NAPMATERIAL__REFRESHMATCAPVECTORARRAYPROPERTIES_G__GETFLOAT_50_0_OFFSET UNITYSDK_OFFSET(0x1C4CA1F0)

inline static constexpr unsigned int NapMaterial_TypeDefinitionIndex = 26804;

class NapMaterial : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapBlendMode()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23320);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapVSpeed()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23328);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_matcapVectorArrayProperties()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23330);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapUSpeed()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23338);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_RefreshMatCapVectorArrayProperties()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23340);
	}
	static ::Il2CppArray<::System::ValueTuple_5<::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*>>** StaticGet_floatPackSettings()
	{
		return (::Il2CppArray<::System::ValueTuple_5<::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*>>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23348);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapColorBurst()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23350);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapAlphaBurst()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23358);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapRefract()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23360);
	}
	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::Il2CppArray<::System::Int32>*>>** StaticGet_vectorProperties()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::Il2CppArray<::System::Int32>*>>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23368);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapColorTint()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23370);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__MatCapTexID()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23378);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__RefractDepth()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23380);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet__RefractParam()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x23388);
	}
	static ::System::Int32* StaticGet__MatCapVSpeed_MatCapBlendMode_MatCapRefract_RefractDepthID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x66E0);
	}
	static ::System::Int32* StaticGet__MatCapTexID_MatCapColorBurst_MatCapAlphaBurst_MatCapUSpeedID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x66E4);
	}
	static ::System::Int32* StaticGet__RefractParamArrayID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x66E8);
	}
	static ::System::Int32* StaticGet__MatCapColorTintArrayID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapMaterial_TypeDefinitionIndex)->GetStaticField(0x66EC);
	}
	// static const ::System::Int32 MAX_ARRAY_PROPERTY_COUNT = 0x5; // 0x0
	::Il2CppArray<::CharacterRampTexPass_CharacterRampPerMaterial>* rampInput; // 0x10
	::VectorArrayBuffer* arrayPropertyBuffer; // 0x18
	::NapRenderer* napRenderer; // 0x20
	::UnityEngine::Material* _material; // 0x28
	::Il2CppArray<::System::Int32>* cachedTexIDs; // 0x30
	::Il2CppArray<::UnityEngine::Vector4>* arrayValues; // 0x38
	::System::Int32 prevResbuildVersion; // 0x40
	::NapMaterialFlags flags; // 0x44
	::System::Single _RampTexParams0_w; // 0x48
	::System::Int32 usedMaterialIDCount; // 0x4C
	::System::Int32 matIndex; // 0x50
	::System::Single albedoSmoothness; // 0x54
	::System::Int32 materialIDCount; // 0x58
	::UnityEngine::Vector4 _RampTexParams1; // 0x5C

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

	::System::Void ReplaceInstancedMaterial(::UnityEngine::Material* material)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NAPMATERIAL_REPLACEINSTANCEDMATERIAL_OFFSET))(this, material);
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* CollectMatCapVectorArrayProperties()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + NAPMATERIAL_COLLECTMATCAPVECTORARRAYPROPERTIES_OFFSET))();
	}

	static ::System::Void RefreshMaterialMatCapVectorArray(::UnityEngine::Material*& mat)
	{
		return ((::System::Void(*)(::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + NAPMATERIAL_REFRESHMATERIALMATCAPVECTORARRAY_OFFSET))(mat);
	}

	::System::Void RefreshMatCapVectorArrayProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIAL_REFRESHMATCAPVECTORARRAYPROPERTIES_OFFSET))(this);
	}

	static ::System::Single _RefreshMatCapVectorArrayProperties_g__GetFloat_50_0(::System::Int32 propertyID, ::NapMaterial___c__DisplayClass50_0& a2)
	{
		return ((::System::Single(*)(::System::Int32, ::NapMaterial___c__DisplayClass50_0&))((::PBYTE)hIl2Cpp + NAPMATERIAL__REFRESHMATCAPVECTORARRAYPROPERTIES_G__GETFLOAT_50_0_OFFSET))(propertyID, a2);
	}
};
