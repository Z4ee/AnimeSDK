#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCC22A0BAD3D5A17;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A159B2D4D191DB27___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DF7C20)
#define CLASS_1_A159B2D4D191DB27___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF7C60)
#define CLASS_1_A159B2D4D191DB27___C___TRYCREATEFORBOSS_B__4_0_OFFSET UNITYSDK_OFFSET(0x15DF7E70)
#define CLASS_1_A159B2D4D191DB27___C___TRYCREATEFORMEMORY_B__1_0_OFFSET UNITYSDK_OFFSET(0x15DF7C70)
#define CLASS_1_A159B2D4D191DB27___C___TRYCREATEFORSTORY_B__2_0_OFFSET UNITYSDK_OFFSET(0x15DF7D70)

inline static constexpr unsigned int Class_1_A159B2D4D191DB27___c_TypeDefinitionIndex = 76608;

class Class_1_A159B2D4D191DB27___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A159B2D4D191DB27___c_TypeDefinitionIndex)->GetStaticField(0xCD00);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A159B2D4D191DB27___c_TypeDefinitionIndex)->GetStaticField(0xCD08);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A159B2D4D191DB27___c_TypeDefinitionIndex)->GetStaticField(0xCD10);
	}
	static ::Class_1_A159B2D4D191DB27___c** StaticGet___9()
	{
		return (::Class_1_A159B2D4D191DB27___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A159B2D4D191DB27___c_TypeDefinitionIndex)->GetStaticField(0xCD18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A159B2D4D191DB27___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A159B2D4D191DB27___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryCreateForMemory_b__1_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_A159B2D4D191DB27___C___TRYCREATEFORMEMORY_B__1_0_OFFSET))(this, a1);
	}

	::System::Int32 __TryCreateForStory_b__2_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_A159B2D4D191DB27___C___TRYCREATEFORSTORY_B__2_0_OFFSET))(this, a1);
	}

	::System::Int32 __TryCreateForBoss_b__4_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_A159B2D4D191DB27___C___TRYCREATEFORBOSS_B__4_0_OFFSET))(this, a1);
	}
};
