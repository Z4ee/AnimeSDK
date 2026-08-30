#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9B2CFEFA156739B5__CTOR_OFFSET UNITYSDK_OFFSET(0x198C8740)

inline static constexpr unsigned int Class_1_9B2CFEFA156739B5_TypeDefinitionIndex = 52335;

class Class_1_9B2CFEFA156739B5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Char, ::Class_1_9B2CFEFA156739B5*>* EGGCADJJJOD; // 0x10
	::System::Boolean NGIMGPLFEBO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B2CFEFA156739B5__CTOR_OFFSET))(this);
	}
};
