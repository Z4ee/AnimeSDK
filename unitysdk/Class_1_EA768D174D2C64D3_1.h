#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_683531EF1026FCA6;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_EA768D174D2C64D3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C1920)

inline static constexpr unsigned int Class_1_EA768D174D2C64D3_1_TypeDefinitionIndex = 40399;

class Class_1_EA768D174D2C64D3_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_683531EF1026FCA6*>* BOECMDLCCOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA768D174D2C64D3_1__CTOR_OFFSET))(this);
	}
};
