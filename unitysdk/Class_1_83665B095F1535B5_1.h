#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA13E0)

inline static constexpr unsigned int Class_1_83665B095F1535B5_1_TypeDefinitionIndex = 10857;

class Class_1_83665B095F1535B5_1 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_IAPPKGMKLCA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_1_TypeDefinitionIndex)->GetStaticField(0x156B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_1__CTOR_OFFSET))(this);
	}
};
