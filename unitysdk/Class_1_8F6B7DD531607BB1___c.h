#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F6B7DD531607BB1___C_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1DC98E90)
#define CLASS_1_8F6B7DD531607BB1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC98E40)
#define CLASS_1_8F6B7DD531607BB1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC98E80)

inline static constexpr unsigned int Class_1_8F6B7DD531607BB1___c_TypeDefinitionIndex = 91963;

class Class_1_8F6B7DD531607BB1___c : public ::System::Object
{
public:
	static ::Class_1_8F6B7DD531607BB1___c** StaticGet___9()
	{
		return (::Class_1_8F6B7DD531607BB1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6B7DD531607BB1___c_TypeDefinitionIndex)->GetStaticField(0x51E80);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__11_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6B7DD531607BB1___c_TypeDefinitionIndex)->GetStaticField(0x51E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1___C_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
