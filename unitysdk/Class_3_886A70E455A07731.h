#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2DEF33878A213259.h"

class Class_1_4CEF4C9D902AD6FD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_886A70E455A07731__CTOR_OFFSET UNITYSDK_OFFSET(0x16246FE0)

inline static constexpr unsigned int Class_3_886A70E455A07731_TypeDefinitionIndex = 36477;

class Class_3_886A70E455A07731 : public ::Class_2_2DEF33878A213259
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DDAOLIFBGMD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4CEF4C9D902AD6FD*>* NHBKJLKDFHI; // 0x30
	::System::UInt32 DOBKKDIECDO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886A70E455A07731__CTOR_OFFSET))(this);
	}
};
