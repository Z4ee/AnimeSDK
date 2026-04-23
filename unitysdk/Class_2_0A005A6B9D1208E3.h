#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F.h"
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

class Class_1_4D11CE62B2BEC69E;
class Class_1_87ACBF6FE3D55AF4;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0A005A6B9D1208E3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12452A40)
#define CLASS_2_0A005A6B9D1208E3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1244A4E0)
#define CLASS_2_0A005A6B9D1208E3_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x1244D620)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_01F26E1404CFF8B5_OFFSET UNITYSDK_OFFSET(0x1244C7A0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x124578C0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_0532C17080E756EA_OFFSET UNITYSDK_OFFSET(0x12457750)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x1244F7B0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_070ABD63F0A6562A_OFFSET UNITYSDK_OFFSET(0x12452970)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_0A99B4412D79936D_OFFSET UNITYSDK_OFFSET(0x1244E540)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_0BD490DFD500C054_OFFSET UNITYSDK_OFFSET(0x12456060)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x12458620)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_136C83B6EF2CBAD0_OFFSET UNITYSDK_OFFSET(0x1244CBE0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_14D0065A65932056_OFFSET UNITYSDK_OFFSET(0x1244CD50)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_1AD492A1822B2EDF_OFFSET UNITYSDK_OFFSET(0x1244CEB0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_24C6AC0F1E0B9B4B_OFFSET UNITYSDK_OFFSET(0x12456C80)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x12456880)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x12455AC0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x1244CF90)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x124507D0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x1244DEC0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x12457820)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12450C70)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_4309502CC630EB0E_OFFSET UNITYSDK_OFFSET(0x12455C10)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_463E4A1A2DF8D32D_OFFSET UNITYSDK_OFFSET(0x1244C6A0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_4B67C2E4A34C778A_OFFSET UNITYSDK_OFFSET(0x12457660)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1244DE30)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_586CFC18B20944FD_OFFSET UNITYSDK_OFFSET(0x124580C0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_5A98E911015707CC_OFFSET UNITYSDK_OFFSET(0x12457120)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_5DCB066964366CE5_OFFSET UNITYSDK_OFFSET(0x12451E80)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_6057FCE6E82E7EC9_OFFSET UNITYSDK_OFFSET(0x12457CD0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_666AD75A45001809_OFFSET UNITYSDK_OFFSET(0x12457D80)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x1244CCF0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_8234B537FA4FE22E_OFFSET UNITYSDK_OFFSET(0x1244CE30)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x1244B6F0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1244E5E0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x1244D280)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_8E8B1DEC3F78455A_OFFSET UNITYSDK_OFFSET(0x1244B5D0)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_A18C310AEF06A8EA_OFFSET UNITYSDK_OFFSET(0x1244FB10)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x12455A60)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E3C6544F67BE36C5_OFFSET UNITYSDK_OFFSET(0x12450360)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x12456D40)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E5130DE3B4602EF4_OFFSET UNITYSDK_OFFSET(0x12458780)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_E5340AA01F92592A_OFFSET UNITYSDK_OFFSET(0x12457B30)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_ED29565E9772DB03_OFFSET UNITYSDK_OFFSET(0x12457F10)
#define CLASS_2_0A005A6B9D1208E3_METHOD_2_F957D62701DF5581_OFFSET UNITYSDK_OFFSET(0x1244A460)
#define CLASS_2_0A005A6B9D1208E3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1244AED0)
#define CLASS_2_0A005A6B9D1208E3__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x124506A0)
#define CLASS_2_0A005A6B9D1208E3__COMPUTEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0x12451B70)
#define CLASS_2_0A005A6B9D1208E3__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0x12451330)
#define CLASS_2_0A005A6B9D1208E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1244A280)
#define CLASS_2_0A005A6B9D1208E3__EXECUTE_B__35_1_OFFSET UNITYSDK_OFFSET(0x12458790)
#define CLASS_2_0A005A6B9D1208E3__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12452430)
#define CLASS_2_0A005A6B9D1208E3__GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x12452880)
#define CLASS_2_0A005A6B9D1208E3__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x12452930)
#define CLASS_2_0A005A6B9D1208E3__HASVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x12452830)
#define CLASS_2_0A005A6B9D1208E3__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0x124528F0)
#define CLASS_2_0A005A6B9D1208E3__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x12450D70)
#define CLASS_2_0A005A6B9D1208E3__PUSHDATATOFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0x12451F40)
#define CLASS_2_0A005A6B9D1208E3__SETACTIVECAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x12450870)
#define CLASS_2_0A005A6B9D1208E3__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET UNITYSDK_OFFSET(0x124512F0)
#define CLASS_2_0A005A6B9D1208E3__UPDATECAMERASTACK_OFFSET UNITYSDK_OFFSET(0x1244D900)
#define CLASS_2_0A005A6B9D1208E3__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0x124517C0)
#define CLASS_2_0A005A6B9D1208E3__UPDATELOOKAHEADY_OFFSET UNITYSDK_OFFSET(0x12451990)
#define CLASS_2_0A005A6B9D1208E3__UPDATERELEASECAMERAS_OFFSET UNITYSDK_OFFSET(0x1244E840)
#define CLASS_2_0A005A6B9D1208E3__UPDATETOPCAMERA_OFFSET UNITYSDK_OFFSET(0x1244D980)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12458850)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x12458870)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12458860)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x12458920)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0x12458980)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12458A10)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x12458AC0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0x12458A80)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x12458930)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET UNITYSDK_OFFSET(0x12458940)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATECAMERASTACK_OFFSET UNITYSDK_OFFSET(0x12458880)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0x124589F0)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADY_OFFSET UNITYSDK_OFFSET(0x12458A00)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATERELEASECAMERAS_OFFSET UNITYSDK_OFFSET(0x12458900)
#define CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATETOPCAMERA_OFFSET UNITYSDK_OFFSET(0x12458910)
#define CLASS_2_0A005A6B9D1208E3___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__53_0_OFFSET UNITYSDK_OFFSET(0x124587E0)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3_TypeDefinitionIndex = 70480;

