#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2CDAA649477B6803__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA8310)

inline static constexpr unsigned int Class_1_2CDAA649477B6803_TypeDefinitionIndex = 48242;

class Class_1_2CDAA649477B6803 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::Int64 Field_1_7; // 0x30
	::System::Int64 Field_1_6; // 0x38
	::System::Int64 Field_1_3; // 0x40
	::System::Int64 Field_1_4; // 0x48
	::System::Int64 Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDAA649477B6803__CTOR_OFFSET))(this);
	}
};
