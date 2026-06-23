#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_4_A8282259B408C464_Class_1_840255FE48460818;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_6EFE459E10EB1D5E_OFFSET UNITYSDK_OFFSET(0x151B9720)
#define CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x151B98A0)
#define CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x151B9870)
#define CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x151B9840)
#define CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x151B9710)

inline static constexpr unsigned int Class_4_A8282259B408C464_Class_1_392C655A8FFC4FDF_TypeDefinitionIndex = 43250;

class Class_4_A8282259B408C464_Class_1_392C655A8FFC4FDF : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_2; // 0x10
	::Class_4_A8282259B408C464_Class_1_840255FE48460818* Field_1_1; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Action* Field_1_4; // 0x28
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6EFE459E10EB1D5E(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_6EFE459E10EB1D5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A8282259B408C464_CLASS_1_392C655A8FFC4FDF_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}
};
