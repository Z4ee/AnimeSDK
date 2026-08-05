#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_EDF4A9D1981F6229__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EC80E0)

inline static constexpr unsigned int Class_1_EDF4A9D1981F6229_TypeDefinitionIndex = 44788;

class Class_1_EDF4A9D1981F6229 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDF4A9D1981F6229_TypeDefinitionIndex)->GetStaticField(0x3E5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDF4A9D1981F6229__CCTOR_OFFSET))();
	}
};
