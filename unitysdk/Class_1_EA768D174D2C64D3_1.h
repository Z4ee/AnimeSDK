#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7370FAEB2C64106B;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_EA768D174D2C64D3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167E5C20)

inline static constexpr unsigned int Class_1_EA768D174D2C64D3_1_TypeDefinitionIndex = 32261;

class Class_1_EA768D174D2C64D3_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_7370FAEB2C64106B*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA768D174D2C64D3_1__CTOR_OFFSET))(this);
	}
};
