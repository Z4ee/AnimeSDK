#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B044E5905AB3D5EA__CTOR_OFFSET UNITYSDK_OFFSET(0x117A3510)

inline static constexpr unsigned int Class_1_B044E5905AB3D5EA_TypeDefinitionIndex = 58727;

class Class_1_B044E5905AB3D5EA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::System::UInt32 Field_1_0; // 0x28
	::System::Boolean Field_1_2; // 0x2C
	::System::Boolean Field_1_1; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044E5905AB3D5EA__CTOR_OFFSET))(this);
	}
};
