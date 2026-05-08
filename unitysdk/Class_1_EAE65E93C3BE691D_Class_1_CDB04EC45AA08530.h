#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }

#define CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x14DEB340)
#define CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEB330)

inline static constexpr unsigned int Class_1_EAE65E93C3BE691D_Class_1_CDB04EC45AA08530_TypeDefinitionIndex = 74731;

class Class_1_EAE65E93C3BE691D_Class_1_CDB04EC45AA08530 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
