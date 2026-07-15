#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_5138A02229B03469_METHOD_1_35D6C3EF68447B4B_OFFSET UNITYSDK_OFFSET(0x17EA5CD0)
#define CLASS_1_5138A02229B03469_METHOD_1_6A556D7610920AA7_OFFSET UNITYSDK_OFFSET(0x17EA5E70)
#define CLASS_1_5138A02229B03469__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA5C90)

inline static constexpr unsigned int Class_1_5138A02229B03469_TypeDefinitionIndex = 75074;

class Class_1_5138A02229B03469 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5138A02229B03469__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_35D6C3EF68447B4B()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5138A02229B03469_METHOD_1_35D6C3EF68447B4B_OFFSET))(this);
	}

	::System::Void Method_1_6A556D7610920AA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5138A02229B03469_METHOD_1_6A556D7610920AA7_OFFSET))(this);
	}
};
