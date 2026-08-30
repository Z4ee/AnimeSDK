#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_54172CE33768E8AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C60E570)

inline static constexpr unsigned int Class_1_54172CE33768E8AA_TypeDefinitionIndex = 40801;

class Class_1_54172CE33768E8AA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54172CE33768E8AA_TypeDefinitionIndex)->GetStaticField(0x1C2D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54172CE33768E8AA_TypeDefinitionIndex)->GetStaticField(0x1C2D8);
	}
	// static const ::System::Int32 DHFEBPAFDIF = 0x0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54172CE33768E8AA__CCTOR_OFFSET))();
	}
};
