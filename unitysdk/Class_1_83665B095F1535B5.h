#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D735F40)

inline static constexpr unsigned int Class_1_83665B095F1535B5_TypeDefinitionIndex = 6542;

class Class_1_83665B095F1535B5 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_KFCIEOKJAGF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_TypeDefinitionIndex)->GetStaticField(0x22A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5__CCTOR_OFFSET))();
	}
};
