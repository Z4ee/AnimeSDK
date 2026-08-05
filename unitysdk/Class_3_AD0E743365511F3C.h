#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_3_AD0E743365511F3C_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AD0E743365511F3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6DB9C0)

inline static constexpr unsigned int Class_3_AD0E743365511F3C_TypeDefinitionIndex = 29706;

class Class_3_AD0E743365511F3C : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::Class_3_AD0E743365511F3C_1*>* Field_3_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_7; // 0x18
	::System::UInt32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD0E743365511F3C__CTOR_OFFSET))(this);
	}
};
