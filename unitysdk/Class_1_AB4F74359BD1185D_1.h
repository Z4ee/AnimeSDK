#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_AB4F74359BD1185D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9FCA10)

inline static constexpr unsigned int Class_1_AB4F74359BD1185D_1_TypeDefinitionIndex = 40829;

class Class_1_AB4F74359BD1185D_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4F74359BD1185D_1_TypeDefinitionIndex)->GetStaticField(0x2B410);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4F74359BD1185D_1_TypeDefinitionIndex)->GetStaticField(0x2B418);
	}
	// static const ::System::Int32 LMKDKIACLHP = 0x0; // 0x0
	// static const ::System::Int32 DHFEBPAFDIF = 0x1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB4F74359BD1185D_1__CCTOR_OFFSET))();
	}
};
