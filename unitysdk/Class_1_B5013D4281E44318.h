#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5013D4281E44318_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x10AA4A00)
#define CLASS_1_B5013D4281E44318__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA4A50)

inline static constexpr unsigned int Class_1_B5013D4281E44318_TypeDefinitionIndex = 51237;

class Class_1_B5013D4281E44318 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5013D4281E44318__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5013D4281E44318_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}
};
