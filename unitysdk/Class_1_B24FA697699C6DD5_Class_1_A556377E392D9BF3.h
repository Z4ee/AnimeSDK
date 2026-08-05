#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/System/Object.h"

class Class_1_B24FA697699C6DD5;
namespace System { class Action; }

#define CLASS_1_B24FA697699C6DD5_CLASS_1_A556377E392D9BF3_METHOD_1_2EB06392422F229C_OFFSET UNITYSDK_OFFSET(0x16DE2E50)
#define CLASS_1_B24FA697699C6DD5_CLASS_1_A556377E392D9BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x16DE2E40)

inline static constexpr unsigned int Class_1_B24FA697699C6DD5_Class_1_A556377E392D9BF3_TypeDefinitionIndex = 83018;

class Class_1_B24FA697699C6DD5_Class_1_A556377E392D9BF3 : public ::System::Object
{
public:
	::Enum_3_903100312A285543 Field_1_0; // 0x10
	::Enum_3_903100312A285543 Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24FA697699C6DD5_CLASS_1_A556377E392D9BF3__CTOR_OFFSET))(this);
	}

	::System::Action* Method_1_2EB06392422F229C(::Class_1_B24FA697699C6DD5* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::Class_1_B24FA697699C6DD5*))((::PBYTE)hIl2Cpp + CLASS_1_B24FA697699C6DD5_CLASS_1_A556377E392D9BF3_METHOD_1_2EB06392422F229C_OFFSET))(this, a1);
	}
};
