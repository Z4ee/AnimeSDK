#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_54172CE33768E8AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E3A510)

inline static constexpr unsigned int Class_1_54172CE33768E8AA_TypeDefinitionIndex = 39117;

class Class_1_54172CE33768E8AA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54172CE33768E8AA_TypeDefinitionIndex)->GetStaticField(0x26BD0);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54172CE33768E8AA_TypeDefinitionIndex)->GetStaticField(0x26BD8);
	}
	// static const ::System::Int32 Field_1_2 = 0x0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54172CE33768E8AA__CCTOR_OFFSET))();
	}
};
