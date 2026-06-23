#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_207206F45DEB584F;
class Class_1_43BD383C98B4C0C5_74;
class Class_2_5F64140FAB2210F3;
class Class_2_EA61C125529DDEBD;
class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0219D86E940B651E_OFFSET UNITYSDK_OFFSET(0x12DF9010)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x12DF8C70)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0D1803D1D8498BC6_OFFSET UNITYSDK_OFFSET(0x12DF7670)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0EBCBF3C29D8B33D_OFFSET UNITYSDK_OFFSET(0x12DF7010)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12DF8E50)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_205FC28689D0755B_OFFSET UNITYSDK_OFFSET(0x12DF8EB0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_26633789BFAB8876_OFFSET UNITYSDK_OFFSET(0x12DF9660)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_28C532CD321F20DC_OFFSET UNITYSDK_OFFSET(0x12DF7E00)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_373955BEE837D5FD_OFFSET UNITYSDK_OFFSET(0x12DF7CC0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_3CDB0C476F79173E_OFFSET UNITYSDK_OFFSET(0x12DF9100)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x12DF95E0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_4C43E857304135DC_OFFSET UNITYSDK_OFFSET(0x12DF84A0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_4F8C7517280BA3C0_OFFSET UNITYSDK_OFFSET(0x12DF9760)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_5F2A1E2A2AF0EF2D_OFFSET UNITYSDK_OFFSET(0x12DF8740)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_6F40BE5E7E5918E8_OFFSET UNITYSDK_OFFSET(0x12DF89F0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_7158935AEA77D15F_OFFSET UNITYSDK_OFFSET(0x12DF74A0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_8972CA953214CCAC_OFFSET UNITYSDK_OFFSET(0x12DF8CF0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12DF96F0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x12DF9440)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_ADF80333EB69A7D9_OFFSET UNITYSDK_OFFSET(0x12DF9CC0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_B14855E77E9E443C_OFFSET UNITYSDK_OFFSET(0x12DF8DA0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_BC84E726D1664BB2_OFFSET UNITYSDK_OFFSET(0x12DF8BC0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12DF8BB0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x12DF77C0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_DAD00FCEA47D5936_OFFSET UNITYSDK_OFFSET(0x12DF7C50)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x12DF7970)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x12DF9550)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x12DF94B0)
#define CLASS_2_EC5A7AD641CF932C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DF7000)
#define CLASS_2_EC5A7AD641CF932C__CTOR_OFFSET UNITYSDK_OFFSET(0x12DF6DE0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_TypeDefinitionIndex = 51027;

class Class_2_EC5A7AD641CF932C : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC5A7AD641CF932C_TypeDefinitionIndex)->GetStaticField(0x115F0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>* Field_2_23; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* Field_2_14; // 0x20
	::MoleMole::Config::ConfigCameraNoise* Field_2_26; // 0x28
	::Class_2_5F64140FAB2210F3* Field_2_29; // 0x30
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_24; // 0x38
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_25; // 0x40
	::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204* Field_2_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>* Field_2_22; // 0x50
	::System::Threading::CancellationTokenSource* Field_2_21; // 0x58
	::Class_1_207206F45DEB584F* Field_2_13; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_16; // 0x68
	::Class_2_EA61C125529DDEBD* Field_2_28; // 0x70
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_2_1; // 0x78
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_2_2; // 0x80
	::UnityEngine::Vector3 Field_2_31; // 0x88
	::System::Int32 Field_2_3; // 0x94
	::UnityEngine::Quaternion Field_2_35; // 0x98
	::UnityEngine::Quaternion Field_2_9; // 0xA8
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_5; // 0xB8
	::System::Int32 Field_2_12; // 0xC8
	::System::Single Field_2_33; // 0xCC
	::System::Int32 Field_2_11; // 0xD0
	::System::Int32 Field_2_20; // 0xD4
	::System::Single Field_2_7; // 0xD8
	::UnityEngine::Quaternion Field_2_18; // 0xDC
	::System::Single Field_2_15; // 0xEC
	::System::Single Field_2_27; // 0xF0
	::UnityEngine::Vector3 Field_2_4; // 0xF4
	::System::Single Field_2_10; // 0x100
	::UnityEngine::Quaternion Field_2_32; // 0x104
	::UnityEngine::Vector3 Field_2_17; // 0x114
	::System::Single Field_2_30; // 0x120
	::UnityEngine::Vector3 Field_2_34; // 0x124
	::System::Boolean Field_2_19; // 0x130
	::System::Int32 Field_2_8; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0EBCBF3C29D8B33D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0EBCBF3C29D8B33D_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_7158935AEA77D15F()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_7158935AEA77D15F_OFFSET))(this);
	}

	::System::Void Method_2_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Void Method_2_DAD00FCEA47D5936(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_DAD00FCEA47D5936_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Method_2_373955BEE837D5FD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_373955BEE837D5FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_28C532CD321F20DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_28C532CD321F20DC_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_4C43E857304135DC()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_4C43E857304135DC_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204* Method_2_0D1803D1D8498BC6(::System::Int32 a1)
	{
		return ((::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0D1803D1D8498BC6_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_5F2A1E2A2AF0EF2D(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_5F2A1E2A2AF0EF2D_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_6F40BE5E7E5918E8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::String* a7, ::System::Collections::Generic::IList_1<::System::String*>* a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_6F40BE5E7E5918E8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_BC84E726D1664BB2(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_BC84E726D1664BB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_8972CA953214CCAC(::System::Boolean a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_8972CA953214CCAC_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_B14855E77E9E443C(::Class_1_43BD383C98B4C0C5_74* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_74*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_B14855E77E9E443C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Method_2_205FC28689D0755B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_205FC28689D0755B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_0219D86E940B651E(::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0219D86E940B651E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_3CDB0C476F79173E(::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_3CDB0C476F79173E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_26633789BFAB8876(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_26633789BFAB8876_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_4F8C7517280BA3C0()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_4F8C7517280BA3C0_OFFSET))(this);
	}

	::System::Void Method_2_ADF80333EB69A7D9(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_ADF80333EB69A7D9_OFFSET))(this, a1, a2);
	}
};
