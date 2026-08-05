#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_5FF2499A74AD3E10_Class_1_F9BE9C1C7506C55F_1;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x1774DFD0)
#define CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x1774DAB0)
#define CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_6EFE459E10EB1D5E_OFFSET UNITYSDK_OFFSET(0x1774E190)
#define CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x1774DFA0)
#define CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1774DAA0)

inline static constexpr unsigned int Class_3_5FF2499A74AD3E10_Class_1_08E788FA0DF669DA_1_TypeDefinitionIndex = 68844;

class Class_3_5FF2499A74AD3E10_Class_1_08E788FA0DF669DA_1 : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_5; // 0x10
	::System::Action* Field_1_11; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_7; // 0x20
	::System::Action* Field_1_4; // 0x50
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x58
	::Class_3_5FF2499A74AD3E10_Class_1_F9BE9C1C7506C55F_1* Field_1_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_071850D2764E9D4C_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_6EFE459E10EB1D5E(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_5FF2499A74AD3E10_CLASS_1_08E788FA0DF669DA_1_METHOD_1_6EFE459E10EB1D5E_OFFSET))(this, a1);
	}
};
