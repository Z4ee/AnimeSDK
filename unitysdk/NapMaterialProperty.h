#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ArrayPropertyType.h"
#include "unitysdk/NapMaterialPropertyFlags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NAPMATERIALPROPERTY_GET_ISMATERIALIDPROPERTY_OFFSET UNITYSDK_OFFSET(0x81F6D0)
#define NAPMATERIALPROPERTY_GET_ISRAMPDEPENDENCYPROPERTY_OFFSET UNITYSDK_OFFSET(0x81F720)
#define NAPMATERIALPROPERTY_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x18FE3920)
#define NAPMATERIALPROPERTY_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x18FE3820)
#define NAPMATERIALPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18FE37C0)
#define NAPMATERIALPROPERTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x81F8C0)
#define NAPMATERIALPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FE3AE0)
#define NAPMATERIALPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x81F810)
#define NAPMATERIALPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x81F770)
#define NAPMATERIALPROPERTY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x81F8D0)

inline static constexpr unsigned int NapMaterialProperty_TypeDefinitionIndex = 29574;

struct alignas(4) NapMaterialProperty
{
	static ::NapMaterialProperty* StaticGet_Invalid()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NapMaterialProperty_TypeDefinitionIndex)->GetStaticField(0x56D0);
	}
	::NapMaterialPropertyFlags flags; // 0x10
	::ArrayPropertyType type; // 0x14
	::System::Int32 propertyID; // 0x18
	::System::Int32 vectorArrayID; // 0x1C
	::System::Int32 vectorArrayPropertyID; // 0x20
	::System::Int32 vectorArrayPropertyIndex; // 0x24
	::System::Int32 componentIndex; // 0x28

	::System::Void _ctor(::System::Int32 propertyID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY__CTOR_OFFSET))(this, propertyID);
	}

	::System::Void _ctor_1(::System::String* propertyName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY__CTOR_1_OFFSET))(this, propertyName);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY__CCTOR_OFFSET))();
	}

	::System::Boolean get_IsMaterialIDProperty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY_GET_ISMATERIALIDPROPERTY_OFFSET))(this);
	}

	::System::Boolean get_IsRampDependencyProperty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY_GET_ISRAMPDEPENDENCYPROPERTY_OFFSET))(this);
	}

	static ::System::Int32 op_Implicit(::NapMaterialProperty property)
	{
		return ((::System::Int32(*)(::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY_OP_IMPLICIT_OFFSET))(property);
	}

	static ::NapMaterialProperty op_Explicit(::System::Int32 propertyID)
	{
		return ((::NapMaterialProperty(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY_OP_EXPLICIT_OFFSET))(propertyID);
	}

	static ::NapMaterialProperty op_Explicit_1(::System::String* propertyName)
	{
		return ((::NapMaterialProperty(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY_OP_EXPLICIT_1_OFFSET))(propertyName);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMATERIALPROPERTY___BASE_TOSTRING_OFFSET))(this);
	}
};
