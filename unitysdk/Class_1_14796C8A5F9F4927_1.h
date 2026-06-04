#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_14796C8A5F9F4927_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3DC80)

inline static constexpr unsigned int Class_1_14796C8A5F9F4927_1_TypeDefinitionIndex = 39297;

class Class_1_14796C8A5F9F4927_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14796C8A5F9F4927_1__CTOR_OFFSET))(this);
	}
};
