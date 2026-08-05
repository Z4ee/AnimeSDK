#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_97AD8E82C04AAAA2;
namespace System { class String; }

#define CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC_3_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x12818040)
#define CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x12818030)

inline static constexpr unsigned int Class_1_97AD8E82C04AAAA2_Class_1_40B4FD560145D6BC_3_TypeDefinitionIndex = 89944;

class Class_1_97AD8E82C04AAAA2_Class_1_40B4FD560145D6BC_3 : public ::System::Object
{
public:
	::Class_1_97AD8E82C04AAAA2* Field_1_0; // 0x10
	::System::String* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC_3__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC_3_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
