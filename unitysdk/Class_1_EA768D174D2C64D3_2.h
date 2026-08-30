#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E6FEE1E26FFD7A8;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_EA768D174D2C64D3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEEAA0)

inline static constexpr unsigned int Class_1_EA768D174D2C64D3_2_TypeDefinitionIndex = 42042;

class Class_1_EA768D174D2C64D3_2 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_6E6FEE1E26FFD7A8*>* DMGOOACLJMM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA768D174D2C64D3_2__CTOR_OFFSET))(this);
	}
};
