#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ABB13E12DFC246CE_CLASS_1_53F2C1683190C074_METHOD_1_5054A64CA7CA68C1_OFFSET UNITYSDK_OFFSET(0x12C51330)
#define CLASS_1_ABB13E12DFC246CE_CLASS_1_53F2C1683190C074__CTOR_OFFSET UNITYSDK_OFFSET(0x12C51320)

inline static constexpr unsigned int Class_1_ABB13E12DFC246CE_Class_1_53F2C1683190C074_TypeDefinitionIndex = 75534;

class Class_1_ABB13E12DFC246CE_Class_1_53F2C1683190C074 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Threading::CancellationToken Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_CLASS_1_53F2C1683190C074__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>> Method_1_5054A64CA7CA68C1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_CLASS_1_53F2C1683190C074_METHOD_1_5054A64CA7CA68C1_OFFSET))(this);
	}
};
