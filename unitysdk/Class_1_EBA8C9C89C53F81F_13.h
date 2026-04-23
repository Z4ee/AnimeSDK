#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_193;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EBA8C9C89C53F81F_13__CTOR_OFFSET UNITYSDK_OFFSET(0x17F48420)

inline static constexpr unsigned int Class_1_EBA8C9C89C53F81F_13_TypeDefinitionIndex = 38281;

class Class_1_EBA8C9C89C53F81F_13 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_193*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA8C9C89C53F81F_13__CTOR_OFFSET))(this);
	}
};
