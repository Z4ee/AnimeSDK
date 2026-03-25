#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1AF7B7023D9BBBF5_METHOD_1_945282646BBF7AEA_OFFSET UNITYSDK_OFFSET(0x89DEED0)
#define CLASS_1_1AF7B7023D9BBBF5__CCTOR_OFFSET UNITYSDK_OFFSET(0x89DEF60)

inline static constexpr unsigned int Class_1_1AF7B7023D9BBBF5_TypeDefinitionIndex = 38569;

class Class_1_1AF7B7023D9BBBF5 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7B4E9156998275BE*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7B4E9156998275BE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1AF7B7023D9BBBF5_TypeDefinitionIndex)->GetStaticField(0x44AB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1AF7B7023D9BBBF5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_945282646BBF7AEA(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_1AF7B7023D9BBBF5_METHOD_1_945282646BBF7AEA_OFFSET))(a1);
	}
};
