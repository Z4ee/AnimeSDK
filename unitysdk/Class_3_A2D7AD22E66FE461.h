#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2DEF33878A213259.h"

class Class_1_4CEF4C9D902AD6FD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_A2D7AD22E66FE461__CTOR_OFFSET UNITYSDK_OFFSET(0x14A741C0)

inline static constexpr unsigned int Class_3_A2D7AD22E66FE461_TypeDefinitionIndex = 35616;

class Class_3_A2D7AD22E66FE461 : public ::Class_2_2DEF33878A213259
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4CEF4C9D902AD6FD*>* Field_3_1; // 0x30
	::System::UInt32 Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2D7AD22E66FE461__CTOR_OFFSET))(this);
	}
};
