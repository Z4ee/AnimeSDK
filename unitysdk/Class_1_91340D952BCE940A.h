#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_082C291E835A01E6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_91340D952BCE940A_METHOD_1_2B65D7A931236279_OFFSET UNITYSDK_OFFSET(0x1657BC40)
#define CLASS_1_91340D952BCE940A_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1657BE10)
#define CLASS_1_91340D952BCE940A_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x1657BE00)
#define CLASS_1_91340D952BCE940A_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x1657BA60)
#define CLASS_1_91340D952BCE940A__CTOR_OFFSET UNITYSDK_OFFSET(0x1657BA50)

inline static constexpr unsigned int Class_1_91340D952BCE940A_TypeDefinitionIndex = 45830;

class Class_1_91340D952BCE940A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_082C291E835A01E6*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_2B65D7A931236279(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_2B65D7A931236279_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_082C291E835A01E6*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_082C291E835A01E6*>*))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_082C291E835A01E6*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_082C291E835A01E6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91340D952BCE940A_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};
