#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E82D879A57075A7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9525838A9E2C7378__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A42A0)

inline static constexpr unsigned int Class_1_9525838A9E2C7378_TypeDefinitionIndex = 36479;

class Class_1_9525838A9E2C7378 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7E82D879A57075A7*>* OFAGGKFCIEK; // 0x10
	::System::Boolean EKFDEEHCKDH; // 0x18
	::System::UInt32 CJHNEONCKNE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9525838A9E2C7378__CTOR_OFFSET))(this);
	}
};
