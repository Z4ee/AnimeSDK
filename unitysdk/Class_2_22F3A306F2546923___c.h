#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_3_025FF4981524A424_328;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_22F3A306F2546923___C_METHOD_1_07ECF12750A502A7_OFFSET UNITYSDK_OFFSET(0x1457C180)
#define CLASS_2_22F3A306F2546923___C_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1457C1F0)
#define CLASS_2_22F3A306F2546923___C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1457C170)
#define CLASS_2_22F3A306F2546923___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1457C120)
#define CLASS_2_22F3A306F2546923___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1457C160)

inline static constexpr unsigned int Class_2_22F3A306F2546923___c_TypeDefinitionIndex = 81058;

class Class_2_22F3A306F2546923___c : public ::System::Object
{
public:
	static ::Class_2_22F3A306F2546923___c** StaticGet___9()
	{
		return (::Class_2_22F3A306F2546923___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x46450);
	}
	static ::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x46458);
	}
	static ::System::Action_1<::System::Int32>** StaticGet___9__4_1()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x46460);
	}
	static ::System::Action_1<::Class_3_025FF4981524A424_328*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_025FF4981524A424_328*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x46468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_22F3A306F2546923___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22F3A306F2546923___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_22F3A306F2546923___C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_07ECF12750A502A7(::Class_3_025FF4981524A424_328* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_328*))((::PBYTE)hIl2Cpp + CLASS_2_22F3A306F2546923___C_METHOD_1_07ECF12750A502A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_2_22F3A306F2546923___C_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}
};
