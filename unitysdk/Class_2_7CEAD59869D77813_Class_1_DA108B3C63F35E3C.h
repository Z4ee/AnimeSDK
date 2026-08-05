#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x16ECD480)
#define CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECD470)

inline static constexpr unsigned int Class_2_7CEAD59869D77813_Class_1_DA108B3C63F35E3C_TypeDefinitionIndex = 90483;

class Class_2_7CEAD59869D77813_Class_1_DA108B3C63F35E3C : public ::System::Object
{
public:
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813_CLASS_1_DA108B3C63F35E3C_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
