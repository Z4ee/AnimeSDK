#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_52D5047BB2A6D99B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x96EA9B0)
#define CLASS_1_52D5047BB2A6D99B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96EA9F0)
#define CLASS_1_52D5047BB2A6D99B___C__GETCASEFILEAUTO_B__26_0_OFFSET UNITYSDK_OFFSET(0x96EAA00)
#define CLASS_1_52D5047BB2A6D99B___C__GETCASEFILEAUTO_B__26_1_OFFSET UNITYSDK_OFFSET(0x96EAA20)

inline static constexpr unsigned int Class_1_52D5047BB2A6D99B___c_TypeDefinitionIndex = 72626;

class Class_1_52D5047BB2A6D99B___c : public ::System::Object
{
public:
	static ::Class_1_52D5047BB2A6D99B___c** StaticGet___9()
	{
		return (::Class_1_52D5047BB2A6D99B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52D5047BB2A6D99B___c_TypeDefinitionIndex)->GetStaticField(0x681D0);
	}
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52D5047BB2A6D99B___c_TypeDefinitionIndex)->GetStaticField(0x681D8);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__26_1()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52D5047BB2A6D99B___c_TypeDefinitionIndex)->GetStaticField(0x681E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__CTOR_OFFSET))(this);
	}

	::System::String* _GetCaseFileAuto_b__26_0(::System::String* e)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__GETCASEFILEAUTO_B__26_0_OFFSET))(this, e);
	}

	::System::Boolean _GetCaseFileAuto_b__26_1(::System::String* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__GETCASEFILEAUTO_B__26_1_OFFSET))(this, e);
	}
};
