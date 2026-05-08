#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_852D049BCF25E480__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F366C0)

inline static constexpr unsigned int Class_1_852D049BCF25E480_TypeDefinitionIndex = 38274;

class Class_1_852D049BCF25E480 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_852D049BCF25E480_TypeDefinitionIndex)->GetStaticField(0x3E4B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_852D049BCF25E480__CCTOR_OFFSET))();
	}
};
