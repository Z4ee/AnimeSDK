#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0ABFA1374A25E076___C_METHOD_1_D7AEAC0E47063EEC_OFFSET UNITYSDK_OFFSET(0x10F6DF40)
#define CLASS_1_0ABFA1374A25E076___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F6DEF0)
#define CLASS_1_0ABFA1374A25E076___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6DF30)

inline static constexpr unsigned int Class_1_0ABFA1374A25E076___c_TypeDefinitionIndex = 58553;

class Class_1_0ABFA1374A25E076___c : public ::System::Object
{
public:
	static ::Class_1_0ABFA1374A25E076___c** StaticGet___9()
	{
		return (::Class_1_0ABFA1374A25E076___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0ABFA1374A25E076___c_TypeDefinitionIndex)->GetStaticField(0x3C480);
	}
	static ::System::Func_2<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0ABFA1374A25E076___c_TypeDefinitionIndex)->GetStaticField(0x3C488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0ABFA1374A25E076___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ABFA1374A25E076___C__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> Method_1_D7AEAC0E47063EEC(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 a1)
	{
		return ((::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + CLASS_1_0ABFA1374A25E076___C_METHOD_1_D7AEAC0E47063EEC_OFFSET))(this, a1);
	}
};
