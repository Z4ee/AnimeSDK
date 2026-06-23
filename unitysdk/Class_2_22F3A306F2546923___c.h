#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_3_025FF4981524A424_611;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_22F3A306F2546923___C_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x12FE6AC0)
#define CLASS_2_22F3A306F2546923___C_METHOD_1_BB46C9985B021C91_OFFSET UNITYSDK_OFFSET(0x12FE6B50)
#define CLASS_2_22F3A306F2546923___C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x12FE6AB0)
#define CLASS_2_22F3A306F2546923___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FE6A60)
#define CLASS_2_22F3A306F2546923___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE6AA0)

inline static constexpr unsigned int Class_2_22F3A306F2546923___c_TypeDefinitionIndex = 54383;

class Class_2_22F3A306F2546923___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x393C0);
	}
	static ::System::Action_1<::Class_3_025FF4981524A424_611*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_025FF4981524A424_611*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x393C8);
	}
	static ::Class_2_22F3A306F2546923___c** StaticGet___9()
	{
		return (::Class_2_22F3A306F2546923___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x393D0);
	}
	static ::System::Action_1<::System::Int32>** StaticGet___9__4_1()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_22F3A306F2546923___c_TypeDefinitionIndex)->GetStaticField(0x393D8);
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

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_2_22F3A306F2546923___C_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB46C9985B021C91(::Class_3_025FF4981524A424_611* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_611*))((::PBYTE)hIl2Cpp + CLASS_2_22F3A306F2546923___C_METHOD_1_BB46C9985B021C91_OFFSET))(this, a1);
	}
};
