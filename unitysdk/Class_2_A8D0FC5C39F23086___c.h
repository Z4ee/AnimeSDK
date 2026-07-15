#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_A8D0FC5C39F23086___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D3860)
#define CLASS_2_A8D0FC5C39F23086___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170D38A0)
#define CLASS_2_A8D0FC5C39F23086___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x170D38B0)

inline static constexpr unsigned int Class_2_A8D0FC5C39F23086___c_TypeDefinitionIndex = 56130;

class Class_2_A8D0FC5C39F23086___c : public ::System::Object
{
public:
	static ::Class_2_A8D0FC5C39F23086___c** StaticGet___9()
	{
		return (::Class_2_A8D0FC5C39F23086___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8D0FC5C39F23086___c_TypeDefinitionIndex)->GetStaticField(0x2E4F0);
	}
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A8D0FC5C39F23086___c_TypeDefinitionIndex)->GetStaticField(0x2E4F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086___C__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
