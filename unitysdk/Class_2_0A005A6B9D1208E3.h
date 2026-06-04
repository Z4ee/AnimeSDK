#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F.h"
#include "unitysdk/Class_2_0A005A6B9D1208E3_Struct_2_6F66D693D1574B37.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseCameraSystem_1.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/Struct_2_AACEDD85A6FDFBD8.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_A62CB52E907FFCCE;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0A005A6B9D1208E3_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA5BA140)
#define CLASS_2_0A005A6B9D1208E3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA5B0B10)
#define CLASS_2_0A005A6B9D1208E3_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xA5B44A0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xA5BF740)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_0532C17080E756EA_OFFSET UNITYSDK_OFFSET(0xA5BF170)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xA5B6AA0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_070ABD63F0A6562A_OFFSET UNITYSDK_OFFSET(0xA5BA070)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_0BD490DFD500C054_OFFSET UNITYSDK_OFFSET(0xA5BD8E0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0xA5C0140)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_1163F192802E4946_OFFSET UNITYSDK_OFFSET(0xA5B7650)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_136C83B6EF2CBAD0_OFFSET UNITYSDK_OFFSET(0xA5B41C0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_1863136B23E25BF1_OFFSET UNITYSDK_OFFSET(0xA5B8770)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_1CBC541BB70C2F37_OFFSET UNITYSDK_OFFSET(0xA5B8980)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0xA5B3C00)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_2714A387163730BF_OFFSET UNITYSDK_OFFSET(0xA5B3AF0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_29FEBE5EB570498D_OFFSET UNITYSDK_OFFSET(0xA5BF240)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0xA5B1570)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA5B1BA0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_31D91B0E6BEF85E9_OFFSET UNITYSDK_OFFSET(0xA5BEF80)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_32C5183B1FFB5500_OFFSET UNITYSDK_OFFSET(0xA5B88D0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xA5BF6A0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA5B7DE0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_4965C1A37844C237_OFFSET UNITYSDK_OFFSET(0xA5BD470)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xA5B5520)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_5DCB066964366CE5_OFFSET UNITYSDK_OFFSET(0xA5B3950)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_71A6B3E2EA575875_OFFSET UNITYSDK_OFFSET(0xA5BE950)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_724025AF880C2293_OFFSET UNITYSDK_OFFSET(0xA5B28E0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0xA5B23C0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xA5BE8B0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xA5B42D0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xA5B5BD0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0xA5B5B10)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_920F4CF93FFE3B49_OFFSET UNITYSDK_OFFSET(0xA5B4330)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_9305412E5BAD3A06_OFFSET UNITYSDK_OFFSET(0xA5B2510)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_9B198E780F97C1DD_OFFSET UNITYSDK_OFFSET(0xA5BE100)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_A18C310AEF06A8EA_OFFSET UNITYSDK_OFFSET(0xA5B6DD0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA5BD2C0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xA5B1860)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_B522BE1446288CF0_OFFSET UNITYSDK_OFFSET(0xA5B4420)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0xA5BE530)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0xA5BD320)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA5BE1D0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E5130DE3B4602EF4_OFFSET UNITYSDK_OFFSET(0xA5C02C0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E5340AA01F92592A_OFFSET UNITYSDK_OFFSET(0xA5B3FF0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xA5B55B0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_ED193C81EFE86DB8_OFFSET UNITYSDK_OFFSET(0xA5BF070)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_ED29565E9772DB03_OFFSET UNITYSDK_OFFSET(0xA5BF9C0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_F957D62701DF5581_OFFSET UNITYSDK_OFFSET(0xA5B0A90)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_FA2F7BBF90BD7232_OFFSET UNITYSDK_OFFSET(0xA5B3A10)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_FBF6F9C2FD103527_OFFSET UNITYSDK_OFFSET(0xA5BFB80)
#define CLASS_2_0A005A6B9D1208E3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA5B1C40)
#define CLASS_2_0A005A6B9D1208E3__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA5B7910)
#define CLASS_2_0A005A6B9D1208E3__COMPUTEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0xA5B93A0)
#define CLASS_2_0A005A6B9D1208E3__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0xA5B8B60)
#define CLASS_2_0A005A6B9D1208E3__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B0870)
#define CLASS_2_0A005A6B9D1208E3__EXECUTE_B__37_2_OFFSET UNITYSDK_OFFSET(0xA5C02D0)
#define CLASS_2_0A005A6B9D1208E3__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA5B9B30)
#define CLASS_2_0A005A6B9D1208E3__GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0xA5B9F80)
#define CLASS_2_0A005A6B9D1208E3__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0xA5BA030)
#define CLASS_2_0A005A6B9D1208E3__HASVIEWBOUND_OFFSET UNITYSDK_OFFSET(0xA5B9F30)
#define CLASS_2_0A005A6B9D1208E3__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0xA5B9FF0)
#define CLASS_2_0A005A6B9D1208E3__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA5B7EE0)
#define CLASS_2_0A005A6B9D1208E3__PUSHDATATOFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0xA5B96B0)
#define CLASS_2_0A005A6B9D1208E3__SETACTIVECAMERAVIEW_OFFSET UNITYSDK_OFFSET(0xA5B7A50)
#define CLASS_2_0A005A6B9D1208E3__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET UNITYSDK_OFFSET(0xA5B8B20)
#define CLASS_2_0A005A6B9D1208E3__UPDATECAMERASTACK_OFFSET UNITYSDK_OFFSET(0xA5B5060)
#define CLASS_2_0A005A6B9D1208E3__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0xA5B8FF0)
#define CLASS_2_0A005A6B9D1208E3__UPDATELOOKAHEADY_OFFSET UNITYSDK_OFFSET(0xA5B91C0)
#define CLASS_2_0A005A6B9D1208E3__UPDATERELEASECAMERAS_OFFSET UNITYSDK_OFFSET(0xA5B5E30)
#define CLASS_2_0A005A6B9D1208E3__UPDATETASKCAMERAS_OFFSET UNITYSDK_OFFSET(0xA5B4780)
#define CLASS_2_0A005A6B9D1208E3__UPDATETOPCAMERA_OFFSET UNITYSDK_OFFSET(0xA5B50E0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA5C0390)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xA5C03B0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA5C03A0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA5C0480)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0xA5C04F0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA5C0580)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0xA5C0630)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0xA5C05F0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA5C04A0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET UNITYSDK_OFFSET(0xA5C04B0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATECAMERASTACK_OFFSET UNITYSDK_OFFSET(0xA5C03C0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0xA5C0560)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADY_OFFSET UNITYSDK_OFFSET(0xA5C0570)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATERELEASECAMERAS_OFFSET UNITYSDK_OFFSET(0xA5C0460)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATETASKCAMERAS_OFFSET UNITYSDK_OFFSET(0xA5C0490)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATETOPCAMERA_OFFSET UNITYSDK_OFFSET(0xA5C0470)
#define CLASS_2_0A005A6B9D1208E3___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__55_0_OFFSET UNITYSDK_OFFSET(0xA5C0320)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3_TypeDefinitionIndex = 71296;

