#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion_InternalUnionValue.h"
#include "unitysdk/NodeGraph/VariantUnion_VariantType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define NODEGRAPH_VARIANTUNION_CASTFROMOBJECT_OFFSET UNITYSDK_OFFSET(0xBDFDA00)
#define NODEGRAPH_VARIANTUNION_CASTFROM_OFFSET UNITYSDK_OFFSET(0xBDFE630)
#define NODEGRAPH_VARIANTUNION_CHECKEDBOOL_OFFSET UNITYSDK_OFFSET(0x50CFF0)
#define NODEGRAPH_VARIANTUNION_CHECKEDDOUBLE_OFFSET UNITYSDK_OFFSET(0x50D150)
#define NODEGRAPH_VARIANTUNION_CHECKEDFLOAT_OFFSET UNITYSDK_OFFSET(0x50D100)
#define NODEGRAPH_VARIANTUNION_CHECKEDINT64_OFFSET UNITYSDK_OFFSET(0x50D0A0)
#define NODEGRAPH_VARIANTUNION_CHECKEDINT_OFFSET UNITYSDK_OFFSET(0x50D050)
#define NODEGRAPH_VARIANTUNION_CHECKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x50D200)
#define NODEGRAPH_VARIANTUNION_CHECKEDSTRING_OFFSET UNITYSDK_OFFSET(0x50D1A0)
#define NODEGRAPH_VARIANTUNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x50CFD0)
#define NODEGRAPH_VARIANTUNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x50CFC0)
#define NODEGRAPH_VARIANTUNION_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x50CC50)
#define NODEGRAPH_VARIANTUNION_GET_STRINGWITHTYPE_OFFSET UNITYSDK_OFFSET(0x50CEC0)
#define NODEGRAPH_VARIANTUNION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2F1C00)
#define NODEGRAPH_VARIANTUNION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBDFE0F0)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0xBDFDEE0)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xBDB93D0)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0xBDFDB30)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0xBDFDB90)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0xBDFDC20)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0xBDFDC90)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0xBDFDD20)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0xBDFDDC0)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0xBDFDE40)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0xBDFDE90)
#define NODEGRAPH_VARIANTUNION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xBDFDA80)
#define NODEGRAPH_VARIANTUNION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBDFE5C0)
#define NODEGRAPH_VARIANTUNION_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x50CE40)
#define NODEGRAPH_VARIANTUNION_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x50CDD0)
#define NODEGRAPH_VARIANTUNION_TOINT32_IGNORELONG_OFFSET UNITYSDK_OFFSET(0x50CDB0)
#define NODEGRAPH_VARIANTUNION_TOINT32_OFFSET UNITYSDK_OFFSET(0x50CC60)
#define NODEGRAPH_VARIANTUNION_TOINT64_OFFSET UNITYSDK_OFFSET(0x50CD40)
#define NODEGRAPH_VARIANTUNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x50CEB0)
#define NODEGRAPH_VARIANTUNION_TOUINT32_IGNORELONG_OFFSET UNITYSDK_OFFSET(0x50CDC0)
#define NODEGRAPH_VARIANTUNION_TOUINT32_OFFSET UNITYSDK_OFFSET(0x50CCD0)
#define NODEGRAPH_VARIANTUNION__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDFEB30)
#define NODEGRAPH_VARIANTUNION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x50CEF0)
#define NODEGRAPH_VARIANTUNION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x50CF10)
#define NODEGRAPH_VARIANTUNION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x50CF30)
#define NODEGRAPH_VARIANTUNION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x50CF50)
#define NODEGRAPH_VARIANTUNION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x50CF80)
#define NODEGRAPH_VARIANTUNION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x50CFA0)
#define NODEGRAPH_VARIANTUNION__CTOR_OFFSET UNITYSDK_OFFSET(0x50CED0)
#define NODEGRAPH_VARIANTUNION___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x50D2D0)
#define NODEGRAPH_VARIANTUNION___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x50D250)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_TypeDefinitionIndex = 47574;

	struct alignas(8) VariantUnion
	{
		static ::NodeGraph::VariantUnion* StaticGet_NullVariantUnion()
		{
			return (::NodeGraph::VariantUnion*)Il2CppClass::FromTypeDefinitionIndex(VariantUnion_TypeDefinitionIndex)->GetStaticField(0x2B920);
		}
		::NodeGraph::VariantUnion_InternalUnionValue _variantValue; // 0x10

		::System::Void _ctor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CTOR_5_OFFSET))(this, value);
		}

		::System::Void _ctor_6(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CTOR_6_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION__CCTOR_OFFSET))();
		}

		::NodeGraph::VariantUnion_VariantType get_Type()
		{
			return ((::NodeGraph::VariantUnion_VariantType(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_GET_ISNULL_OFFSET))(this);
		}

		::System::Int32 ToInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TOINT32_OFFSET))(this);
		}

		::System::UInt32 ToUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TOUINT32_OFFSET))(this);
		}

		::System::Int64 ToInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TOINT64_OFFSET))(this);
		}

		::System::Int32 ToInt32_IgnoreLong()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TOINT32_IGNORELONG_OFFSET))(this);
		}

		::System::UInt32 ToUInt32_IgnoreLong()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TOUINT32_IGNORELONG_OFFSET))(this);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TOFLOAT_OFFSET))(this);
		}

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TODOUBLE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_TOSTRING_OFFSET))(this);
		}

		::System::String* get_StringWithType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_GET_STRINGWITHTYPE_OFFSET))(this);
		}

		static ::NodeGraph::VariantUnion CastFromObject(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CASTFROMOBJECT_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit(::System::Boolean value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit_1(::System::Int32 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit_2(::System::UInt32 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit_3(::System::Int64 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::Int64))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_3_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit_4(::System::UInt64 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_4_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit_5(::System::Single value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_5_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit_6(::System::Double value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::Double))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_6_OFFSET))(value);
		}

		static ::NodeGraph::VariantUnion op_Implicit_7(::System::String* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_7_OFFSET))(value);
		}

		static ::System::Int32 op_Implicit_8(::NodeGraph::VariantUnion value)
		{
			return ((::System::Int32(*)(::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_8_OFFSET))(value);
		}

		static ::System::UInt32 op_Implicit_9(::NodeGraph::VariantUnion value)
		{
			return ((::System::UInt32(*)(::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_9_OFFSET))(value);
		}

		static ::System::Int64 op_Implicit_10(::NodeGraph::VariantUnion value)
		{
			return ((::System::Int64(*)(::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_IMPLICIT_10_OFFSET))(value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::NodeGraph::VariantUnion a, ::NodeGraph::VariantUnion b)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::NodeGraph::VariantUnion a, ::NodeGraph::VariantUnion b)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::NodeGraph::VariantUnion other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_EQUALS_OFFSET))(this, other);
		}

		static ::NodeGraph::VariantUnion CastFrom(::NodeGraph::VariantUnion_VariantType type, ::System::String* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::NodeGraph::VariantUnion_VariantType, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CASTFROM_OFFSET))(type, value);
		}

		::System::Boolean CheckedBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CHECKEDBOOL_OFFSET))(this);
		}

		::System::Int32 CheckedInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CHECKEDINT_OFFSET))(this);
		}

		::System::Int64 CheckedInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CHECKEDINT64_OFFSET))(this);
		}

		::System::Single CheckedFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CHECKEDFLOAT_OFFSET))(this);
		}

		::System::Double CheckedDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CHECKEDDOUBLE_OFFSET))(this);
		}

		::System::String* CheckedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CHECKEDSTRING_OFFSET))(this);
		}

		::System::Object* CheckedObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION_CHECKEDOBJECT_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION___BASE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNION___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
