#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_30CE0306623609F9;
namespace System { class String; }

#define CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x12ACEF40)
#define CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACEF30)

inline static constexpr unsigned int Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC_TypeDefinitionIndex = 63452;

class Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_30CE0306623609F9* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
