#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0E95F23BFAE913E__CTOR_OFFSET UNITYSDK_OFFSET(0x1691E440)

inline static constexpr unsigned int Class_1_D0E95F23BFAE913E_TypeDefinitionIndex = 32250;

class Class_1_D0E95F23BFAE913E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_5; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::UInt32 Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::Int32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E95F23BFAE913E__CTOR_OFFSET))(this);
	}
};
