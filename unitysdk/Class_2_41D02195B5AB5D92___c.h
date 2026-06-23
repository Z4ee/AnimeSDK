#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_41D02195B5AB5D92___C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1689AB20)
#define CLASS_2_41D02195B5AB5D92___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1689AAD0)
#define CLASS_2_41D02195B5AB5D92___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1689AB10)

inline static constexpr unsigned int Class_2_41D02195B5AB5D92___c_TypeDefinitionIndex = 82257;

class Class_2_41D02195B5AB5D92___c : public ::System::Object
{
public:
	static ::Class_2_41D02195B5AB5D92___c** StaticGet___9()
	{
		return (::Class_2_41D02195B5AB5D92___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_41D02195B5AB5D92___c_TypeDefinitionIndex)->GetStaticField(0x41FF0);
	}
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_41D02195B5AB5D92___c_TypeDefinitionIndex)->GetStaticField(0x41FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_41D02195B5AB5D92___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D02195B5AB5D92___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D02195B5AB5D92___C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
