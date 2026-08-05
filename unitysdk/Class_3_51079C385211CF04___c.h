#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_DCFF91E03A93C03C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_51079C385211CF04___C_METHOD_1_F214AC29093DB734_OFFSET UNITYSDK_OFFSET(0x194C99F0)
#define CLASS_3_51079C385211CF04___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194C99A0)
#define CLASS_3_51079C385211CF04___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194C99E0)

inline static constexpr unsigned int Class_3_51079C385211CF04___c_TypeDefinitionIndex = 84160;

class Class_3_51079C385211CF04___c : public ::System::Object
{
public:
	static ::Class_3_51079C385211CF04___c** StaticGet___9()
	{
		return (::Class_3_51079C385211CF04___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51079C385211CF04___c_TypeDefinitionIndex)->GetStaticField(0x47D00);
	}
	static ::System::Func_2<::Class_5_DCFF91E03A93C03C*, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::Class_5_DCFF91E03A93C03C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51079C385211CF04___c_TypeDefinitionIndex)->GetStaticField(0x47D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F214AC29093DB734(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C_METHOD_1_F214AC29093DB734_OFFSET))(this, a1);
	}
};
