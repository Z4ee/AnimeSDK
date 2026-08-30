#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F.h"
#include "unitysdk/Class_2_BCFC54C6C3BB4207_Struct_2_6F66D693D1574B37.h"
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
class Class_3_912CC478F2B21832;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BCFC54C6C3BB4207_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB8C9CA0)
#define CLASS_2_BCFC54C6C3BB4207_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB8BEAA0)
#define CLASS_2_BCFC54C6C3BB4207_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xB8C2650)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xB8D06A0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_03BF714820207F78_OFFSET UNITYSDK_OFFSET(0xB8D1590)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xB8D1460)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_0532C17080E756EA_OFFSET UNITYSDK_OFFSET(0xB8CFF40)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB8CD550)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_070ABD63F0A6562A_OFFSET UNITYSDK_OFFSET(0xB8C9BD0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_0BD490DFD500C054_OFFSET UNITYSDK_OFFSET(0xB8CDE10)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_0C4299CA5A0B715E_OFFSET UNITYSDK_OFFSET(0xB8D0150)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0xB8D12E0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_136C83B6EF2CBAD0_OFFSET UNITYSDK_OFFSET(0xB8C2370)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_1863136B23E25BF1_OFFSET UNITYSDK_OFFSET(0xB8C7F50)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_1CBC541BB70C2F37_OFFSET UNITYSDK_OFFSET(0xB8C8160)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB8D1520)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0xB8C1D90)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_2714A387163730BF_OFFSET UNITYSDK_OFFSET(0xB8C1C80)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0xB8BF5D0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB8BFD90)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_31D91B0E6BEF85E9_OFFSET UNITYSDK_OFFSET(0xB8CF790)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_32C5183B1FFB5500_OFFSET UNITYSDK_OFFSET(0xB8C80B0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB8D14D0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xB8D0600)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xB8C5480)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB8CD3F0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB8C6B80)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB8D1780)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xB8C0740)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xB8D1A80)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB8C06E0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4823802EAAFDEA1E_OFFSET UNITYSDK_OFFSET(0xB8CD7F0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4965C1A37844C237_OFFSET UNITYSDK_OFFSET(0xB8CD9A0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0xB8D0000)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xB8C3BE0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_5DCB066964366CE5_OFFSET UNITYSDK_OFFSET(0xB8C1AE0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_71A6B3E2EA575875_OFFSET UNITYSDK_OFFSET(0xB8CF0C0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_7435303307FA82B1_OFFSET UNITYSDK_OFFSET(0xB8C6280)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0xB8C0590)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xB8CF020)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xB8C2480)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_81B91E393925E0D6_OFFSET UNITYSDK_OFFSET(0xB8D0910)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xB8C43A0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0xB8C42E0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_920F4CF93FFE3B49_OFFSET UNITYSDK_OFFSET(0xB8C24E0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_9305412E5BAD3A06_OFFSET UNITYSDK_OFFSET(0xB8C07A0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_93E6B8A6D29521ED_1_OFFSET UNITYSDK_OFFSET(0xB8C3C70)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0xB8C7940)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_94BBE50519C179A6_OFFSET UNITYSDK_OFFSET(0xB8D1650)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_9B198E780F97C1DD_OFFSET UNITYSDK_OFFSET(0xB8CE6E0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_A18C310AEF06A8EA_OFFSET UNITYSDK_OFFSET(0xB8C5A00)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_A24680A134F40BA4_OFFSET UNITYSDK_OFFSET(0xB8D09F0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xB8CD790)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0xB8CF880)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xB8C0BF0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xB8BF9F0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_B522BE1446288CF0_OFFSET UNITYSDK_OFFSET(0xB8C25D0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB8D1730)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8CFDC0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0xB8CEBE0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xB8D17F0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB8CE7B0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_E5130DE3B4602EF4_OFFSET UNITYSDK_OFFSET(0xB8D14C0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_E5340AA01F92592A_OFFSET UNITYSDK_OFFSET(0xB8C21A0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xB8C5530)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_ED193C81EFE86DB8_OFFSET UNITYSDK_OFFSET(0xB8CFE40)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_ED29565E9772DB03_OFFSET UNITYSDK_OFFSET(0xB8D0B30)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_F4E327D0BC6BFB11_OFFSET UNITYSDK_OFFSET(0xB8D1870)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_F957D62701DF5581_OFFSET UNITYSDK_OFFSET(0xB8BEA20)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_FA2F7BBF90BD7232_OFFSET UNITYSDK_OFFSET(0xB8C1BA0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_FBF6F9C2FD103527_OFFSET UNITYSDK_OFFSET(0xB8D0CF0)
#define CLASS_2_BCFC54C6C3BB4207_METHOD_2_FE0C9719685D02FE_OFFSET UNITYSDK_OFFSET(0xB8D15E0)
#define CLASS_2_BCFC54C6C3BB4207_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB8BFE30)
#define CLASS_2_BCFC54C6C3BB4207__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xB8C65C0)
#define CLASS_2_BCFC54C6C3BB4207__COMPUTEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0xB8C8B80)
#define CLASS_2_BCFC54C6C3BB4207__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0xB8C8340)
#define CLASS_2_BCFC54C6C3BB4207__CTOR_OFFSET UNITYSDK_OFFSET(0xB8BE800)
#define CLASS_2_BCFC54C6C3BB4207__EXECUTE_B__38_2_OFFSET UNITYSDK_OFFSET(0xB8D1E30)
#define CLASS_2_BCFC54C6C3BB4207__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB8C9600)
#define CLASS_2_BCFC54C6C3BB4207__GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0xB8C9AE0)
#define CLASS_2_BCFC54C6C3BB4207__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0xB8C9B90)
#define CLASS_2_BCFC54C6C3BB4207__HASVIEWBOUND_OFFSET UNITYSDK_OFFSET(0xB8C9A90)
#define CLASS_2_BCFC54C6C3BB4207__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0xB8C9B50)
#define CLASS_2_BCFC54C6C3BB4207__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xB8C6C80)
#define CLASS_2_BCFC54C6C3BB4207__PUSHDATATOFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0xB8C8EE0)
#define CLASS_2_BCFC54C6C3BB4207__SETACTIVECAMERAVIEW_OFFSET UNITYSDK_OFFSET(0xB8C66F0)
#define CLASS_2_BCFC54C6C3BB4207__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET UNITYSDK_OFFSET(0xB8C8300)
#define CLASS_2_BCFC54C6C3BB4207__UPDATECAMERASTACK_OFFSET UNITYSDK_OFFSET(0xB8C3600)
#define CLASS_2_BCFC54C6C3BB4207__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0xB8C87D0)
#define CLASS_2_BCFC54C6C3BB4207__UPDATELOOKAHEADY_OFFSET UNITYSDK_OFFSET(0xB8C89A0)
#define CLASS_2_BCFC54C6C3BB4207__UPDATERELEASECAMERAS_OFFSET UNITYSDK_OFFSET(0xB8C4600)
#define CLASS_2_BCFC54C6C3BB4207__UPDATETASKCAMERAS_OFFSET UNITYSDK_OFFSET(0xB8C2A10)
#define CLASS_2_BCFC54C6C3BB4207__UPDATETOPCAMERA_OFFSET UNITYSDK_OFFSET(0xB8C3680)
#define CLASS_2_BCFC54C6C3BB4207___APPLYSTACKCAMERAPRIORITIES_B__22_0_OFFSET UNITYSDK_OFFSET(0xB8D1AF0)
#define CLASS_2_BCFC54C6C3BB4207___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__61_0_OFFSET UNITYSDK_OFFSET(0xB8D1E80)

