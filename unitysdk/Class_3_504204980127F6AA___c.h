#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_504204980127F6AA___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12CBE200)
#define CLASS_3_504204980127F6AA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CBE1B0)
#define CLASS_3_504204980127F6AA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12CBE1F0)

inline static constexpr unsigned int Class_3_504204980127F6AA___c_TypeDefinitionIndex = 41216;

class Class_3_504204980127F6AA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_504204980127F6AA___c_TypeDefinitionIndex)->GetStaticField(0x4B230);
	}
	static ::Class_3_504204980127F6AA___c** StaticGet___9()
	{
		return (::Class_3_504204980127F6AA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_504204980127F6AA___c_TypeDefinitionIndex)->GetStaticField(0x4B238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
