#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_3_976E7EB4180DA020;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2A9A85C85D7F3042__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC06CB0)

inline static constexpr unsigned int Class_3_2A9A85C85D7F3042_TypeDefinitionIndex = 88180;

class Class_3_2A9A85C85D7F3042 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::Class_3_976E7EB4180DA020*>* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A9A85C85D7F3042__CTOR_OFFSET))(this);
	}
};
