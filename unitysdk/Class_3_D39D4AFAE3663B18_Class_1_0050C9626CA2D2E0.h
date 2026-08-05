#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_1A345EAE5F749316_144;
class Class_3_D39D4AFAE3663B18_Class_1_B670C257C8E3D9E6;
class Class_3_D39D4AFAE3663B18_Class_1_FF0620E4EE271BCF;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x101AC5A0)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x101AC7B0)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_DE12F16E897AFCE4_OFFSET UNITYSDK_OFFSET(0x101AC3E0)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_E2876DA806F81297_OFFSET UNITYSDK_OFFSET(0x101AC4C0)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_FA582350FCD3A1E2_OFFSET UNITYSDK_OFFSET(0x101AC530)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0__CTOR_OFFSET UNITYSDK_OFFSET(0x101AC3D0)

inline static constexpr unsigned int Class_3_D39D4AFAE3663B18_Class_1_0050C9626CA2D2E0_TypeDefinitionIndex = 48324;

class Class_3_D39D4AFAE3663B18_Class_1_0050C9626CA2D2E0 : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*>* Field_1_4; // 0x10
	::Class_3_D39D4AFAE3663B18_Class_1_FF0620E4EE271BCF* Field_1_7; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x20
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_5; // 0x28
	::Class_3_D39D4AFAE3663B18_Class_1_B670C257C8E3D9E6* Field_1_6; // 0x30
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*>* Field_1_11; // 0x38
	::System::Action* Field_1_10; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DE12F16E897AFCE4(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_DE12F16E897AFCE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E2876DA806F81297(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_E2876DA806F81297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA582350FCD3A1E2(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_FA582350FCD3A1E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_0050C9626CA2D2E0_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}
};
