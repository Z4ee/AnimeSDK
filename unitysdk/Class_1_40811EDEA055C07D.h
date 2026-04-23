#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_995D6B0DA70B465D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_40811EDEA055C07D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F1C330)

inline static constexpr unsigned int Class_1_40811EDEA055C07D_TypeDefinitionIndex = 38846;

class Class_1_40811EDEA055C07D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_995D6B0DA70B465D*>* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40811EDEA055C07D__CTOR_OFFSET))(this);
	}
};
