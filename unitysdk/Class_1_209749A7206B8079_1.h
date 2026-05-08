#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_209749A7206B8079_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A0C1D0)

inline static constexpr unsigned int Class_1_209749A7206B8079_1_TypeDefinitionIndex = 50030;

class Class_1_209749A7206B8079_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_209749A7206B8079_1_TypeDefinitionIndex)->GetStaticField(0x30DA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_209749A7206B8079_1__CCTOR_OFFSET))();
	}
};
