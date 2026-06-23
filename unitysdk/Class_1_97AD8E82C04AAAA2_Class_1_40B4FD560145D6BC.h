#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_97AD8E82C04AAAA2;
namespace System { class String; }

#define CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x12582840)
#define CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC__CTOR_OFFSET UNITYSDK_OFFSET(0x12582830)

inline static constexpr unsigned int Class_1_97AD8E82C04AAAA2_Class_1_40B4FD560145D6BC_TypeDefinitionIndex = 45735;

class Class_1_97AD8E82C04AAAA2_Class_1_40B4FD560145D6BC : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_1_97AD8E82C04AAAA2* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_CLASS_1_40B4FD560145D6BC_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
