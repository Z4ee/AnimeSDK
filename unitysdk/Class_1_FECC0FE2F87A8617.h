#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D51CB1582D6C6E9A.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_FECC0FE2F87A8617__CTOR_OFFSET UNITYSDK_OFFSET(0xFA770C0)

inline static constexpr unsigned int Class_1_FECC0FE2F87A8617_TypeDefinitionIndex = 45512;

class Class_1_FECC0FE2F87A8617 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::Int32>* Field_1_7; // 0x10
	::System::Int32 Field_1_6; // 0x18
	::System::Boolean Field_1_4; // 0x1C
	::System::Boolean Field_1_3; // 0x1D
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::Enum_3_D51CB1582D6C6E9A Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor(::Enum_3_D51CB1582D6C6E9A a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D51CB1582D6C6E9A, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FECC0FE2F87A8617__CTOR_OFFSET))(this, a1, a2);
	}
};
