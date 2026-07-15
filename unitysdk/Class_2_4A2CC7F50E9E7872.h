#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F.h"
#include "unitysdk/Class_2_4A2CC7F50E9E7872_Struct_2_6F66D693D1574B37.h"
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
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4A2CC7F50E9E7872_EXECUTE_OFFSET UNITYSDK_OFFSET(0x152B7770)
#define CLASS_2_4A2CC7F50E9E7872_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x152ACA30)
#define CLASS_2_4A2CC7F50E9E7872_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x152B03F0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x152BD660)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_03BF714820207F78_OFFSET UNITYSDK_OFFSET(0x152BE2D0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x152BC360)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x152BE210)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_0532C17080E756EA_OFFSET UNITYSDK_OFFSET(0x152BD060)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x152BAD50)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_070ABD63F0A6562A_OFFSET UNITYSDK_OFFSET(0x152B76A0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_08ADCB9ED8E4A620_OFFSET UNITYSDK_OFFSET(0x152BCEC0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_0BD490DFD500C054_OFFSET UNITYSDK_OFFSET(0x152BB5E0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x152AD530)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x152BE090)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x152BBF60)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_1863136B23E25BF1_OFFSET UNITYSDK_OFFSET(0x152B5B20)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_1D307F06088D1FD4_OFFSET UNITYSDK_OFFSET(0x152BBE90)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x152AFB60)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x152B3120)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_29FEBE5EB570498D_OFFSET UNITYSDK_OFFSET(0x152BD130)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x152ADC70)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_32C5183B1FFB5500_OFFSET UNITYSDK_OFFSET(0x152B5C80)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x152BE280)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x152BD5C0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x152BABF0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x152B47F0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x152BE450)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x152AE5D0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x152BE750)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x152AE570)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_43D33F88F40D8EAB_OFFSET UNITYSDK_OFFSET(0x152B0140)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_4965C1A37844C237_OFFSET UNITYSDK_OFFSET(0x152BB170)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x152B1930)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_5DCB066964366CE5_OFFSET UNITYSDK_OFFSET(0x152AF8B0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_5E1DE86D1E35E25F_OFFSET UNITYSDK_OFFSET(0x152BCF80)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x152BC770)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_7A51B439873F47D6_OFFSET UNITYSDK_OFFSET(0x152AFA50)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x152B0220)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x152B20A0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x152AD900)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_920F4CF93FFE3B49_OFFSET UNITYSDK_OFFSET(0x152B0280)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_9305412E5BAD3A06_OFFSET UNITYSDK_OFFSET(0x152AE630)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_93E6B8A6D29521ED_1_OFFSET UNITYSDK_OFFSET(0x152B19C0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x152B5540)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_94BBE50519C179A6_OFFSET UNITYSDK_OFFSET(0x152BE320)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_A18C310AEF06A8EA_OFFSET UNITYSDK_OFFSET(0x152B3700)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x152BAF90)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_A43D587A89E24E29_OFFSET UNITYSDK_OFFSET(0x152BAFF0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x152AEA50)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_B03BD337C608E98D_OFFSET UNITYSDK_OFFSET(0x152B2010)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_B522BE1446288CF0_OFFSET UNITYSDK_OFFSET(0x152B0370)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_BC43A78E1FA39D94_OFFSET UNITYSDK_OFFSET(0x152B5D10)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x152B3260)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x152BE400)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x152BE4C0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_D9F8D43E00A9E36E_OFFSET UNITYSDK_OFFSET(0x152BC810)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_E5130DE3B4602EF4_OFFSET UNITYSDK_OFFSET(0x152BE270)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_E5340AA01F92592A_OFFSET UNITYSDK_OFFSET(0x152AFF70)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_E72B56432F4A822F_OFFSET UNITYSDK_OFFSET(0x152B3F80)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_E855A974FE0C8866_OFFSET UNITYSDK_OFFSET(0x152AE440)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_ED29565E9772DB03_OFFSET UNITYSDK_OFFSET(0x152BD8E0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_F4E327D0BC6BFB11_OFFSET UNITYSDK_OFFSET(0x152BE540)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_F957D62701DF5581_OFFSET UNITYSDK_OFFSET(0x152AC9B0)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_FA2F7BBF90BD7232_OFFSET UNITYSDK_OFFSET(0x152AF970)
#define CLASS_2_4A2CC7F50E9E7872_METHOD_2_FBF6F9C2FD103527_OFFSET UNITYSDK_OFFSET(0x152BDAA0)
#define CLASS_2_4A2CC7F50E9E7872_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x152ADD10)
#define CLASS_2_4A2CC7F50E9E7872__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x152B4280)
#define CLASS_2_4A2CC7F50E9E7872__COMPUTEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0x152B6700)
#define CLASS_2_4A2CC7F50E9E7872__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0x152B5EC0)
#define CLASS_2_4A2CC7F50E9E7872__CTOR_OFFSET UNITYSDK_OFFSET(0x152AC7B0)
#define CLASS_2_4A2CC7F50E9E7872__EXECUTE_B__38_2_OFFSET UNITYSDK_OFFSET(0x152BEAD0)
#define CLASS_2_4A2CC7F50E9E7872__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x152B7130)
#define CLASS_2_4A2CC7F50E9E7872__GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x152B75B0)
#define CLASS_2_4A2CC7F50E9E7872__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x152B7660)
#define CLASS_2_4A2CC7F50E9E7872__HASVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x152B7560)
#define CLASS_2_4A2CC7F50E9E7872__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0x152B7620)
#define CLASS_2_4A2CC7F50E9E7872__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x152B48F0)
#define CLASS_2_4A2CC7F50E9E7872__PUSHDATATOFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0x152B6A50)
#define CLASS_2_4A2CC7F50E9E7872__SETACTIVECAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x152B43B0)
#define CLASS_2_4A2CC7F50E9E7872__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET UNITYSDK_OFFSET(0x152B5E80)
#define CLASS_2_4A2CC7F50E9E7872__UPDATECAMERASTACK_OFFSET UNITYSDK_OFFSET(0x152B1390)
#define CLASS_2_4A2CC7F50E9E7872__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0x152B6350)
#define CLASS_2_4A2CC7F50E9E7872__UPDATELOOKAHEADY_OFFSET UNITYSDK_OFFSET(0x152B6520)
#define CLASS_2_4A2CC7F50E9E7872__UPDATERELEASECAMERAS_OFFSET UNITYSDK_OFFSET(0x152B2300)
#define CLASS_2_4A2CC7F50E9E7872__UPDATETASKCAMERAS_OFFSET UNITYSDK_OFFSET(0x152B07E0)
#define CLASS_2_4A2CC7F50E9E7872__UPDATETOPCAMERA_OFFSET UNITYSDK_OFFSET(0x152B13F0)
#define CLASS_2_4A2CC7F50E9E7872___APPLYSTACKCAMERAPRIORITIES_B__22_0_OFFSET UNITYSDK_OFFSET(0x152BE7C0)
#define CLASS_2_4A2CC7F50E9E7872___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__56_0_OFFSET UNITYSDK_OFFSET(0x152BEB80)

