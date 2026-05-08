#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_E3019CE6003C7D3C;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_87C64415348E8459_CLASS_1_7B9F4632C126F715_METHOD_1_F3388A41783DAA6F_OFFSET UNITYSDK_OFFSET(0x13A118D0)
#define CLASS_1_87C64415348E8459_CLASS_1_7B9F4632C126F715__CTOR_OFFSET UNITYSDK_OFFSET(0x13A118C0)

inline static constexpr unsigned int Class_1_87C64415348E8459_Class_1_7B9F4632C126F715_TypeDefinitionIndex = 60784;

class Class_1_87C64415348E8459_Class_1_7B9F4632C126F715 : public ::System::Object
{
public:
	::Class_1_E3019CE6003C7D3C* Field_1_1; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_0; // 0x18
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C64415348E8459_CLASS_1_7B9F4632C126F715__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_F3388A41783DAA6F(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_87C64415348E8459_CLASS_1_7B9F4632C126F715_METHOD_1_F3388A41783DAA6F_OFFSET))(this, a1);
	}
};