class Class_2_0A005A6B9D1208E3 : public ::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	::Class_3_D6E9A038FA23103A* Field_2_0; // 0x98
	::UnityEngine::Transform* Field_2_1; // 0xA0
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_2_2; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_3; // 0xB0
	::RPG::Client::PipelineCameraEngine* Field_2_4; // 0xB8
	::Cinemachine::CinemachineVirtualCamera* Field_2_5; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0A005A6B9D1208E3_Struct_2_6F66D693D1574B37>* Field_2_6; // 0xC8
	::Cinemachine::CinemachineBlendDefinition Field_2_7; // 0xD0
	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Field_2_8; // 0xE0
	::Class_1_2CDF619C23140440* Field_2_9; // 0xE8
	::Class_1_A62CB52E907FFCCE* Field_2_10; // 0xF0
	::System::Single Field_2_11; // 0xF8
	::RPG::GameCore::CameraMode Field_2_12; // 0xFC
	::System::Single Field_2_13; // 0x100
	::UnityEngine::Vector3 Field_2_14; // 0x104
	::UnityEngine::Vector3 Field_2_15; // 0x110
	::UnityEngine::Vector3 Field_2_16; // 0x11C
	::System::Int32 Field_2_17; // 0x128
	::UnityEngine::Vector3 Field_2_18; // 0x12C
	::System::Boolean Field_2_19; // 0x138
	::System::Boolean Field_2_20; // 0x139
	::System::Boolean Field_2_21; // 0x13A
	::System::Single Field_2_22; // 0x13C
	::UnityEngine::Vector3 Field_2_23; // 0x140
	::System::Single Field_2_24; // 0x14C
	::System::Single Field_2_25; // 0x150
	::System::Single Field_2_26; // 0x154
	::System::Single Field_2_27; // 0x158
	::System::Single Field_2_28; // 0x15C
	::System::Single Field_2_29; // 0x160
	::System::Boolean Field_2_30; // 0x164
	::System::Boolean Field_2_31; // 0x165
	::System::Boolean Field_2_32; // 0x166
	::System::Boolean Field_2_33; // 0x167
	::System::Single Field_2_34; // 0x168
	::System::Int32 Field_2_35; // 0x16C
	::UnityEngine::Quaternion Field_2_36; // 0x170
	::System::Boolean Field_2_37; // 0x180
	::System::Boolean Field_2_38; // 0x181

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F957D62701DF5581(::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_F957D62701DF5581_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_2_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Void Method_2_724025AF880C2293()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_724025AF880C2293_OFFSET))(this);
	}

	::System::Void Method_2_2714A387163730BF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_2714A387163730BF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_136C83B6EF2CBAD0(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_136C83B6EF2CBAD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Boolean Method_2_920F4CF93FFE3B49(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_920F4CF93FFE3B49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B522BE1446288CF0(::Cinemachine::CinemachineVirtualCameraBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_B522BE1446288CF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FA2F7BBF90BD7232(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_FA2F7BBF90BD7232_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void _UpdateCameraStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__UPDATECAMERASTACK_OFFSET))(this);
	}

	::System::Void _UpdateReleaseCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__UPDATERELEASECAMERAS_OFFSET))(this);
	}

	::System::Void _UpdateTopCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__UPDATETOPCAMERA_OFFSET))(this);
	}

	::System::Void _ClearActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__CLEARACTIVECAMERA_OFFSET))(this);
	}

	::System::Void _SetActiveCameraView(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__SETACTIVECAMERAVIEW_OFFSET))(this, a1);
	}

	::System::Void _UpdateTaskCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__UPDATETASKCAMERAS_OFFSET))(this);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void _InitActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__INITACTIVECAMERA_OFFSET))(this);
	}

	static ::System::Void Method_2_1863136B23E25BF1(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2, ::RPG::GameCore::FiveDimCameraLensConfig* a3)
	{
		return ((::System::Void(*)(::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimCameraLensConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_1863136B23E25BF1_OFFSET))(a1, a2, a3);
	}

	::System::Boolean _ShouldApplyRenderingErrorCorrectionAngle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 _ComputeTargetSpace(::Struct_2_AACEDD85A6FDFBD8& a1, ::Struct_2_F31A7EC67A3AEEF7& a2)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID, ::Struct_2_AACEDD85A6FDFBD8&, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__COMPUTETARGETSPACE_OFFSET))(this, a1, a2);
	}

	::System::Void _UpdateLookAheadX(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__UPDATELOOKAHEADX_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _UpdateLookAheadY(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__UPDATELOOKAHEADY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ComputeFollowRotation(::Class_2_B8E38BF47138A2E5* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3, ::RPG::GameCore::FiveDimCameraFollowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&, ::RPG::GameCore::FiveDimCameraFollowConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__COMPUTEFOLLOWROTATION_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _PushDataToFixedCamera(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__PUSHDATATOFIXEDCAMERA_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 _GetRootEntityWorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__GETROOTENTITYWORLDTRANSFORM_OFFSET))(this);
	}

	::System::Boolean _HasViewBound(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__HASVIEWBOUND_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds _GetViewBound(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__GETVIEWBOUND_OFFSET))(this, a1);
	}

	::System::Boolean _HasWaterReflection()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__HASWATERREFLECTION_OFFSET))(this);
	}

	::System::Single _GetWaterLevelHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__GETWATERLEVELHEIGHT_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_2_070ABD63F0A6562A(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_070ABD63F0A6562A_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_26E509975F92479C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4965C1A37844C237(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_4965C1A37844C237_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Single Method_2_E5340AA01F92592A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_E5340AA01F92592A_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_5DCB066964366CE5(::System::Int32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_5DCB066964366CE5_OFFSET))(this, a1);
	}

	::System::Single Method_2_0532C17080E756EA(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_0532C17080E756EA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_32C5183B1FFB5500(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_32C5183B1FFB5500_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineFramingTransposer* Method_2_1CBC541BB70C2F37(::Class_2_B8E38BF47138A2E5* a1, ::Cinemachine::CinemachineVirtualCamera* a2)
	{
		return ((::Cinemachine::CinemachineFramingTransposer*(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_1CBC541BB70C2F37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Void Method_2_0BD490DFD500C054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_0BD490DFD500C054_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B198E780F97C1DD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_9B198E780F97C1DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Void Method_2_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_71A6B3E2EA575875(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_71A6B3E2EA575875_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_2_ED29565E9772DB03(::Cinemachine::CinemachineFramingTransposer* a1, ::Cinemachine::LensSettings a2)
	{
		return ((::UnityEngine::Vector3(*)(::Cinemachine::CinemachineFramingTransposer*, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_ED29565E9772DB03_OFFSET))(a1, a2);
	}

	::System::Void Method_2_9305412E5BAD3A06(::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_9305412E5BAD3A06_OFFSET))(this, a1);
	}

	::System::Void Method_2_31D91B0E6BEF85E9(::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_31D91B0E6BEF85E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_29FEBE5EB570498D(::System::Action_3<::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_29FEBE5EB570498D_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED193C81EFE86DB8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_ED193C81EFE86DB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_1163F192802E4946(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_1163F192802E4946_OFFSET))(this, a1);
	}

	::Class_2_0A005A6B9D1208E3_Struct_2_6F66D693D1574B37 Method_2_FBF6F9C2FD103527(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1)
	{
		return ((::Class_2_0A005A6B9D1208E3_Struct_2_6F66D693D1574B37(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_FBF6F9C2FD103527_OFFSET))(this, a1);
	}

	::System::Void Method_2_A18C310AEF06A8EA(::System::Int32 a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_A18C310AEF06A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Method_2_E5130DE3B4602EF4()
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_E5130DE3B4602EF4_OFFSET))(this);
	}

	::System::Void _Execute_b__37_2(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__EXECUTE_B__37_2_OFFSET))(this, a1, a2);
	}

	::System::Void __NormalizeStackFollowCameraTransposers_b__55_0(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__55_0_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_INITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UpdateCameraStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATECAMERASTACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UpdateReleaseCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATERELEASECAMERAS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UpdateTopCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATETOPCAMERA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__ClearActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__CLEARACTIVECAMERA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UpdateTaskCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATETASKCAMERAS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__InitActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__INITACTIVECAMERA_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__ShouldApplyRenderingErrorCorrectionAngle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 __iFixBaseProxy__ComputeTargetSpace(::Struct_2_AACEDD85A6FDFBD8& a1, ::Struct_2_F31A7EC67A3AEEF7& a2)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID, ::Struct_2_AACEDD85A6FDFBD8&, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__COMPUTETARGETSPACE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__UpdateLookAheadX(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADX_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy__UpdateLookAheadY(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADY_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_EAC1BB0F093534A5 __iFixBaseProxy__GetRootEntityWorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__GETROOTENTITYWORLDTRANSFORM_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__HasWaterReflection()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__HASWATERREFLECTION_OFFSET))(this);
	}

	::System::Single __iFixBaseProxy__GetWaterLevelHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__GETWATERLEVELHEIGHT_OFFSET))(this);
	}
};
