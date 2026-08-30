#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_551;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_12F3E8D618A60380_CLASS_1_FCD5A2C551387744__CTOR_OFFSET UNITYSDK_OFFSET(0xB73D360)

inline static constexpr unsigned int Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744_TypeDefinitionIndex = 56711;

class Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744 : public ::System::Object
{
public:
	::System::String* GDFNHMFHDKP; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_551*>* CFKMGIJNLPA; // 0x18
	::System::String* GGCHFLBKILE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_CLASS_1_FCD5A2C551387744__CTOR_OFFSET))(this);
	}
};
