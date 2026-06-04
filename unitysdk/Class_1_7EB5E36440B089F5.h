#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_233;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7EB5E36440B089F5__CTOR_OFFSET UNITYSDK_OFFSET(0x18C004E0)

inline static constexpr unsigned int Class_1_7EB5E36440B089F5_TypeDefinitionIndex = 39803;

class Class_1_7EB5E36440B089F5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_233* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_233* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_233* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_233*>* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_233* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB5E36440B089F5__CTOR_OFFSET))(this);
	}
};
