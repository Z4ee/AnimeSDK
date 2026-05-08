#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_27B44ED5EB90FCDC_Class_1_A85213F68B5074E9;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0xB4E92B0)
#define CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0xB4E9280)
#define CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xB4E95F0)
#define CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_E79871D193CACBCC_OFFSET UNITYSDK_OFFSET(0xB4E92E0)
#define CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB4E9370)
#define CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E9270)

inline static constexpr unsigned int Class_3_27B44ED5EB90FCDC_Class_1_ED5217E5C3CBD7FF_TypeDefinitionIndex = 46886;

class Class_3_27B44ED5EB90FCDC_Class_1_ED5217E5C3CBD7FF : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x20
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_2; // 0x28
	::System::Action* Field_1_3; // 0x30
	::Class_3_27B44ED5EB90FCDC_Class_1_A85213F68B5074E9* Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E79871D193CACBCC(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_E79871D193CACBCC_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B44ED5EB90FCDC_CLASS_1_ED5217E5C3CBD7FF_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}
};
