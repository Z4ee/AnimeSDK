#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_8251DB44CC558BE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18058540)

inline static constexpr unsigned int Class_1_8251DB44CC558BE2_TypeDefinitionIndex = 38354;

class Class_1_8251DB44CC558BE2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8251DB44CC558BE2_TypeDefinitionIndex)->GetStaticField(0x13B70);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8251DB44CC558BE2_TypeDefinitionIndex)->GetStaticField(0x13B78);
	}
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8251DB44CC558BE2__CCTOR_OFFSET))();
	}
};
