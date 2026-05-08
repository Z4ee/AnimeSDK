#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_5_684ED4F7990E83FF___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1185A270)
#define CLASS_5_684ED4F7990E83FF___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1185A230)
#define CLASS_5_684ED4F7990E83FF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1185A1E0)
#define CLASS_5_684ED4F7990E83FF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1185A220)

inline static constexpr unsigned int Class_5_684ED4F7990E83FF___c_TypeDefinitionIndex = 41843;

class Class_5_684ED4F7990E83FF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_684ED4F7990E83FF___c_TypeDefinitionIndex)->GetStaticField(0x34190);
	}
	static ::Class_5_684ED4F7990E83FF___c** StaticGet___9()
	{
		return (::Class_5_684ED4F7990E83FF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_684ED4F7990E83FF___c_TypeDefinitionIndex)->GetStaticField(0x34198);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_684ED4F7990E83FF___c_TypeDefinitionIndex)->GetStaticField(0x341A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};
