#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_921BBA4FF7CA4B63;
class Class_5_F638703ACD0FA08E;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_0E6A0DCED1998AD1___C_METHOD_1_17BCC3936C440D6E_OFFSET UNITYSDK_OFFSET(0x14B74190)
#define CLASS_3_0E6A0DCED1998AD1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B74140)
#define CLASS_3_0E6A0DCED1998AD1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B74180)

inline static constexpr unsigned int Class_3_0E6A0DCED1998AD1___c_TypeDefinitionIndex = 73882;

class Class_3_0E6A0DCED1998AD1___c : public ::System::Object
{
public:
	static ::Class_3_0E6A0DCED1998AD1___c** StaticGet___9()
	{
		return (::Class_3_0E6A0DCED1998AD1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0E6A0DCED1998AD1___c_TypeDefinitionIndex)->GetStaticField(0x4B540);
	}
	static ::System::Action_2<::Class_4_921BBA4FF7CA4B63*, ::Class_5_F638703ACD0FA08E*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::Class_4_921BBA4FF7CA4B63*, ::Class_5_F638703ACD0FA08E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0E6A0DCED1998AD1___c_TypeDefinitionIndex)->GetStaticField(0x4B548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0E6A0DCED1998AD1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E6A0DCED1998AD1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_17BCC3936C440D6E(::Class_4_921BBA4FF7CA4B63* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_921BBA4FF7CA4B63*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_0E6A0DCED1998AD1___C_METHOD_1_17BCC3936C440D6E_OFFSET))(this, a1, a2);
	}
};
