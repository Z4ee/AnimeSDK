#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_552F4B3897A496E8;
class Class_3_F97B015544BE936B;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_31575F5EBD33733E___C_METHOD_1_8738831578484598_OFFSET UNITYSDK_OFFSET(0x1330C6D0)
#define CLASS_3_31575F5EBD33733E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1330C680)
#define CLASS_3_31575F5EBD33733E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1330C6C0)

inline static constexpr unsigned int Class_3_31575F5EBD33733E___c_TypeDefinitionIndex = 43422;

class Class_3_31575F5EBD33733E___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_F97B015544BE936B*, ::Class_3_552F4B3897A496E8*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_F97B015544BE936B*, ::Class_3_552F4B3897A496E8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_31575F5EBD33733E___c_TypeDefinitionIndex)->GetStaticField(0x42000);
	}
	static ::Class_3_31575F5EBD33733E___c** StaticGet___9()
	{
		return (::Class_3_31575F5EBD33733E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_31575F5EBD33733E___c_TypeDefinitionIndex)->GetStaticField(0x42008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8738831578484598(::Class_3_F97B015544BE936B* a1, ::Class_3_552F4B3897A496E8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::Class_3_552F4B3897A496E8*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E___C_METHOD_1_8738831578484598_OFFSET))(this, a1, a2);
	}
};
