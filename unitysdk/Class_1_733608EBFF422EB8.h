#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_733608EBFF422EB8_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xE20BCE0)
#define CLASS_1_733608EBFF422EB8__CTOR_OFFSET UNITYSDK_OFFSET(0xE20BCD0)

inline static constexpr unsigned int Class_1_733608EBFF422EB8_TypeDefinitionIndex = 81888;

class Class_1_733608EBFF422EB8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_733608EBFF422EB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_733608EBFF422EB8_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}
};
