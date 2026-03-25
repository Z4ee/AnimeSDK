#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0574DA6BF5DF5E24;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_EA768D174D2C64D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1695AD60)

inline static constexpr unsigned int Class_1_EA768D174D2C64D3_TypeDefinitionIndex = 32252;

class Class_1_EA768D174D2C64D3 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_0574DA6BF5DF5E24*>* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_0574DA6BF5DF5E24*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA768D174D2C64D3__CTOR_OFFSET))(this);
	}
};
