#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_1A345EAE5F749316_144;
class Class_3_765691B743A1DB23_Class_1_63365C960595A088;
class Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x12C66330)
#define CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x12C66510)
#define CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_A58C01D20C4F43C6_OFFSET UNITYSDK_OFFSET(0x12C65E50)
#define CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_DE12F16E897AFCE4_OFFSET UNITYSDK_OFFSET(0x12C66540)
#define CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_FA582350FCD3A1E2_OFFSET UNITYSDK_OFFSET(0x12C662B0)
#define CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7__CTOR_OFFSET UNITYSDK_OFFSET(0x12C65E40)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_D814060EE5BC55A7_TypeDefinitionIndex = 61594;

class Class_3_765691B743A1DB23_Class_1_D814060EE5BC55A7 : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*>* Field_1_6; // 0x10
	::Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B* Field_1_1; // 0x18
	::System::Action* Field_1_5; // 0x20
	::Class_3_765691B743A1DB23_Class_1_63365C960595A088* Field_1_2; // 0x28
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*>* Field_1_7; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_0; // 0x38
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A58C01D20C4F43C6(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_A58C01D20C4F43C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA582350FCD3A1E2(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_FA582350FCD3A1E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE12F16E897AFCE4(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D814060EE5BC55A7_METHOD_1_DE12F16E897AFCE4_OFFSET))(this, a1);
	}
};
