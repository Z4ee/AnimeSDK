#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_218;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7EB5E36440B089F5__CTOR_OFFSET UNITYSDK_OFFSET(0x169F9B40)

inline static constexpr unsigned int Class_1_7EB5E36440B089F5_TypeDefinitionIndex = 33245;

class Class_1_7EB5E36440B089F5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_218* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_218* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_218*>* Field_1_4; // 0x20
	::Class_0_16E4307DCC419505_218* Field_1_2; // 0x28
	::Class_0_16E4307DCC419505_218* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB5E36440B089F5__CTOR_OFFSET))(this);
	}
};