inline static constexpr unsigned int Class_2_4A2CC7F50E9E7872_TypeDefinitionIndex = 72820;

class Class_2_4A2CC7F50E9E7872 : public ::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<::Class_2_56DCA1B58073717B*>
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0x98
	::System::Action* Field_2_1; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_2; // 0xA8
	::System::Action* Field_2_3; // 0xB0
	::Cinemachine::CinemachineBlendDefinition Field_2_4; // 0xB8
	::RPG::Client::PipelineCameraEngine* Field_2_5; // 0xC8
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_2_6; // 0xD0
	::UnityEngine::Transform* Field_2_7; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_4A2CC7F50E9E7872_Struct_2_6F66D693D1574B37>* Field_2_8; // 0xE0
	::Class_3_001D9EA49F6215B6* Field_2_9; // 0xE8
	::Class_1_2CDF619C23140440* Field_2_10; // 0xF0
	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Field_2_11; // 0xF8
	::Class_1_A62CB52E907FFCCE* Field_2_12; // 0x100
	::System::Action* Field_2_13; // 0x108
	::System::Single Field_2_14; // 0x110
	::System::Single Field_2_15; // 0x114
	::UnityEngine::Vector3 Field_2_16; // 0x118
	::UnityEngine::Vector3 Field_2_17; // 0x124
	::System::Single Field_2_18; // 0x130
	::System::Single Field_2_19; // 0x134
	::System::Single Field_2_20; // 0x138
	::System::Single Field_2_21; // 0x13C
	::UnityEngine::Vector3 Field_2_22; // 0x140
	::System::Single Field_2_23; // 0x14C
	::System::Single Field_2_24; // 0x150
	::System::Int32 Field_2_25; // 0x154
	::UnityEngine::Vector3 Field_2_26; // 0x158
	::System::Boolean Field_2_27; // 0x164
	::System::Boolean Field_2_28; // 0x165
	::System::Boolean Field_2_29; // 0x166
	::System::Boolean Field_2_30; // 0x167
	::System::Single Field_2_31; // 0x168
	::UnityEngine::Quaternion Field_2_32; // 0x16C
	::System::Int32 Field_2_33; // 0x17C
	::System::Single Field_2_34; // 0x180
	::System::Single Field_2_35; // 0x184
	::System::Single Field_2_36; // 0x188
	::System::Single Field_2_37; // 0x18C
	::System::Boolean Field_2_38; // 0x190
	::System::Boolean Field_2_39; // 0x191
	::System::Boolean Field_2_40; // 0x192
	::System::Boolean Field_2_41; // 0x193
	::RPG::GameCore::CameraMode Field_2_42; // 0x194
	::UnityEngine::Vector3 Field_2_43; // 0x198
	::System::Single Field_2_44; // 0x1A4
	::System::Single Field_2_45; // 0x1A8
	::System::Single Field_2_46; // 0x1AC
	::System::Boolean Field_2_47; // 0x1B0
	::System::Boolean Field_2_48; // 0x1B1
	::System::Boolean Field_2_49; // 0x1B2
	::System::Boolean Field_2_50; // 0x1B3
	::System::Single Field_2_51; // 0x1B4
	::System::Single Field_2_52; // 0x1B8

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F957D62701DF5581(::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_F957D62701DF5581_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_2_E855A974FE0C8866()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_E855A974FE0C8866_OFFSET))(this);
	}

	::System::Void Method_2_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_2_7A51B439873F47D6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_7A51B439873F47D6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_43D33F88F40D8EAB(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_43D33F88F40D8EAB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Boolean Method_2_920F4CF93FFE3B49(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_920F4CF93FFE3B49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B522BE1446288CF0(::Cinemachine::CinemachineVirtualCameraBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_B522BE1446288CF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FA2F7BBF90BD7232(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_FA2F7BBF90BD7232_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void _UpdateCameraStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__UPDATECAMERASTACK_OFFSET))(this);
	}

	::System::Void _UpdateReleaseCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__UPDATERELEASECAMERAS_OFFSET))(this);
	}

	::System::Void _UpdateTopCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__UPDATETOPCAMERA_OFFSET))(this);
	}

	::System::Void _ClearActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__CLEARACTIVECAMERA_OFFSET))(this);
	}

	::System::Void _SetActiveCameraView(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__SETACTIVECAMERAVIEW_OFFSET))(this, a1);
	}

	::System::Void _UpdateTaskCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__UPDATETASKCAMERAS_OFFSET))(this);
	}

	::System::Void Method_2_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_2_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void _InitActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__INITACTIVECAMERA_OFFSET))(this);
	}

	static ::System::Void Method_2_1863136B23E25BF1(::Class_2_56DCA1B58073717B* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2, ::RPG::GameCore::FiveDimCameraLensConfig* a3)
	{
		return ((::System::Void(*)(::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimCameraLensConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_1863136B23E25BF1_OFFSET))(a1, a2, a3);
	}

	::System::Boolean _ShouldApplyRenderingErrorCorrectionAngle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 _ComputeTargetSpace(::Struct_2_AACEDD85A6FDFBD8& a1, ::Struct_2_F31A7EC67A3AEEF7& a2)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID, ::Struct_2_AACEDD85A6FDFBD8&, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__COMPUTETARGETSPACE_OFFSET))(this, a1, a2);
	}

	::System::Void _UpdateLookAheadX(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__UPDATELOOKAHEADX_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _UpdateLookAheadY(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__UPDATELOOKAHEADY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ComputeFollowRotation(::Class_2_56DCA1B58073717B* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3, ::RPG::GameCore::FiveDimCameraFollowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&, ::RPG::GameCore::FiveDimCameraFollowConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__COMPUTEFOLLOWROTATION_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _PushDataToFixedCamera(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__PUSHDATATOFIXEDCAMERA_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 _GetRootEntityWorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__GETROOTENTITYWORLDTRANSFORM_OFFSET))(this);
	}

	::System::Boolean _HasViewBound(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__HASVIEWBOUND_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds _GetViewBound(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__GETVIEWBOUND_OFFSET))(this, a1);
	}

	::System::Boolean _HasWaterReflection()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__HASWATERREFLECTION_OFFSET))(this);
	}

	::System::Single _GetWaterLevelHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__GETWATERLEVELHEIGHT_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_2_070ABD63F0A6562A(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_070ABD63F0A6562A_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_26E509975F92479C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A43D587A89E24E29(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_A43D587A89E24E29_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4965C1A37844C237(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_4965C1A37844C237_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Single Method_2_E5340AA01F92592A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_E5340AA01F92592A_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_5DCB066964366CE5(::System::Int32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_5DCB066964366CE5_OFFSET))(this, a1);
	}

	::System::Single Method_2_0532C17080E756EA(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_0532C17080E756EA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_32C5183B1FFB5500(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_32C5183B1FFB5500_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineFramingTransposer* Method_2_BC43A78E1FA39D94(::Class_2_56DCA1B58073717B* a1, ::Cinemachine::CinemachineVirtualCamera* a2)
	{
		return ((::Cinemachine::CinemachineFramingTransposer*(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_BC43A78E1FA39D94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B03BD337C608E98D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_B03BD337C608E98D_OFFSET))(this);
	}

	::System::Void Method_2_0BD490DFD500C054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_0BD490DFD500C054_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D307F06088D1FD4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_1D307F06088D1FD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_2_93E6B8A6D29521ED_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_93E6B8A6D29521ED_1_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_D9F8D43E00A9E36E(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_D9F8D43E00A9E36E_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_2_ED29565E9772DB03(::Cinemachine::CinemachineFramingTransposer* a1, ::Cinemachine::LensSettings a2)
	{
		return ((::UnityEngine::Vector3(*)(::Cinemachine::CinemachineFramingTransposer*, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_ED29565E9772DB03_OFFSET))(a1, a2);
	}

	::System::Void Method_2_9305412E5BAD3A06(::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_9305412E5BAD3A06_OFFSET))(this, a1);
	}

	::System::Void Method_2_08ADCB9ED8E4A620(::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_08ADCB9ED8E4A620_OFFSET))(this, a1);
	}

	::System::Void Method_2_29FEBE5EB570498D(::System::Action_3<::Class_2_56DCA1B58073717B*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_2_56DCA1B58073717B*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_29FEBE5EB570498D_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E1DE86D1E35E25F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_5E1DE86D1E35E25F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E72B56432F4A822F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_E72B56432F4A822F_OFFSET))(this, a1);
	}

	::Class_2_4A2CC7F50E9E7872_Struct_2_6F66D693D1574B37 Method_2_FBF6F9C2FD103527(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1)
	{
		return ((::Class_2_4A2CC7F50E9E7872_Struct_2_6F66D693D1574B37(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_FBF6F9C2FD103527_OFFSET))(this, a1);
	}

	::System::Void Method_2_A18C310AEF06A8EA(::System::Int32 a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_A18C310AEF06A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_277F8930086803D1_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Method_2_E5130DE3B4602EF4()
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_E5130DE3B4602EF4_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Method_2_03BF714820207F78()
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_03BF714820207F78_OFFSET))(this);
	}

	::System::Void Method_2_94BBE50519C179A6(::System::Single a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_94BBE50519C179A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_2_F4E327D0BC6BFB11(::System::Single a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_F4E327D0BC6BFB11_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872_METHOD_2_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Int32 __ApplyStackCameraPriorities_b__22_0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___APPLYSTACKCAMERAPRIORITIES_B__22_0_OFFSET))(this, a1, a2);
	}

	::System::Void _Execute_b__38_2(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872__EXECUTE_B__38_2_OFFSET))(this, a1, a2);
	}

	::System::Void __NormalizeStackFollowCameraTransposers_b__56_0(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__56_0_OFFSET))(this, a1, a2);
	}
};
