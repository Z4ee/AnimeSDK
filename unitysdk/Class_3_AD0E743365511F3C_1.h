#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

class Class_3_5CDFA73EDDB946DF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AD0E743365511F3C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27ED20)

inline static constexpr unsigned int Class_3_AD0E743365511F3C_1_TypeDefinitionIndex = 26248;

class Class_3_AD0E743365511F3C_1 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::Collections::Generic::List_1<::Class_3_5CDFA73EDDB946DF*>* Field_3_1; // 0x10
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD0E743365511F3C_1__CTOR_OFFSET))(this);
	}
};
