#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_412;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_454DE24F5C98B987_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52AB0)
#define STRUCT_2_454DE24F5C98B987_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52A40)
#define STRUCT_2_454DE24F5C98B987_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52A30)
#define STRUCT_2_454DE24F5C98B987_METHOD_2_D13A45D556A46D38_OFFSET UNITYSDK_OFFSET(0x3C52960)
#define STRUCT_2_454DE24F5C98B987_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC71840)
#define STRUCT_2_454DE24F5C98B987_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC71800)
#define STRUCT_2_454DE24F5C98B987_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C52A10)
#define STRUCT_2_454DE24F5C98B987_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52A00)
#define STRUCT_2_454DE24F5C98B987__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C52950)
#define STRUCT_2_454DE24F5C98B987__CTOR_OFFSET UNITYSDK_OFFSET(0x3C52910)

inline static constexpr unsigned int Struct_2_454DE24F5C98B987_TypeDefinitionIndex = 44201;

struct alignas(8) Struct_2_454DE24F5C98B987
{
	::Il2CppArray<::Class_0_16E4307DCC419505_412*>* ACJMMAMOOLF; // 0x10
	::System::Int32 BGEJLPBCDOC; // 0x18
	::System::Func_2<::System::Int32, ::Class_0_16E4307DCC419505_412*>* DABKLCFOOAK; // 0x20

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_412*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_412*>*))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Func_2<::System::Int32, ::Class_0_16E4307DCC419505_412*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::Class_0_16E4307DCC419505_412*>*))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_412* Method_2_D13A45D556A46D38(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_412*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_METHOD_2_D13A45D556A46D38_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_454DE24F5C98B987 a1, ::Struct_2_454DE24F5C98B987 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_454DE24F5C98B987, ::Struct_2_454DE24F5C98B987))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_454DE24F5C98B987 a1, ::Struct_2_454DE24F5C98B987 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_454DE24F5C98B987, ::Struct_2_454DE24F5C98B987))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_454DE24F5C98B987 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_454DE24F5C98B987))((::PBYTE)hIl2Cpp + STRUCT_2_454DE24F5C98B987_EQUALS_1_OFFSET))(this, a1);
	}
};
