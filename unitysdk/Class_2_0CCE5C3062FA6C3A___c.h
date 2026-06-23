#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_0CCE5C3062FA6C3A___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x14305E70)
#define CLASS_2_0CCE5C3062FA6C3A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14305E20)
#define CLASS_2_0CCE5C3062FA6C3A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14305E60)

inline static constexpr unsigned int Class_2_0CCE5C3062FA6C3A___c_TypeDefinitionIndex = 77122;

class Class_2_0CCE5C3062FA6C3A___c : public ::System::Object
{
public:
	static ::Class_2_0CCE5C3062FA6C3A___c** StaticGet___9()
	{
		return (::Class_2_0CCE5C3062FA6C3A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0CCE5C3062FA6C3A___c_TypeDefinitionIndex)->GetStaticField(0x3DF30);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__11_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0CCE5C3062FA6C3A___c_TypeDefinitionIndex)->GetStaticField(0x3DF38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0CCE5C3062FA6C3A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE5C3062FA6C3A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0CCE5C3062FA6C3A___C_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
