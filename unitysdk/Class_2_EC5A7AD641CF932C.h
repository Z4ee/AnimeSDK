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
class Class_1_43BD383C98B4C0C5_127;
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

#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0219D86E940B651E_OFFSET UNITYSDK_OFFSET(0x15937F40)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_07B5A4B5BE989C08_OFFSET UNITYSDK_OFFSET(0x159380A0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x15939840)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0D1803D1D8498BC6_OFFSET UNITYSDK_OFFSET(0x15938330)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_0EBCBF3C29D8B33D_OFFSET UNITYSDK_OFFSET(0x15938480)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15937E20)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_205FC28689D0755B_OFFSET UNITYSDK_OFFSET(0x1593AC10)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_26633789BFAB8876_OFFSET UNITYSDK_OFFSET(0x15939BA0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_28C532CD321F20DC_OFFSET UNITYSDK_OFFSET(0x1593A4E0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_373955BEE837D5FD_OFFSET UNITYSDK_OFFSET(0x15939EA0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_3CDB0C476F79173E_OFFSET UNITYSDK_OFFSET(0x15938E60)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1593AB90)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_4C43E857304135DC_OFFSET UNITYSDK_OFFSET(0x159391B0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_4F8C7517280BA3C0_OFFSET UNITYSDK_OFFSET(0x15938910)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_5F2A1E2A2AF0EF2D_OFFSET UNITYSDK_OFFSET(0x15939440)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x159398C0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_6F40BE5E7E5918E8_OFFSET UNITYSDK_OFFSET(0x15939CD0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_8972CA953214CCAC_OFFSET UNITYSDK_OFFSET(0x15937E90)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15938030)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x1593A2B0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_B14855E77E9E443C_OFFSET UNITYSDK_OFFSET(0x1593A190)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_B901D18EAAFE161C_OFFSET UNITYSDK_OFFSET(0x1593A320)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_BC84E726D1664BB2_OFFSET UNITYSDK_OFFSET(0x159396F0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15937E80)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x15939FE0)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_DAD00FCEA47D5936_OFFSET UNITYSDK_OFFSET(0x1593A240)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x15939C30)
#define CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x159397A0)
#define CLASS_2_EC5A7AD641CF932C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15937E10)
#define CLASS_2_EC5A7AD641CF932C__CTOR_OFFSET UNITYSDK_OFFSET(0x15937BF0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_TypeDefinitionIndex = 87184;

class Class_2_EC5A7AD641CF932C : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC5A7AD641CF932C_TypeDefinitionIndex)->GetStaticField(0xFCB0);
	}
	::Class_2_EA61C125529DDEBD* Field_2_31; // 0x18
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>* Field_2_21; // 0x28
	::MoleMole::Config::ConfigCameraNoise* Field_2_25; // 0x30
	::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204* Field_2_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_19; // 0x40
	::Class_1_207206F45DEB584F* Field_2_14; // 0x48
	::System::Threading::CancellationTokenSource* Field_2_22; // 0x50
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_26; // 0x58
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_27; // 0x60
	::MoleMole::Cameras::CameraTrackBlending* Field_2_13; // 0x68
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_2_1; // 0x70
	::Class_2_5F64140FAB2210F3* Field_2_30; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>* Field_2_20; // 0x80
	::System::Int32 Field_2_0; // 0x88
	::System::Single Field_2_29; // 0x8C
	::System::Boolean Field_2_16; // 0x90
	::System::Single Field_2_9; // 0x94
	::UnityEngine::Vector3 Field_2_7; // 0x98
	::System::Int32 Field_2_11; // 0xA4
	::UnityEngine::Vector3 Field_2_33; // 0xA8
	::UnityEngine::Vector3 Field_2_18; // 0xB4
	::UnityEngine::Quaternion Field_2_32; // 0xC0
	::System::Int32 Field_2_8; // 0xD0
	::UnityEngine::Quaternion Field_2_10; // 0xD4
	::System::Int32 Field_2_23; // 0xE4
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_6; // 0xE8
	::UnityEngine::Quaternion Field_2_17; // 0xF8
	::UnityEngine::Quaternion Field_2_35; // 0x108
	::System::Single Field_2_4; // 0x118
	::System::Single Field_2_12; // 0x11C
	::System::Int32 Field_2_15; // 0x120
	::System::Single Field_2_24; // 0x124
	::System::Single Field_2_34; // 0x128
	::UnityEngine::Vector3 Field_2_28; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_8972CA953214CCAC(::System::Boolean a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_8972CA953214CCAC_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_0219D86E940B651E(::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0219D86E940B651E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_07B5A4B5BE989C08(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_07B5A4B5BE989C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0EBCBF3C29D8B33D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0EBCBF3C29D8B33D_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_4F8C7517280BA3C0()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_4F8C7517280BA3C0_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_4C43E857304135DC()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_4C43E857304135DC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_BC84E726D1664BB2(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_BC84E726D1664BB2_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_6173AF17811AED4B_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_5F2A1E2A2AF0EF2D(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_5F2A1E2A2AF0EF2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_26633789BFAB8876(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_26633789BFAB8876_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204* Method_2_0D1803D1D8498BC6(::System::Int32 a1)
	{
		return ((::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_0D1803D1D8498BC6_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_6F40BE5E7E5918E8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::String* a7, ::System::Collections::Generic::IList_1<::System::String*>* a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_6F40BE5E7E5918E8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::UnityEngine::Vector3 Method_2_3CDB0C476F79173E(::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_3CDB0C476F79173E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Method_2_373955BEE837D5FD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_373955BEE837D5FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_CFE6FB160FFF5938_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_B14855E77E9E443C(::Class_1_43BD383C98B4C0C5_127* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_127*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_B14855E77E9E443C_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAD00FCEA47D5936(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_DAD00FCEA47D5936_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_B901D18EAAFE161C()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_B901D18EAAFE161C_OFFSET))(this);
	}

	::System::Void Method_2_28C532CD321F20DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_28C532CD321F20DC_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Method_2_205FC28689D0755B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_METHOD_2_205FC28689D0755B_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