inline static constexpr unsigned int Class_2_BCFC54C6C3BB4207_TypeDefinitionIndex = 76281;

class Class_2_BCFC54C6C3BB4207 : public ::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	// static const ::System::Single CDFLIPLGLKN; // 0x0
	::System::Action* DBPLLFAAEIB; // 0x98
	::Cinemachine::CinemachineVirtualCamera* FEFJMJFFNEG; // 0xA0
	::Cinemachine::CinemachineBlendDefinition KDMGMLINKGJ; // 0xA8
	::RPG::Client::PipelineCameraEngine* FEBCOJGFEPK; // 0xB8
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0xC0
	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* CDFHFDNCAMH; // 0xC8
	::System::Collections::Generic::HashSet_1<::System::Int32>* AOKOCBIIBIN; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_BCFC54C6C3BB4207_Struct_2_6F66D693D1574B37>* PLCFDBLKMNI; // 0xD8
	::System::Action* IAKGCDKFLKH; // 0xE0
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0xE8
	::System::Action* DFAMDGMGKOL; // 0xF0
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0xF8
	::Class_1_A62CB52E907FFCCE* IJPIHJKEPKE; // 0x100
	::UnityEngine::Transform* MEAMOJGDIPK; // 0x108
	::System::Int32 ECCKNFHNOCG; // 0x110
	::UnityEngine::Vector3 NJMCHCDFAPC; // 0x114
	::System::Single BNDFPBPLFJP; // 0x120
	::System::Boolean KLJMFLIMLFG; // 0x124
	::System::Boolean AEOAFPDBAJL; // 0x125
	::System::Boolean AOANKJBKLPK; // 0x126
	::System::Boolean NHANLOKBHJH; // 0x127
	::System::Single FBFLIEIBIAJ; // 0x128
	::System::Single CAEPPJCFCOA; // 0x12C
	::System::Single CFCJFPGGLOO; // 0x130
	::System::Single OODIJPKCNLB; // 0x134
	::System::Single LNIKIDPKMAL; // 0x138
	::System::Int32 LFINEBLCIGO; // 0x13C
	::RPG::GameCore::CameraMode OKPDNAPCJPE; // 0x140
	::System::Single OPIDFEOLCHF; // 0x144
	::System::Int32 GKAGOFFPDEN; // 0x148
	::System::Int32 HANPGICEKBB; // 0x14C
	::System::Single NJLCBLNIJCP; // 0x150
	::System::Int32 EKPLPAMHFJD; // 0x154
	::UnityEngine::Vector3 PLLHAANIOPC; // 0x158
	::System::Boolean GLMGOGJGEOJ; // 0x164
	::System::Boolean MHDBPKKDACD; // 0x165
	::System::Boolean ELJCLNJNLAH; // 0x166
	::System::Boolean CPOEIIPKBGF; // 0x167
	::UnityEngine::Quaternion OLMOPFDHGPA; // 0x168
	::System::Single CKOMBNAEOAM; // 0x178
	::UnityEngine::Vector3 INJEPDGDEFO; // 0x17C
	::UnityEngine::Vector3 OPJFANBFDEJ; // 0x188
	::System::Int32 FKIOKCFNBKM; // 0x194
	::System::Boolean NCEOJJGLIOI; // 0x198
	::System::Boolean CFCJPFBAJHK; // 0x199
	::System::Single JFLPMGHGKHG; // 0x19C
	::System::Single BKMFIBPLKDB; // 0x1A0
	::System::Boolean LAPGMNIBGEF; // 0x1A4
	::System::Boolean NKLNEEFFDOI; // 0x1A5
	::System::Boolean BNBMIBGDDNE; // 0x1A6
	::System::Single PEMIKOIAABF; // 0x1A8
	::System::Single FLCJKNGOJMC; // 0x1AC
	::System::Single BPAGBJIFKCJ; // 0x1B0
	::System::Single PKKOMNJLGEO; // 0x1B4
	::System::Int32 PLNBOPGBMKK; // 0x1B8
	::System::Single JMHBHKFCAJA; // 0x1BC
	::UnityEngine::Vector3 HNKAKJKLDJG; // 0x1C0
	::System::Single OFPKGKAFBGI; // 0x1CC
	::System::Single APOECJNJHOB; // 0x1D0

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F957D62701DF5581(::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_F957D62701DF5581_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_2_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Void Method_2_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_2_2714A387163730BF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_2714A387163730BF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_136C83B6EF2CBAD0(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_136C83B6EF2CBAD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Boolean Method_2_920F4CF93FFE3B49(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_920F4CF93FFE3B49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B522BE1446288CF0(::Cinemachine::CinemachineVirtualCameraBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_B522BE1446288CF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FA2F7BBF90BD7232(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_FA2F7BBF90BD7232_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void _UpdateCameraStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__UPDATECAMERASTACK_OFFSET))(this);
	}

	::System::Void _UpdateReleaseCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__UPDATERELEASECAMERAS_OFFSET))(this);
	}

	::System::Void _UpdateTopCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__UPDATETOPCAMERA_OFFSET))(this);
	}

	::System::Void _ClearActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__CLEARACTIVECAMERA_OFFSET))(this);
	}

	::System::Void _SetActiveCameraView(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__SETACTIVECAMERAVIEW_OFFSET))(this, a1);
	}

	::System::Void _UpdateTaskCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__UPDATETASKCAMERAS_OFFSET))(this);
	}

	::System::Void Method_2_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void _InitActiveCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__INITACTIVECAMERA_OFFSET))(this);
	}

	static ::System::Void Method_2_1863136B23E25BF1(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2, ::RPG::GameCore::FiveDimCameraLensConfig* a3)
	{
		return ((::System::Void(*)(::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimCameraLensConfig*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_1863136B23E25BF1_OFFSET))(a1, a2, a3);
	}

	::System::Boolean _ShouldApplyRenderingErrorCorrectionAngle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 _ComputeTargetSpace(::Struct_2_AACEDD85A6FDFBD8& a1, ::Struct_2_F31A7EC67A3AEEF7& a2)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID, ::Struct_2_AACEDD85A6FDFBD8&, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__COMPUTETARGETSPACE_OFFSET))(this, a1, a2);
	}

	::System::Void _UpdateLookAheadX(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__UPDATELOOKAHEADX_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _UpdateLookAheadY(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__UPDATELOOKAHEADY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ComputeFollowRotation(::Class_2_B8E38BF47138A2E5* a1, ::Struct_2_F31A7EC67A3AEEF7& a2, ::Struct_2_AACEDD85A6FDFBD8& a3, ::RPG::GameCore::FiveDimCameraFollowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Struct_2_F31A7EC67A3AEEF7&, ::Struct_2_AACEDD85A6FDFBD8&, ::RPG::GameCore::FiveDimCameraFollowConfig*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__COMPUTEFOLLOWROTATION_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _PushDataToFixedCamera(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__PUSHDATATOFIXEDCAMERA_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 _GetRootEntityWorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__GETROOTENTITYWORLDTRANSFORM_OFFSET))(this);
	}

	::System::Boolean _HasViewBound(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__HASVIEWBOUND_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds _GetViewBound(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__GETVIEWBOUND_OFFSET))(this, a1);
	}

	::System::Boolean _HasWaterReflection()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__HASWATERREFLECTION_OFFSET))(this);
	}

	::System::Single _GetWaterLevelHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__GETWATERLEVELHEIGHT_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_2_070ABD63F0A6562A(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_070ABD63F0A6562A_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_26E509975F92479C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4823802EAAFDEA1E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4823802EAAFDEA1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4965C1A37844C237(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4965C1A37844C237_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Single Method_2_E5340AA01F92592A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_E5340AA01F92592A_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_5DCB066964366CE5(::System::Int32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_5DCB066964366CE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A24680A134F40BA4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_A24680A134F40BA4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_81B91E393925E0D6(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_81B91E393925E0D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_0532C17080E756EA(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_0532C17080E756EA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_32C5183B1FFB5500(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_32C5183B1FFB5500_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineFramingTransposer* Method_2_1CBC541BB70C2F37(::Class_2_B8E38BF47138A2E5* a1, ::Cinemachine::CinemachineVirtualCamera* a2)
	{
		return ((::Cinemachine::CinemachineFramingTransposer*(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_1CBC541BB70C2F37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Void Method_2_0BD490DFD500C054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_0BD490DFD500C054_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B198E780F97C1DD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_9B198E780F97C1DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Void Method_2_93E6B8A6D29521ED_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_93E6B8A6D29521ED_1_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_71A6B3E2EA575875(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_71A6B3E2EA575875_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_2_ED29565E9772DB03(::Cinemachine::CinemachineFramingTransposer* a1, ::Cinemachine::LensSettings a2)
	{
		return ((::UnityEngine::Vector3(*)(::Cinemachine::CinemachineFramingTransposer*, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_ED29565E9772DB03_OFFSET))(a1, a2);
	}

	::System::Void Method_2_9305412E5BAD3A06(::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_9305412E5BAD3A06_OFFSET))(this, a1);
	}

	::System::Void Method_2_31D91B0E6BEF85E9(::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_31D91B0E6BEF85E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C4299CA5A0B715E(::System::Action_3<::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_0C4299CA5A0B715E_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED193C81EFE86DB8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_ED193C81EFE86DB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_7435303307FA82B1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_7435303307FA82B1_OFFSET))(this, a1);
	}

	::Class_2_BCFC54C6C3BB4207_Struct_2_6F66D693D1574B37 Method_2_FBF6F9C2FD103527(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1)
	{
		return ((::Class_2_BCFC54C6C3BB4207_Struct_2_6F66D693D1574B37(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_FBF6F9C2FD103527_OFFSET))(this, a1);
	}

	::System::Void Method_2_A18C310AEF06A8EA(::System::Int32 a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_A18C310AEF06A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Method_2_E5130DE3B4602EF4()
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_E5130DE3B4602EF4_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Method_2_03BF714820207F78()
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_03BF714820207F78_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimMoveConfig* Method_2_FE0C9719685D02FE()
	{
		return ((::RPG::GameCore::FiveDimMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_FE0C9719685D02FE_OFFSET))(this);
	}

	::System::Void Method_2_94BBE50519C179A6(::System::Single a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_94BBE50519C179A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_2_F4E327D0BC6BFB11(::System::Single a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_F4E327D0BC6BFB11_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207_METHOD_2_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Int32 __ApplyStackCameraPriorities_b__22_0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___APPLYSTACKCAMERAPRIORITIES_B__22_0_OFFSET))(this, a1, a2);
	}

	::System::Void _Execute_b__38_2(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207__EXECUTE_B__38_2_OFFSET))(this, a1, a2);
	}

	::System::Void __NormalizeStackFollowCameraTransposers_b__61_0(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__61_0_OFFSET))(this, a1, a2);
	}
};
