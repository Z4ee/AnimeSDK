#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_971AA0341F837710;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E0403D2B5AD79E8__CTOR_OFFSET UNITYSDK_OFFSET(0x12ADF9C0)

inline static constexpr unsigned int Class_1_0E0403D2B5AD79E8_TypeDefinitionIndex = 49991;

class Class_1_0E0403D2B5AD79E8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_971AA0341F837710*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E0403D2B5AD79E8__CTOR_OFFSET))(this);
	}
};
