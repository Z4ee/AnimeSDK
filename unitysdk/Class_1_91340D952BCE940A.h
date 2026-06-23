#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E18C65B7CE4A976;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_91340D952BCE940A_METHOD_1_2B65D7A931236279_OFFSET UNITYSDK_OFFSET(0x14383880)
#define CLASS_1_91340D952BCE940A_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x14383690)
#define CLASS_1_91340D952BCE940A_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x14383680)
#define CLASS_1_91340D952BCE940A_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x143836A0)
#define CLASS_1_91340D952BCE940A__CTOR_OFFSET UNITYSDK_OFFSET(0x14383670)

inline static constexpr unsigned int Class_1_91340D952BCE940A_TypeDefinitionIndex = 60754;

class Class_1_91340D952BCE940A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2E18C65B7CE4A976*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_2E18C65B7CE4A976*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2E18C65B7CE4A976*>*))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_2E18C65B7CE4A976*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2E18C65B7CE4A976*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_2B65D7A931236279(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_2B65D7A931236279_OFFSET))(this, a1);
	}
};
