#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValue_DynamicValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValue_UnionValue.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DYNAMICVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17186300)
#define RPG_GAMECORE_DYNAMICVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17186240)
#define RPG_GAMECORE_DYNAMICVALUE_FROMBYTEBINARY_OFFSET UNITYSDK_OFFSET(0x17186E10)
#define RPG_GAMECORE_DYNAMICVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x171863F0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x171868F0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_BOOLVALUE_1_OFFSET UNITYSDK_OFFSET(0x17186230)
#define RPG_GAMECORE_DYNAMICVALUE_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x171867B0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_FIXPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x17186750)
#define RPG_GAMECORE_DYNAMICVALUE_GET_FLOATVALUE_1_OFFSET UNITYSDK_OFFSET(0x171866B0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x171866C0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_INTVALUE_1_OFFSET UNITYSDK_OFFSET(0x171866A0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x17186810)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x17186920)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x17186740)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x17186720)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x17186730)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISMAP_OFFSET UNITYSDK_OFFSET(0x17186970)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x17186E00)
#define RPG_GAMECORE_DYNAMICVALUE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x171868E0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_MAPVALUE_OFFSET UNITYSDK_OFFSET(0x17186940)
#define RPG_GAMECORE_DYNAMICVALUE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x171868B0)
#define RPG_GAMECORE_DYNAMICVALUE_GET_UINTVALUE_OFFSET UNITYSDK_OFFSET(0x17186860)
#define RPG_GAMECORE_DYNAMICVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x17186220)
#define RPG_GAMECORE_DYNAMICVALUE_GET__DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x17187530)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17185C80)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x17185CA0)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x17185CD0)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x17185D00)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x17185D30)
#define RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17185C50)
#define RPG_GAMECORE_DYNAMICVALUE_TOBINARY_OFFSET UNITYSDK_OFFSET(0x17187190)
#define RPG_GAMECORE_DYNAMICVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17185D60)
#define RPG_GAMECORE_DYNAMICVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171875C0)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17185BF0)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17185C00)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17185C10)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x17185C20)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x17185C30)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x17185C40)
#define RPG_GAMECORE_DYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17185BE0)
#define RPG_GAMECORE_DYNAMICVALUE__LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x171869E0)
#define RPG_GAMECORE_DYNAMICVALUE__LOGERROR_OFFSET UNITYSDK_OFFSET(0x17186990)
#define RPG_GAMECORE_DYNAMICVALUE__LOGINVALIDVALUE_OFFSET UNITYSDK_OFFSET(0x17186BD0)
#define RPG_GAMECORE_DYNAMICVALUE__LOGTYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x17186A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue_TypeDefinitionIndex = 22584;

	class DynamicValue : public ::System::Object
	{
	public:
		static ::RPG::GameCore::DynamicValue** StaticGet_EMPTY()
		{
			return (::RPG::GameCore::DynamicValue**)Il2CppClass::FromTypeDefinitionIndex(DynamicValue_TypeDefinitionIndex)->GetStaticField(0x187A0);
		}
		::System::String* stringValue; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>* mapValue; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* arrayValue; // 0x20
		::RPG::GameCore::DynamicValue_UnionValue unionValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean boolV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_1_OFFSET))(this, boolV);
		}

		::System::Void _ctor_2(::System::Single floatV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_2_OFFSET))(this, floatV);
		}

		::System::Void _ctor_3(::System::String* stringV)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_3_OFFSET))(this, stringV);
		}

		::System::Void _ctor_4(::System::Int32 intV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_4_OFFSET))(this, intV);
		}

		::System::Void _ctor_5(::Il2CppArray<::RPG::GameCore::DynamicValue*>* arrayV)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_5_OFFSET))(this, arrayV);
		}

		::System::Void _ctor_6(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>* mapV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CTOR_6_OFFSET))(this, mapV);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit(::System::String* s)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_OFFSET))(s);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_1(::System::Int32 s)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_1_OFFSET))(s);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_2(::System::Single s)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_2_OFFSET))(s);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_3(::System::Boolean s)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_3_OFFSET))(s);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_4(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>* s)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_4_OFFSET))(s);
		}

		static ::RPG::GameCore::DynamicValue* op_Implicit_5(::Il2CppArray<::RPG::GameCore::DynamicValue*>* s)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_OP_IMPLICIT_5_OFFSET))(s);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::GameCore::DynamicValue* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_FLOATVALUE_OFFSET))(this);
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

		::System::Void _LogError(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGERROR_OFFSET))(this, message);
		}

		::System::Void _LogError_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGERROR_1_OFFSET))(this, format, args);
		}

		::System::Void _LogTypeMismatch(::System::String* accessType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGTYPEMISMATCH_OFFSET))(this, accessType);
		}

		::System::Void _LogInvalidValue(::System::String* accessType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE__LOGINVALIDVALUE_OFFSET))(this, accessType);
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

		::System::Int32 get_intValue_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_INTVALUE_1_OFFSET))(this);
		}

		::System::Single get_floatValue_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_FLOATVALUE_1_OFFSET))(this);
		}

		::System::Boolean get_boolValue_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET_BOOLVALUE_1_OFFSET))(this);
		}

		static ::System::Void FromByteBinary(::Class_1_7A22A3DBEEDD1F80* pArray, ::RPG::GameCore::DynamicValue*& dv)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_FROMBYTEBINARY_OFFSET))(pArray, dv);
		}

		static ::System::Void ToBinary(::Class_1_7A22A3DBEEDD1F80* pArray, ::RPG::GameCore::DynamicValue* dv)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_TOBINARY_OFFSET))(pArray, dv);
		}

		::System::String* get__DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_GET__DEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
