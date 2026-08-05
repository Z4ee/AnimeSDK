#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D51CB1582D6C6E9A.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_9284A8B129FF717C__CTOR_OFFSET UNITYSDK_OFFSET(0x1489B8F0)

inline static constexpr unsigned int Class_1_9284A8B129FF717C_TypeDefinitionIndex = 46010;

class Class_1_9284A8B129FF717C : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::Int32>* Field_1_9; // 0x10
	::Enum_3_D51CB1582D6C6E9A Field_1_11; // 0x18
	::System::Int32 Field_1_10; // 0x1C
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_7; // 0x24
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Int32 Field_1_6; // 0x2C

	::System::Void _ctor(::Enum_3_D51CB1582D6C6E9A a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D51CB1582D6C6E9A, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_9284A8B129FF717C__CTOR_OFFSET))(this, a1, a2);
	}
};
