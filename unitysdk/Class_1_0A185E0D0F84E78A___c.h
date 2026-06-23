#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0A185E0D0F84E78A___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x127BE440)
#define CLASS_1_0A185E0D0F84E78A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x127BE3F0)
#define CLASS_1_0A185E0D0F84E78A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x127BE430)

inline static constexpr unsigned int Class_1_0A185E0D0F84E78A___c_TypeDefinitionIndex = 69848;

class Class_1_0A185E0D0F84E78A___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A185E0D0F84E78A___c_TypeDefinitionIndex)->GetStaticField(0x2F1A0);
	}
	static ::Class_1_0A185E0D0F84E78A___c** StaticGet___9()
	{
		return (::Class_1_0A185E0D0F84E78A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A185E0D0F84E78A___c_TypeDefinitionIndex)->GetStaticField(0x2F1A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A185E0D0F84E78A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A185E0D0F84E78A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A185E0D0F84E78A___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
