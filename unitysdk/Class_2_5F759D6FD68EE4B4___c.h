#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_5F759D6FD68EE4B4___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18277810)
#define CLASS_2_5F759D6FD68EE4B4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182777C0)
#define CLASS_2_5F759D6FD68EE4B4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18277800)

inline static constexpr unsigned int Class_2_5F759D6FD68EE4B4___c_TypeDefinitionIndex = 46677;

class Class_2_5F759D6FD68EE4B4___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__22_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F759D6FD68EE4B4___c_TypeDefinitionIndex)->GetStaticField(0x4E420);
	}
	static ::Class_2_5F759D6FD68EE4B4___c** StaticGet___9()
	{
		return (::Class_2_5F759D6FD68EE4B4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F759D6FD68EE4B4___c_TypeDefinitionIndex)->GetStaticField(0x4E428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5F759D6FD68EE4B4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F759D6FD68EE4B4___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F759D6FD68EE4B4___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
