#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_15;
class Class_1_E0231B607CD65186;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E63367724D8B0533_CLASS_1_3E2990DBB8544800_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x117D4C10)
#define CLASS_3_E63367724D8B0533_CLASS_1_3E2990DBB8544800__CTOR_OFFSET UNITYSDK_OFFSET(0x117D4B10)

inline static constexpr unsigned int Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800_TypeDefinitionIndex = 78481;

class Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_11; // 0x18
	::Class_1_E0231B607CD65186* Field_1_4; // 0x20
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x28
	::Class_0_16E4307DCC419505_15* Field_1_1; // 0x38
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_CLASS_1_3E2990DBB8544800__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_CLASS_1_3E2990DBB8544800_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
