#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_35A988BF5E50EA31.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6EEAA83EDB800B24;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1503376ECC91D8EA___C_METHOD_1_09FBD9FE3D478B01_OFFSET UNITYSDK_OFFSET(0x17844380)
#define CLASS_2_1503376ECC91D8EA___C_METHOD_1_33732161BE431BE4_OFFSET UNITYSDK_OFFSET(0x178443A0)
#define CLASS_2_1503376ECC91D8EA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17844330)
#define CLASS_2_1503376ECC91D8EA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17844370)

inline static constexpr unsigned int Class_2_1503376ECC91D8EA___c_TypeDefinitionIndex = 50832;

class Class_2_1503376ECC91D8EA___c : public ::System::Object
{
public:
	static ::Class_2_1503376ECC91D8EA___c** StaticGet___9()
	{
		return (::Class_2_1503376ECC91D8EA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1503376ECC91D8EA___c_TypeDefinitionIndex)->GetStaticField(0x41180);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Struct_2_35A988BF5E50EA31, ::Class_1_6EEAA83EDB800B24*>, ::Struct_2_35A988BF5E50EA31>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Struct_2_35A988BF5E50EA31, ::Class_1_6EEAA83EDB800B24*>, ::Struct_2_35A988BF5E50EA31>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1503376ECC91D8EA___c_TypeDefinitionIndex)->GetStaticField(0x41188);
	}
	static ::System::Func_2<::System::ValueTuple_2<::Struct_2_35A988BF5E50EA31, ::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080_2>*>, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::System::ValueTuple_2<::Struct_2_35A988BF5E50EA31, ::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080_2>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1503376ECC91D8EA___c_TypeDefinitionIndex)->GetStaticField(0x41190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA___C__CTOR_OFFSET))(this);
	}

	::Struct_2_35A988BF5E50EA31 Method_1_09FBD9FE3D478B01(::System::Collections::Generic::KeyValuePair_2<::Struct_2_35A988BF5E50EA31, ::Class_1_6EEAA83EDB800B24*> a1)
	{
		return ((::Struct_2_35A988BF5E50EA31(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Struct_2_35A988BF5E50EA31, ::Class_1_6EEAA83EDB800B24*>))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA___C_METHOD_1_09FBD9FE3D478B01_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_33732161BE431BE4(::System::ValueTuple_2<::Struct_2_35A988BF5E50EA31, ::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080_2>*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::Struct_2_35A988BF5E50EA31, ::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080_2>*>))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA___C_METHOD_1_33732161BE431BE4_OFFSET))(this, a1);
	}
};
