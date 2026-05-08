#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_5F679CAF37982968___C_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x111B6EE0)
#define CLASS_2_5F679CAF37982968___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x111B6E90)
#define CLASS_2_5F679CAF37982968___C__CTOR_OFFSET UNITYSDK_OFFSET(0x111B6ED0)

inline static constexpr unsigned int Class_2_5F679CAF37982968___c_TypeDefinitionIndex = 81351;

class Class_2_5F679CAF37982968___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__12_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F679CAF37982968___c_TypeDefinitionIndex)->GetStaticField(0x45240);
	}
	static ::Class_2_5F679CAF37982968___c** StaticGet___9()
	{
		return (::Class_2_5F679CAF37982968___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F679CAF37982968___c_TypeDefinitionIndex)->GetStaticField(0x45248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5F679CAF37982968___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F679CAF37982968___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F679CAF37982968___C_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}
};
