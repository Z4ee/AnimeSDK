#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_85E76291A7596AC8;

#define CLASS_1_8A51273BAF479EC1___C_METHOD_1_938C6E34F26DB542_OFFSET UNITYSDK_OFFSET(0x176A86B0)
#define CLASS_1_8A51273BAF479EC1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176A8660)
#define CLASS_1_8A51273BAF479EC1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176A86A0)

inline static constexpr unsigned int Class_1_8A51273BAF479EC1___c_TypeDefinitionIndex = 90660;

class Class_1_8A51273BAF479EC1___c : public ::System::Object
{
public:
	static ::Class_1_8A51273BAF479EC1___c** StaticGet___9()
	{
		return (::Class_1_8A51273BAF479EC1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A51273BAF479EC1___c_TypeDefinitionIndex)->GetStaticField(0x48320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A51273BAF479EC1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A51273BAF479EC1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_938C6E34F26DB542(::Class_1_85E76291A7596AC8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_85E76291A7596AC8*))((::PBYTE)hIl2Cpp + CLASS_1_8A51273BAF479EC1___C_METHOD_1_938C6E34F26DB542_OFFSET))(this, a1);
	}
};
