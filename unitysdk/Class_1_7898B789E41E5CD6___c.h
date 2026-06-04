#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7898B789E41E5CD6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC25F00)
#define CLASS_1_7898B789E41E5CD6___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC25F40)
#define CLASS_1_7898B789E41E5CD6___C__GETCASEFILEAUTO_B__26_0_OFFSET UNITYSDK_OFFSET(0xAC25F50)
#define CLASS_1_7898B789E41E5CD6___C__GETCASEFILEAUTO_B__26_1_OFFSET UNITYSDK_OFFSET(0xAC25F70)

inline static constexpr unsigned int Class_1_7898B789E41E5CD6___c_TypeDefinitionIndex = 74449;

class Class_1_7898B789E41E5CD6___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7898B789E41E5CD6___c_TypeDefinitionIndex)->GetStaticField(0x13A80);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__26_1()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7898B789E41E5CD6___c_TypeDefinitionIndex)->GetStaticField(0x13A88);
	}
	static ::Class_1_7898B789E41E5CD6___c** StaticGet___9()
	{
		return (::Class_1_7898B789E41E5CD6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7898B789E41E5CD6___c_TypeDefinitionIndex)->GetStaticField(0x13A90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__CTOR_OFFSET))(this);
	}

	::System::String* _GetCaseFileAuto_b__26_0(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__GETCASEFILEAUTO_B__26_0_OFFSET))(this, a1);
	}

	::System::Boolean _GetCaseFileAuto_b__26_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__GETCASEFILEAUTO_B__26_1_OFFSET))(this, a1);
	}
};
