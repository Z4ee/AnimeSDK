#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_85BB68A5AC88A210___C_METHOD_1_228A74DC7FC07ED9_OFFSET UNITYSDK_OFFSET(0x10810470)
#define CLASS_2_85BB68A5AC88A210___C_METHOD_1_40A62240C8B36EE7_OFFSET UNITYSDK_OFFSET(0x10810270)
#define CLASS_2_85BB68A5AC88A210___C_METHOD_1_6C8F11A12DE202AA_OFFSET UNITYSDK_OFFSET(0x10810370)
#define CLASS_2_85BB68A5AC88A210___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10810220)
#define CLASS_2_85BB68A5AC88A210___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10810260)

inline static constexpr unsigned int Class_2_85BB68A5AC88A210___c_TypeDefinitionIndex = 72474;

class Class_2_85BB68A5AC88A210___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__10_3()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_85BB68A5AC88A210___c_TypeDefinitionIndex)->GetStaticField(0x3BFF0);
	}
	static ::Class_2_85BB68A5AC88A210___c** StaticGet___9()
	{
		return (::Class_2_85BB68A5AC88A210___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_85BB68A5AC88A210___c_TypeDefinitionIndex)->GetStaticField(0x3BFF8);
	}
	static ::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__10_5()
	{
		return (::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_85BB68A5AC88A210___c_TypeDefinitionIndex)->GetStaticField(0x3C000);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__10_4()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_85BB68A5AC88A210___c_TypeDefinitionIndex)->GetStaticField(0x3C008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_85BB68A5AC88A210___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85BB68A5AC88A210___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_40A62240C8B36EE7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_85BB68A5AC88A210___C_METHOD_1_40A62240C8B36EE7_OFFSET))(this, a1);
	}

	::System::String* Method_1_6C8F11A12DE202AA(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_85BB68A5AC88A210___C_METHOD_1_6C8F11A12DE202AA_OFFSET))(this, a1);
	}

	::Class_1_1EA8435E138F2E03* Method_1_228A74DC7FC07ED9(::System::Int32 a1)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_85BB68A5AC88A210___C_METHOD_1_228A74DC7FC07ED9_OFFSET))(this, a1);
	}
};
