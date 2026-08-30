#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE136E515AF9A61_1;
class Class_1_DA009048708B4CFF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_6__CTOR_OFFSET UNITYSDK_OFFSET(0x181EDFA0)

inline static constexpr unsigned int Class_1_E0231B607CD65186_6_TypeDefinitionIndex = 41171;

class Class_1_E0231B607CD65186_6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DA009048708B4CFF*>* EDEBKBFGDFM; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>* GGHCKBHGHFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_6__CTOR_OFFSET))(this);
	}
};
