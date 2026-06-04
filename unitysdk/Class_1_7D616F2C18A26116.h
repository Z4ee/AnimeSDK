#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_86;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7D616F2C18A26116__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC6930)

inline static constexpr unsigned int Class_1_7D616F2C18A26116_TypeDefinitionIndex = 38698;

class Class_1_7D616F2C18A26116 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_86*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D616F2C18A26116__CTOR_OFFSET))(this);
	}
};
