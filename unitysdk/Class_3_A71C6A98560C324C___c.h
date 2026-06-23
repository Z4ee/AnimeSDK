#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CAE1CE1BAD52952C;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A71C6A98560C324C___C_METHOD_1_77A0263D7054C23B_OFFSET UNITYSDK_OFFSET(0x153C3890)
#define CLASS_3_A71C6A98560C324C___C_METHOD_1_8C583511E6063393_OFFSET UNITYSDK_OFFSET(0x153C38A0)
#define CLASS_3_A71C6A98560C324C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153C3840)
#define CLASS_3_A71C6A98560C324C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153C3880)

inline static constexpr unsigned int Class_3_A71C6A98560C324C___c_TypeDefinitionIndex = 83059;

class Class_3_A71C6A98560C324C___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_CAE1CE1BAD52952C*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_CAE1CE1BAD52952C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A71C6A98560C324C___c_TypeDefinitionIndex)->GetStaticField(0x300A0);
	}
	static ::Class_3_A71C6A98560C324C___c** StaticGet___9()
	{
		return (::Class_3_A71C6A98560C324C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A71C6A98560C324C___c_TypeDefinitionIndex)->GetStaticField(0x300A8);
	}
	static ::System::Action_2<::Class_3_CAE1CE1BAD52952C*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__6_1()
	{
		return (::System::Action_2<::Class_3_CAE1CE1BAD52952C*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A71C6A98560C324C___c_TypeDefinitionIndex)->GetStaticField(0x300B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_77A0263D7054C23B(::Class_3_CAE1CE1BAD52952C* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CAE1CE1BAD52952C*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C___C_METHOD_1_77A0263D7054C23B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C583511E6063393(::Class_3_CAE1CE1BAD52952C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CAE1CE1BAD52952C*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C___C_METHOD_1_8C583511E6063393_OFFSET))(this, a1);
	}
};
