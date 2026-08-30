#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_AB4F74359BD1185D_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C36B2D0)

inline static constexpr unsigned int Class_1_AB4F74359BD1185D_3_TypeDefinitionIndex = 40847;

class Class_1_AB4F74359BD1185D_3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4F74359BD1185D_3_TypeDefinitionIndex)->GetStaticField(0x1ABB0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4F74359BD1185D_3_TypeDefinitionIndex)->GetStaticField(0x1ABB8);
	}
	// static const ::System::Int32 JJJHILHFEJL = 0x0; // 0x0
	// static const ::System::Int32 DHFEBPAFDIF = 0x1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB4F74359BD1185D_3__CCTOR_OFFSET))();
	}
};
