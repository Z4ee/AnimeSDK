#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9A9ED352F5FBDB9E_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x18B94850)
#define CLASS_1_9A9ED352F5FBDB9E_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x18B94710)
#define CLASS_1_9A9ED352F5FBDB9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B946F0)

inline static constexpr unsigned int Class_1_9A9ED352F5FBDB9E_TypeDefinitionIndex = 79820;

class Class_1_9A9ED352F5FBDB9E : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A9ED352F5FBDB9E_TypeDefinitionIndex)->GetStaticField(0x12580);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A9ED352F5FBDB9E_TypeDefinitionIndex)->GetStaticField(0x12584);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A9ED352F5FBDB9E__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A9ED352F5FBDB9E_METHOD_1_8F059A365E90744C_OFFSET))();
	}

	static ::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A9ED352F5FBDB9E_METHOD_1_41EC8E0AD6EE8093_OFFSET))();
	}
};
