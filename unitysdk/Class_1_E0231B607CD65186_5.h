#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE136E515AF9A61;
class Class_1_9103957C32159125;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE50A0)

inline static constexpr unsigned int Class_1_E0231B607CD65186_5_TypeDefinitionIndex = 38452;

class Class_1_E0231B607CD65186_5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9103957C32159125*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_5__CTOR_OFFSET))(this);
	}
};