class Class_2_0A005A6B9D1208E3 : public ::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_3_D6E9A038FA23103A* Field_2_7; // 0x98
	::Class_1_4D11CE62B2BEC69E* Field_2_6; // 0xA0
	::UnityEngine::Transform* Field_2_11; // 0xA8
	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Field_2_10; // 0xB0
	::Class_1_87ACBF6FE3D55AF4* Field_2_8; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0A005A6B9D1208E3_Struct_2_6F66D693D1574B37>* Field_2_34; // 0xC0
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_2_35; // 0xC8
	::Cinemachine::CinemachineBlendDefinition Field_2_17; // 0xD0
	::RPG::Client::PipelineCameraEngine* Field_2_14; // 0xE0
	::Cinemachine::CinemachineVirtualCamera* Field_2_12; // 0xE8
	::UnityEngine::Vector3 Field_2_28; // 0xF0
	::System::Single Field_2_20; // 0xFC
	::System::Boolean Field_2_19; // 0x100
	::System::Boolean Field_2_23; // 0x101
	::System::Boolean Field_2_22; // 0x102
	::System::Boolean Field_2_15; // 0x103
	::System::Int32 Field_2_9; // 0x104
	::System::Single Field_2_21; // 0x108
	::System::Single Field_2_4; // 0x10C
	::UnityEngine::Vector3 Field_2_31; // 0x110
	::System::Single Field_2_1; // 0x11C
	::System::Single Field_2_0; // 0x120
	::System::Boolean Field_2_27; // 0x124
	::System::Boolean Field_2_24; // 0x125
	::System::Boolean Field_2_25; // 0x126
	::System::Boolean Field_2_16; // 0x127
	::System::Single Field_2_5; // 0x128
	::RPG::GameCore::CameraMode Field_2_18; // 0x12C
	::System::Int32 Field_2_33; // 0x130
	::UnityEngine::Quaternion Field_2_32; // 0x134
	::UnityEngine::Vector3 Field_2_26; // 0x144
	::System::Single Field_2_2; // 0x150
	::System::Single Field_2_3; // 0x154
	::System::Single Field_2_13; // 0x158
	::UnityEngine::Vector3 Field_2_29; // 0x15C
	::System::Single Field_2_30; // 0x168

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F957D62701DF5581(::Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_F957D62701DF5581_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_2_8E8B1DEC3F78455A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_8E8B1DEC3F78455A_OFFSET))(this);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_2_463E4A1A2DF8D32D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_463E4A1A2DF8D32D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_136C83B6EF2CBAD0(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_136C83B6EF2CBAD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Boolean Method_2_14D0065A65932056(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_14D0065A65932056_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8234B537FA4FE22E(::Cinemachine::CinemachineVirtualCameraBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_8234B537FA4FE22E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1AD492A1822B2EDF(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_1AD492A1822B2EDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
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

	::System::Void _SetActiveCameraView(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__SETACTIVECAMERAVIEW_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void _InitActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__INITACTIVECAMERA_OFFSET))(this);
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

	::System::Void _ComputeFollowRotation(::Class_2_0C58AD91B0F4D809* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3, ::RPG::GameCore::FiveDimCameraFollowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&, ::RPG::GameCore::FiveDimCameraFollowConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__COMPUTEFOLLOWROTATION_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _PushDataToFixedCamera(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__PUSHDATATOFIXEDCAMERA_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 _GetRootEntityWorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__GETROOTENTITYWORLDTRANSFORM_OFFSET))(this);
	}

	::System::Boolean _HasViewBound(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__HASVIEWBOUND_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds _GetViewBound(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__GETVIEWBOUND_OFFSET))(this, a1);
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

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_4309502CC630EB0E(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_4309502CC630EB0E_OFFSET))(this, a1);
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

	::System::Void Method_2_6057FCE6E82E7EC9(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_6057FCE6E82E7EC9_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineFramingTransposer* Method_2_666AD75A45001809(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::Cinemachine::CinemachineFramingTransposer*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_666AD75A45001809_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A99B4412D79936D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_0A99B4412D79936D_OFFSET))(this);
	}

	::System::Void Method_2_0BD490DFD500C054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_0BD490DFD500C054_OFFSET))(this, a1);
	}

	::System::Void Method_2_24C6AC0F1E0B9B4B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_24C6AC0F1E0B9B4B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_37D3D9A3F3244B90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_37D3D9A3F3244B90_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_ED29565E9772DB03(::Cinemachine::CinemachineFramingTransposer* a1, ::Cinemachine::LensSettings a2)
	{
		return ((::UnityEngine::Vector3(*)(::Cinemachine::CinemachineFramingTransposer*, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_ED29565E9772DB03_OFFSET))(a1, a2);
	}

	::System::Void Method_2_01F26E1404CFF8B5(::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_01F26E1404CFF8B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A98E911015707CC(::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_5A98E911015707CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B67C2E4A34C778A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_4B67C2E4A34C778A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3C6544F67BE36C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_E3C6544F67BE36C5_OFFSET))(this, a1);
	}

	::Class_2_0A005A6B9D1208E3_Struct_2_6F66D693D1574B37 Method_2_586CFC18B20944FD(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1)
	{
		return ((::Class_2_0A005A6B9D1208E3_Struct_2_6F66D693D1574B37(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3_METHOD_2_586CFC18B20944FD_OFFSET))(this, a1);
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

	::System::Void _Execute_b__35_1(::Cinemachine::CinemachineVirtualCamera* stackVcam, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* _)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3__EXECUTE_B__35_1_OFFSET))(this, stackVcam, _);
	}

	::System::Void __NormalizeStackFollowCameraTransposers_b__53_0(::Cinemachine::CinemachineVirtualCamera* vcam, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* _)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__53_0_OFFSET))(this, vcam, _);
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

	::System::Void __iFixBaseProxy__InitActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__INITACTIVECAMERA_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__ShouldApplyRenderingErrorCorrectionAngle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 __iFixBaseProxy__ComputeTargetSpace(::Struct_2_AACEDD85A6FDFBD8& P0, ::Struct_2_F31A7EC67A3AEEF7& P1)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID, ::Struct_2_AACEDD85A6FDFBD8&, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__COMPUTETARGETSPACE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy__UpdateLookAheadX(::RPG::GameCore::FiveDimCameraFollowConfig* P0, ::Struct_2_F31A7EC67A3AEEF7& P1, ::Struct_2_AACEDD85A6FDFBD8& P2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADX_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy__UpdateLookAheadY(::RPG::GameCore::FiveDimCameraFollowConfig* P0, ::Struct_2_F31A7EC67A3AEEF7& P1, ::Struct_2_AACEDD85A6FDFBD8& P2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___IFIXBASEPROXY__UPDATELOOKAHEADY_OFFSET))(this, P0, P1, P2);
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
