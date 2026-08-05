#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9D2A349C91B617AB_Enum_3_33B16E3E02BB0BB4_16.h"
#include "unitysdk/Class_1_9D2A349C91B617AB_Enum_3_DB3A81D7AD91E411.h"
#include "unitysdk/Class_1_9D2A349C91B617AB_Struct_2_0CC2D0B43800715B.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class SlideRopeCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_5243143C1CFA9367;

#define CLASS_1_9D2A349C91B617AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14DCD1C0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_18D3B6D22EDDAC41_OFFSET UNITYSDK_OFFSET(0x14DCE120)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x14DD2380)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14DD39A0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_1F1EEF8961A54F56_1_OFFSET UNITYSDK_OFFSET(0x14DD19E0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_1F1EEF8961A54F56_2_OFFSET UNITYSDK_OFFSET(0x14DD3AC0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_1F1EEF8961A54F56_OFFSET UNITYSDK_OFFSET(0x14DD18B0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x14DD2D90)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x14DD1AC0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14DCDB00)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x14DCF960)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x14DCD650)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_3E25334CB530FE66_OFFSET UNITYSDK_OFFSET(0x14DCDB50)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14DCD6A0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_44F41640E1C003F0_OFFSET UNITYSDK_OFFSET(0x14DD2E00)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_58D1ADEEFA3EA39C_OFFSET UNITYSDK_OFFSET(0x14DD2870)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x14DD2C80)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x14DD1B10)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x14DD1E10)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_65201BC7200FF657_1_OFFSET UNITYSDK_OFFSET(0x14DD38A0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_65201BC7200FF657_OFFSET UNITYSDK_OFFSET(0x14DD0ED0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_6E6D34E3225EDF7E_OFFSET UNITYSDK_OFFSET(0x14DD31E0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_6E6F865C6BBBA8DD_OFFSET UNITYSDK_OFFSET(0x14DD3A00)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_74890723273A04EB_OFFSET UNITYSDK_OFFSET(0x14DCDBE0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_7D3FA5683A9E28D3_OFFSET UNITYSDK_OFFSET(0x14DCD500)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x14DD3BA0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_B909D1ACF489A7CA_OFFSET UNITYSDK_OFFSET(0x14DD1EF0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x14DD1990)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x14DD0FD0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_CE9A9BE6AFDC845B_OFFSET UNITYSDK_OFFSET(0x14DD24B0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_D692A12BDC577817_OFFSET UNITYSDK_OFFSET(0x14DD23F0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_DAAF54D13F1B801F_OFFSET UNITYSDK_OFFSET(0x14DCBCB0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x14DD1BA0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_E71E7C3FA8B691C8_OFFSET UNITYSDK_OFFSET(0x14DD3610)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x14DD3C60)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14DD23E0)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x14DCEA40)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_F77F11C905B75C91_OFFSET UNITYSDK_OFFSET(0x14DD2750)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_F95793BFD3958AE5_OFFSET UNITYSDK_OFFSET(0x14DD0230)
#define CLASS_1_9D2A349C91B617AB_METHOD_1_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x14DCF890)
#define CLASS_1_9D2A349C91B617AB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCB080)

inline static constexpr unsigned int Class_1_9D2A349C91B617AB_TypeDefinitionIndex = 86936;

