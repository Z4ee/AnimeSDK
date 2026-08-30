#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCC22A0BAD3D5A17;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_16B02A03131C2AFB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176D0330)
#define CLASS_1_16B02A03131C2AFB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176D0370)
#define CLASS_1_16B02A03131C2AFB___C___CREATEFORBOSS_B__3_0_OFFSET UNITYSDK_OFFSET(0x176D0580)
#define CLASS_1_16B02A03131C2AFB___C___CREATEFORMEMORY_B__1_0_OFFSET UNITYSDK_OFFSET(0x176D0380)
#define CLASS_1_16B02A03131C2AFB___C___CREATEFORSTORY_B__2_0_OFFSET UNITYSDK_OFFSET(0x176D0480)

inline static constexpr unsigned int Class_1_16B02A03131C2AFB___c_TypeDefinitionIndex = 80139;

class Class_1_16B02A03131C2AFB___c : public ::System::Object
{
public:
	static ::Class_1_16B02A03131C2AFB___c** StaticGet___9()
	{
		return (::Class_1_16B02A03131C2AFB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16B02A03131C2AFB___c_TypeDefinitionIndex)->GetStaticField(0x651E0);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16B02A03131C2AFB___c_TypeDefinitionIndex)->GetStaticField(0x651E8);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16B02A03131C2AFB___c_TypeDefinitionIndex)->GetStaticField(0x651F0);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16B02A03131C2AFB___c_TypeDefinitionIndex)->GetStaticField(0x651F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __CreateForMemory_b__1_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB___C___CREATEFORMEMORY_B__1_0_OFFSET))(this, a1);
	}

	::System::Int32 __CreateForStory_b__2_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB___C___CREATEFORSTORY_B__2_0_OFFSET))(this, a1);
	}

	::System::Int32 __CreateForBoss_b__3_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB___C___CREATEFORBOSS_B__3_0_OFFSET))(this, a1);
	}
};
