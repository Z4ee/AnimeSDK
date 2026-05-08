#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define CLASS_1_0B0E637F49B1905D_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x102110C0)
#define CLASS_1_0B0E637F49B1905D_METHOD_1_5663280591A84D3C_OFFSET UNITYSDK_OFFSET(0x10210F30)
#define CLASS_1_0B0E637F49B1905D_METHOD_1_7C726E6537614255_OFFSET UNITYSDK_OFFSET(0x10210D40)
#define CLASS_1_0B0E637F49B1905D_METHOD_1_A1E4F81A1391F369_OFFSET UNITYSDK_OFFSET(0x10210EB0)
#define CLASS_1_0B0E637F49B1905D_METHOD_1_D0AD414D98E84610_OFFSET UNITYSDK_OFFSET(0x10210710)
#define CLASS_1_0B0E637F49B1905D_METHOD_1_E076FF7A49A60BEC_OFFSET UNITYSDK_OFFSET(0x10211020)

inline static constexpr unsigned int Class_1_0B0E637F49B1905D_TypeDefinitionIndex = 43074;

class Class_1_0B0E637F49B1905D : public ::System::Object
{
public:
	static ::System::Void Method_1_D0AD414D98E84610(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D_METHOD_1_D0AD414D98E84610_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7C726E6537614255(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D_METHOD_1_7C726E6537614255_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5663280591A84D3C(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D_METHOD_1_5663280591A84D3C_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_E076FF7A49A60BEC(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D_METHOD_1_E076FF7A49A60BEC_OFFSET))(a1);
	}

	static ::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D_METHOD_1_151E25A63D14DDB0_OFFSET))();
	}

	static ::System::Void Method_1_A1E4F81A1391F369(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B0E637F49B1905D_METHOD_1_A1E4F81A1391F369_OFFSET))(a1);
	}
};
