#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValue_DynamicValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValue_UnionValue.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

#define RPG_GAMECORE_DYNAMICVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BB2C730)
#define RPG_GAMECORE_DYNAMICVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BB2C640)
#define RPG_GAMECORE_DYNAMICVALUE_FROMBYTEBINARY_OFFSET UNITYSDK_OFFSET(0x1BB2D380)
#define RPG_GAMECORE_DYNAMICVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BB2C820)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CF20)
#define RPG_GAMECORE_DYNAMICVALUE_GET_BOOLVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BB2C630)
#define RPG_GAMECORE_DYNAMICVALUE_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CD60)
#define RPG_GAMECORE_DYNAMICVALUE_GET_DOUBLEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BB2CAD0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CB70)
#define RPG_GAMECORE_DYNAMICVALUE_GET_FIXPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CBF0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CAE0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CDC0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1BB2CF50)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x1BB2CB60)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x1BB2CB40)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x1BB2CB50)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISMAP_OFFSET UNITYSDK_OFFSET(0x1BB2CFA0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1BB2D370)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1BB2CF10)
#define RPG_GAMECORE_DYNAMICVALUE_GET_LONGVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BB2CAC0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_LONGVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CE60)
#define RPG_GAMECORE_DYNAMICVALUE_GET_MAPVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CF70)
#define RPG_GAMECORE_DYNAMICVALUE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CEE0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_UINTVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2CE10)
#define RPG_GAMECORE_DYNAMICVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BB2C3B0)
#define RPG_GAMECORE_DYNAMICVALUE_GET__DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x1BB2DA20)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BB2B890)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1BB2B8C0)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1BB2B8F0)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1BB2B930)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1BB2B960)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1BB2B990)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1BB2B9C0)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BB2B860)
#define RPG_GAMECORE_DYNAMICVALUE_TOBINARY_OFFSET UNITYSDK_OFFSET(0x1BB2D650)
#define RPG_GAMECORE_DYNAMICVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BB2B9F0)
#define RPG_GAMECORE_DYNAMICVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB2DAB0)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB2B7E0)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BB2B7F0)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BB2B800)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BB2B810)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BB2B820)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1BB2B830)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1BB2B840)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1BB2B850)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2B7D0)
#define RPG_GAMECORE_DYNAMICVALUE__ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1BB2C3C0)
#define RPG_GAMECORE_DYNAMICVALUE__LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1BB2D010)
#define RPG_GAMECORE_DYNAMICVALUE__LOGERROR_OFFSET UNITYSDK_OFFSET(0x1BB2CFC0)
#define RPG_GAMECORE_DYNAMICVALUE__LOGINVALIDVALUE_OFFSET UNITYSDK_OFFSET(0x1BB2D1C0)
#define RPG_GAMECORE_DYNAMICVALUE__LOGTYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x1BB2D060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue_TypeDefinitionIndex = 10481;

	class DynamicValue : public ::System::Object
	{
	public:
		static ::RPG::GameCore::DynamicValue** StaticGet_EMPTY()
		{
			return (::RPG::GameCore::DynamicValue**)Il2CppClass::FromTypeDefinitionIndex(DynamicValue_TypeDefinitionIndex)->GetStaticField(0x1210);
		}
		static ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>** StaticGet_s_escapeStringBuilder()
		{
			return (::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicValue_TypeDefinitionIndex)->GetStaticField(0x1218);
		}
		::System::String* stringValue; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>* mapValue; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* arrayValue; // 0x20
		::RPG::GameCore::DynamicValue_UnionValue unionValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_5_OFFSET))(this, a1);
		}

		::System::Void _ctor_6(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_6_OFFSET))(this, a1);
		}

		::System::Void _ctor_7(::Il2CppArray<::RPG::GameCore::DynamicValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_7_OFFSET))(this, a1);
		}

		::System::Void _ctor_8(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_8_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_1(::System::Int32 a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_2(::System::Int64 a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_3(::System::Single a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_4(::System::Double a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_5(::System::Boolean a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_6(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>* a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_7(::Il2CppArray<::RPG::GameCore::DynamicValue*>* a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_7_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_FLOATVALUE_OFFSET))(this);
		}

		::System::Double get_DoubleValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_DOUBLEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_FixPointValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_FIXPOINTVALUE_OFFSET))(this);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_INTVALUE_OFFSET))(this);
		}

		::System::UInt32 get_UintValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_UINTVALUE_OFFSET))(this);
		}

		::System::Int64 get_LongValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_LONGVALUE_OFFSET))(this);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_STRINGVALUE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_ArrayValue()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ARRAYVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>* get_MapValue()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_MAPVALUE_OFFSET))(this);
		}

		::System::Void _LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGERROR_OFFSET))(this, a1);
		}

		::System::Void _LogError_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGERROR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _LogTypeMismatch(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGTYPEMISMATCH_OFFSET))(this, a1);
		}

		::System::Void _LogInvalidValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGINVALIDVALUE_OFFSET))(this, a1);
		}

		static ::System::String* _EscapeString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__ESCAPESTRING_OFFSET))(a1);
		}

		::RPG::GameCore::DynamicValue_DynamicValueType get_ValueType()
		{
			return ((::RPG::GameCore::DynamicValue_DynamicValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ISINT_OFFSET))(this);
		}

		::System::Boolean get_IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ISFLOAT_OFFSET))(this);
		}

		::System::Boolean get_IsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ISBOOL_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_ISMAP_OFFSET))(this);
		}

		::System::Int64 get_longValue_1()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_LONGVALUE_1_OFFSET))(this);
		}

		::System::Double get_doubleValue_1()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_DOUBLEVALUE_1_OFFSET))(this);
		}

		::System::Boolean get_boolValue_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_BOOLVALUE_1_OFFSET))(this);
		}

		static ::System::Void FromByteBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_FROMBYTEBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void ToBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_TOBINARY_OFFSET))(a1, a2);
		}

		::System::String* get__DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET__DEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
