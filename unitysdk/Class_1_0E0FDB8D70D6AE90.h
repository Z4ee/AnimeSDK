#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_49;
namespace System { class Action; }

#define CLASS_1_0E0FDB8D70D6AE90_METHOD_1_32E9B9A54B46A803_OFFSET UNITYSDK_OFFSET(0x11F96710)
#define CLASS_1_0E0FDB8D70D6AE90_METHOD_1_3F7E82FD65CB9161_OFFSET UNITYSDK_OFFSET(0x11F969D0)
#define CLASS_1_0E0FDB8D70D6AE90_METHOD_1_5107BF4ADA67AE03_OFFSET UNITYSDK_OFFSET(0x11F967C0)
#define CLASS_1_0E0FDB8D70D6AE90_METHOD_1_8779A3F5AD742936_OFFSET UNITYSDK_OFFSET(0x11F965A0)
#define CLASS_1_0E0FDB8D70D6AE90_METHOD_1_C7C7A5B8D43389ED_OFFSET UNITYSDK_OFFSET(0x11F965E0)
#define CLASS_1_0E0FDB8D70D6AE90_METHOD_1_CD0EBD8380A9769C_OFFSET UNITYSDK_OFFSET(0x11F96670)

inline static constexpr unsigned int Class_1_0E0FDB8D70D6AE90_TypeDefinitionIndex = 91441;

class Class_1_0E0FDB8D70D6AE90 : public ::System::Object
{
public:
	static ::System::Void Method_1_8779A3F5AD742936(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_METHOD_1_8779A3F5AD742936_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_C7C7A5B8D43389ED(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_METHOD_1_C7C7A5B8D43389ED_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_CD0EBD8380A9769C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_METHOD_1_CD0EBD8380A9769C_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_32E9B9A54B46A803(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_METHOD_1_32E9B9A54B46A803_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5107BF4ADA67AE03(::Class_2_208CC9941471731A_49* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_49*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_METHOD_1_5107BF4ADA67AE03_OFFSET))(a1, a2, a3, a4);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_3F7E82FD65CB9161(::System::Int32 a1, ::System::Nullable_1<::System::Int32> a2, ::System::Nullable_1<::System::Int32> a3, ::System::Action* a4, ::System::Action* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Int32, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_METHOD_1_3F7E82FD65CB9161_OFFSET))(a1, a2, a3, a4, a5);
	}
};
