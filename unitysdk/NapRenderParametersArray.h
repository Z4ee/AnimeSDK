#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ArrayPropertyData.h"
#include "unitysdk/ArrayPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderFeature.h"

class NapMaterial;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPRENDERPARAMETERSARRAY_FILLINGPROPERTYDICT_OFFSET UNITYSDK_OFFSET(0x1B167400)
#define NAPRENDERPARAMETERSARRAY_GETPROPERTYARRAYINFO_OFFSET UNITYSDK_OFFSET(0x1B1693A0)
#define NAPRENDERPARAMETERSARRAY_GETPROPERTYARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x1B1695F0)
#define NAPRENDERPARAMETERSARRAY_INITMATERIALVECTORARRAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B168B50)
#define NAPRENDERPARAMETERSARRAY_ISARRAYPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B169540)
#define NAPRENDERPARAMETERSARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B169650)

inline static constexpr unsigned int NapRenderParametersArray_TypeDefinitionIndex = 27200;

class NapRenderParametersArray : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ArrayPropertyData>** StaticGet_propertyIDDict()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::ArrayPropertyData>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x20A80);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_floatLayout()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x20A88);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::ArrayPropertyType, ::System::String*>>** StaticGet_vectorLayout()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::ArrayPropertyType, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x20A90);
	}
	static ::System::Boolean* StaticGet_logOnSetArrayPropertyFromExt()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x5500);
	}
	static ::System::Int32* StaticGet_vectorArrayLength()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x5504);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY__CCTOR_OFFSET))();
	}

	static ::System::Void FillingPropertyDict(::System::Boolean force)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY_FILLINGPROPERTYDICT_OFFSET))(force);
	}

	static ::System::Void InitMaterialVectorArrayProperties(::NapMaterial* napMaterial)
	{
		return ((::System::Void(*)(::NapMaterial*))((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY_INITMATERIALVECTORARRAYPROPERTIES_OFFSET))(napMaterial);
	}

	static ::System::Boolean GetPropertyArrayInfo(::System::Int32 propertyID, ::ArrayPropertyType& type, ::System::Int32& arrayPropertyID, ::System::Int32& propertyIndex, ::Il2CppArray<::System::Int32>*& properties, ::System::Int32& arrayID, ::System::Int32& componentIndex)
	{
		return ((::System::Boolean(*)(::System::Int32, ::ArrayPropertyType&, ::System::Int32&, ::System::Int32&, ::Il2CppArray<::System::Int32>*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY_GETPROPERTYARRAYINFO_OFFSET))(propertyID, type, arrayPropertyID, propertyIndex, properties, arrayID, componentIndex);
	}

	static ::System::Boolean IsArrayProperty(::System::Int32 propertyID)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY_ISARRAYPROPERTY_OFFSET))(propertyID);
	}

	static ::System::Int32 GetPropertyArraySize(::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature shaderFeature)
	{
		return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature))((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY_GETPROPERTYARRAYSIZE_OFFSET))(shaderFeature);
	}
};
