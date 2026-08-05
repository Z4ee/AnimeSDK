#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_26F3F0BB91581A51___C_METHOD_1_D8299432719B3C68_1_OFFSET UNITYSDK_OFFSET(0x13E8E7B0)
#define CLASS_1_26F3F0BB91581A51___C_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x13E8E750)
#define CLASS_1_26F3F0BB91581A51___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E8E700)
#define CLASS_1_26F3F0BB91581A51___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E8E740)

inline static constexpr unsigned int Class_1_26F3F0BB91581A51___c_TypeDefinitionIndex = 74146;

class Class_1_26F3F0BB91581A51___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26F3F0BB91581A51___c_TypeDefinitionIndex)->GetStaticField(0x3F1F0);
	}
	static ::Class_1_26F3F0BB91581A51___c** StaticGet___9()
	{
		return (::Class_1_26F3F0BB91581A51___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26F3F0BB91581A51___c_TypeDefinitionIndex)->GetStaticField(0x3F1F8);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26F3F0BB91581A51___c_TypeDefinitionIndex)->GetStaticField(0x3F200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51___C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51___C_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68_1(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51___C_METHOD_1_D8299432719B3C68_1_OFFSET))(this, a1);
	}
};
