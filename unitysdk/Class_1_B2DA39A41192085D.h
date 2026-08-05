#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B2DA39A41192085D__CTOR_OFFSET UNITYSDK_OFFSET(0x180E7860)

inline static constexpr unsigned int Class_1_B2DA39A41192085D_TypeDefinitionIndex = 63427;

class Class_1_B2DA39A41192085D : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x18
	::System::Single Field_1_0; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2DA39A41192085D__CTOR_OFFSET))(this);
	}
};
