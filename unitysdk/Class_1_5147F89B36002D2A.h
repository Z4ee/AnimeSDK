#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5147F89B36002D2A_POLISH_OFFSET UNITYSDK_OFFSET(0x10CC0660)
#define CLASS_1_5147F89B36002D2A_RECYCLE_OFFSET UNITYSDK_OFFSET(0x10CC0F40)
#define CLASS_1_5147F89B36002D2A__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC4A60)

inline static constexpr unsigned int Class_1_5147F89B36002D2A_TypeDefinitionIndex = 86678;

class Class_1_5147F89B36002D2A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5147F89B36002D2A__CTOR_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5147F89B36002D2A_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5147F89B36002D2A_RECYCLE_OFFSET))(this);
	}
};
