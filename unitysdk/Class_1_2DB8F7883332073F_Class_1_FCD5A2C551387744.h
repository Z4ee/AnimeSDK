#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_472;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2DB8F7883332073F_CLASS_1_FCD5A2C551387744__CTOR_OFFSET UNITYSDK_OFFSET(0x90D6660)

inline static constexpr unsigned int Class_1_2DB8F7883332073F_Class_1_FCD5A2C551387744_TypeDefinitionIndex = 52105;

class Class_1_2DB8F7883332073F_Class_1_FCD5A2C551387744 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_472*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DB8F7883332073F_CLASS_1_FCD5A2C551387744__CTOR_OFFSET))(this);
	}
};
