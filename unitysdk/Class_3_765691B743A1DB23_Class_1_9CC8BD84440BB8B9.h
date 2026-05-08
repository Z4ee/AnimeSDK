#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_1A345EAE5F749316_101;
class Class_3_765691B743A1DB23_Class_1_63365C960595A088;
class Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x175995D0)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_7D917315A29F0477_OFFSET UNITYSDK_OFFSET(0x175997B0)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x17599C30)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_DE12F16E897AFCE4_OFFSET UNITYSDK_OFFSET(0x17599470)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_FA582350FCD3A1E2_OFFSET UNITYSDK_OFFSET(0x17599550)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9__CTOR_OFFSET UNITYSDK_OFFSET(0x17599460)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_9CC8BD84440BB8B9_TypeDefinitionIndex = 72212;

class Class_3_765691B743A1DB23_Class_1_9CC8BD84440BB8B9 : public ::System::Object
{
public:
	::Class_3_765691B743A1DB23_Class_1_63365C960595A088* Field_1_1; // 0x10
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_101*>*>* Field_1_4; // 0x18
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_101*>*>* Field_1_5; // 0x20
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x28
	::Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B* Field_1_2; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_3; // 0x38
	::System::Action* Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DE12F16E897AFCE4(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_DE12F16E897AFCE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA582350FCD3A1E2(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_101*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_101*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_FA582350FCD3A1E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_1_7D917315A29F0477(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_101*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_101*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_7D917315A29F0477_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}
};
