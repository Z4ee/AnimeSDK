#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0E95F23BFAE913E__CTOR_OFFSET UNITYSDK_OFFSET(0x17F13CA0)

inline static constexpr unsigned int Class_1_D0E95F23BFAE913E_TypeDefinitionIndex = 37970;

class Class_1_D0E95F23BFAE913E : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E95F23BFAE913E__CTOR_OFFSET))(this);
	}
};
