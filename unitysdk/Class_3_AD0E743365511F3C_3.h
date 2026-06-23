#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_3_FA79C5F3F0C12A1C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AD0E743365511F3C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE25890)

inline static constexpr unsigned int Class_3_AD0E743365511F3C_3_TypeDefinitionIndex = 89074;

class Class_3_AD0E743365511F3C_3 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::Class_3_FA79C5F3F0C12A1C*>* Field_3_1; // 0x10
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD0E743365511F3C_3__CTOR_OFFSET))(this);
	}
};
