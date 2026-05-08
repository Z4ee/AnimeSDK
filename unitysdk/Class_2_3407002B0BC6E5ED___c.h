#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3407002B0BC6E5ED___C_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x118EE080)
#define CLASS_2_3407002B0BC6E5ED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118EE030)
#define CLASS_2_3407002B0BC6E5ED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x118EE070)

inline static constexpr unsigned int Class_2_3407002B0BC6E5ED___c_TypeDefinitionIndex = 63075;

class Class_2_3407002B0BC6E5ED___c : public ::System::Object
{
public:
	static ::Class_2_3407002B0BC6E5ED___c** StaticGet___9()
	{
		return (::Class_2_3407002B0BC6E5ED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3407002B0BC6E5ED___c_TypeDefinitionIndex)->GetStaticField(0x41170);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3407002B0BC6E5ED___c_TypeDefinitionIndex)->GetStaticField(0x41178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED___C__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED___C_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
