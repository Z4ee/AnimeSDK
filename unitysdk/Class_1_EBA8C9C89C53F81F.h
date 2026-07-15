#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_144;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EBA8C9C89C53F81F_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1AE44AA0)
#define CLASS_1_EBA8C9C89C53F81F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE44B40)

inline static constexpr unsigned int Class_1_EBA8C9C89C53F81F_TypeDefinitionIndex = 41104;

class Class_1_EBA8C9C89C53F81F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_144*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA8C9C89C53F81F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA8C9C89C53F81F_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
