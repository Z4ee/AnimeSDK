#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_4_8D1AD90A8B2D39F9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AD1F7433655F920F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CF690)

inline static constexpr unsigned int Class_3_AD1F7433655F920F_TypeDefinitionIndex = 37397;

class Class_3_AD1F7433655F920F : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::Class_4_8D1AD90A8B2D39F9*>* Field_3_1; // 0x10
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD1F7433655F920F__CTOR_OFFSET))(this);
	}
};