class Class_1_9D2A349C91B617AB : public ::System::Object
{
public:
	// static const ::System::Single Field_1_2; // 0x0
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_34; // 0x10
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_25; // 0x18
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_35; // 0x20
	::Class_1_9D2A349C91B617AB_Struct_2_0CC2D0B43800715B Field_1_1; // 0x28
	::UnityEngine::Transform* Field_1_14; // 0xF0
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_31; // 0xF8
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_32; // 0x100
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_28; // 0x108
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_33; // 0x110
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_30; // 0x118
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_24; // 0x120
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x128
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x130
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_29; // 0x138
	::System::Threading::CancellationTokenSource* Field_1_4; // 0x140
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_9D2A349C91B617AB_Enum_3_33B16E3E02BB0BB4_16>* Field_1_7; // 0x148
	::UnityEngine::Vector3 Field_1_0; // 0x150
	::System::Single Field_1_13; // 0x15C
	::System::Boolean Field_1_11; // 0x160
	::System::Boolean Field_1_36; // 0x161
	::System::Boolean Field_1_22; // 0x162
	::System::Boolean Field_1_26; // 0x163
	::UnityEngine::Vector3 Field_1_12; // 0x164
	::System::Single Field_1_18; // 0x170
	::UnityEngine::Vector3 Field_1_9; // 0x174
	::UnityEngine::Vector3 Field_1_27; // 0x180
	::System::Single Field_1_37; // 0x18C
	::System::Single Field_1_21; // 0x190
	::System::Single Field_1_20; // 0x194
	::System::Single Field_1_8; // 0x198
	::UnityEngine::Vector3 Field_1_16; // 0x19C
	::UnityEngine::Vector2 Field_1_17; // 0x1A8
	::UnityEngine::Vector3 Field_1_23; // 0x1B0
	::System::Single Field_1_38; // 0x1BC
	::System::Single Field_1_39; // 0x1C0
	::Class_1_9D2A349C91B617AB_Enum_3_DB3A81D7AD91E411 Field_1_10; // 0x1C4
	::System::Single Field_1_19; // 0x1C8
	::UnityEngine::Vector3 Field_1_15; // 0x1CC

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraConfig* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7D3FA5683A9E28D3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_7D3FA5683A9E28D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_3E25334CB530FE66(::System::Action* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_3E25334CB530FE66_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_74890723273A04EB(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_74890723273A04EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_65201BC7200FF657(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_65201BC7200FF657_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_CC99BBFAC9417CA7_OFFSET))(this);
	}

	::System::Void Method_1_1F1EEF8961A54F56(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_1F1EEF8961A54F56_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_C446CE6A5E1982BC()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_C446CE6A5E1982BC_OFFSET))(this);
	}

	::System::Void Method_1_1F1EEF8961A54F56_1(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_1F1EEF8961A54F56_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_1_9D2A349C91B617AB* Method_1_D692A12BDC577817(::MoleMole::Config::SlideRopeCameraConfig*& a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::Class_1_9D2A349C91B617AB*(*)(::MoleMole::Config::SlideRopeCameraConfig*&, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_D692A12BDC577817_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Single Method_1_CE9A9BE6AFDC845B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_CE9A9BE6AFDC845B_OFFSET))(this);
	}

	::System::Void Method_1_F77F11C905B75C91(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_F77F11C905B75C91_OFFSET))(this, a1);
	}

	::System::Void Method_1_58D1ADEEFA3EA39C(::MoleMole::Config::SlideRopeCameraConfig*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_58D1ADEEFA3EA39C_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B944DF9FC8FD32D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_5B944DF9FC8FD32D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAAF54D13F1B801F(::MoleMole::Config::SlideRopeCameraConfig* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_DAAF54D13F1B801F_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_44F41640E1C003F0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_44F41640E1C003F0_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_6E6D34E3225EDF7E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_6E6D34E3225EDF7E_OFFSET))(this);
	}

	::System::Void Method_1_18D3B6D22EDDAC41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_18D3B6D22EDDAC41_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_FA7F07669215B524()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_FA7F07669215B524_OFFSET))(this);
	}

	::System::Void Method_1_65201BC7200FF657_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_65201BC7200FF657_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_B909D1ACF489A7CA(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_B909D1ACF489A7CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_6E6F865C6BBBA8DD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_6E6F865C6BBBA8DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_F95793BFD3958AE5(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_F95793BFD3958AE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F1EEF8961A54F56_2(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_1F1EEF8961A54F56_2_OFFSET))(this, a1, a2, a3);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_E71E7C3FA8B691C8(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_9D2A349C91B617AB_METHOD_1_E71E7C3FA8B691C8_OFFSET))(this, a1, a2);
	}
};
