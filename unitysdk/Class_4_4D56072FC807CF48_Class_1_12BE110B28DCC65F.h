#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_4_4D56072FC807CF48_Class_1_851003209D9AB32A;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x16189710)
#define CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x161898F0)
#define CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x16189830)
#define CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_E79871D193CACBCC_OFFSET UNITYSDK_OFFSET(0x16189860)
#define CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F__CTOR_OFFSET UNITYSDK_OFFSET(0x16189700)

inline static constexpr unsigned int Class_4_4D56072FC807CF48_Class_1_12BE110B28DCC65F_TypeDefinitionIndex = 75833;

class Class_4_4D56072FC807CF48_Class_1_12BE110B28DCC65F : public ::System::Object
{
public:
	::Class_4_4D56072FC807CF48_Class_1_851003209D9AB32A* Field_1_6; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x18
	::System::Action* Field_1_11; // 0x20
	::System::Action* Field_1_4; // 0x28
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_5; // 0x30
	::System::Boolean Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::System::Void Method_1_E79871D193CACBCC(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_E79871D193CACBCC_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_4D56072FC807CF48_CLASS_1_12BE110B28DCC65F_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}
};
