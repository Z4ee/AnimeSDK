#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleAxis.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleControlModeType.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleDragModeState.h"
#include "unitysdk/Struct_2_9B91F9179F6DB20D.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleCameraController; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_BINDDUMMYTOUI_OFFSET UNITYSDK_OFFSET(0xDD1D250)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CALCBILLBOARDSCREENROTATE_OFFSET UNITYSDK_OFFSET(0xDD1E3F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_DESTROYBOARD_OFFSET UNITYSDK_OFFSET(0xDD1C2F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ENDCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDD1C9F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_GETGROUP_OFFSET UNITYSDK_OFFSET(0xDD1D150)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_1_OFFSET UNITYSDK_OFFSET(0xDD1B310)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_2_OFFSET UNITYSDK_OFFSET(0xDD1AE90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_OFFSET UNITYSDK_OFFSET(0xDD15000)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITCAMERA_OFFSET UNITYSDK_OFFSET(0xDD1C120)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITDUMMYBLOCK_OFFSET UNITYSDK_OFFSET(0xDD1B370)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xDD20720)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_13275269230D5342_OFFSET UNITYSDK_OFFSET(0xDD20650)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_1B4BF40856AAD721_OFFSET UNITYSDK_OFFSET(0xDD205B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_2C5421072C50A323_OFFSET UNITYSDK_OFFSET(0xDD21890)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xDD1C8B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0xDD1FA00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0xDD1CC00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xDD20B30)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_7AAD06186762BE3C_OFFSET UNITYSDK_OFFSET(0xDD20A00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_7E2B87FDCB5FCF51_OFFSET UNITYSDK_OFFSET(0xDD203A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xDD20160)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_95AA09851A266DE3_OFFSET UNITYSDK_OFFSET(0xDD221B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_A0D8189C4327374C_OFFSET UNITYSDK_OFFSET(0xDD20BC0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xDD21780)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_AAD21DE195D05736_1_OFFSET UNITYSDK_OFFSET(0xDD1CE40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xDD1FCD0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_BCFFE6CBFC0AF90C_OFFSET UNITYSDK_OFFSET(0xDD1E8E0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_F11610AE8CED7CFB_OFFSET UNITYSDK_OFFSET(0xDD1C6C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_FB705BB9253CCF6A_OFFSET UNITYSDK_OFFSET(0xDD21D30)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION0_OFFSET UNITYSDK_OFFSET(0xDD200E0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION1_OFFSET UNITYSDK_OFFSET(0xDD20320)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDD20050)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD1C910)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xDD1C580)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD1FFE0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONRELOAD_OFFSET UNITYSDK_OFFSET(0xDD1ED40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSELECTORDER_OFFSET UNITYSDK_OFFSET(0xDD1EE60)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTCONTROL_OFFSET UNITYSDK_OFFSET(0xDD1C800)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTROTATE_OFFSET UNITYSDK_OFFSET(0xDD1E740)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHATTACHDUMMYBLOCKROTATION_OFFSET UNITYSDK_OFFSET(0xDD1E2B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHDUMMYBLOCKATTACH_OFFSET UNITYSDK_OFFSET(0xDD1D330)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHXZDUMMYBLOCKATTACH_OFFSET UNITYSDK_OFFSET(0xDD1D3D0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHYDUMMYBLOCKATTACH_OFFSET UNITYSDK_OFFSET(0xDD1D870)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_RESETCONTROLBOARD_OFFSET UNITYSDK_OFFSET(0xDD15B60)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_STARTCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDD1FA90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UNBINDDUMMYFROMUI_OFFSET UNITYSDK_OFFSET(0xDD1D2C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD1F330)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDD22320)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDD222D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleControlBoard_TypeDefinitionIndex = 78356;

	class RubikCubePuzzleControlBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>** StaticGet_OGIJMFFHAHE()
		{
			return (::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleControlBoard_TypeDefinitionIndex)->GetStaticField(0x65B90);
		}
		static ::Il2CppArray<::RPG::Client::Prop::RubikCubeGroup>** StaticGet_ONHNMJCNHDA()
		{
			return (::Il2CppArray<::RPG::Client::Prop::RubikCubeGroup>**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleControlBoard_TypeDefinitionIndex)->GetStaticField(0x65B98);
		}
		static ::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>** StaticGet_MNDILHOLOFK()
		{
			return (::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleControlBoard_TypeDefinitionIndex)->GetStaticField(0x65BA0);
		}
		static ::System::Int32* StaticGet_DJHPDIHFMJC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleControlBoard_TypeDefinitionIndex)->GetStaticField(0x14F70);
		}
		static ::System::Single* StaticGet_JDLGIGLBDOB()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleControlBoard_TypeDefinitionIndex)->GetStaticField(0x14F74);
		}
		::System::Boolean MFKLNBPPNPN; // 0x18
		::UnityEngine::GameObject* CubeObject; // 0x20
		::RPG::GameCore::OptionTriggerInfo* RotateOption; // 0x28
		::UnityEngine::Vector2 CameraOffsetXY; // 0x30
		::System::Single CameraFOV; // 0x38
		::System::Single BrickWidth; // 0x3C
		::System::Single UIExtraOffset; // 0x40
		::System::Single UIExtraOffsetY; // 0x44
		::UnityEngine::AnimationCurve* RotateCurve; // 0x48
		::UnityEngine::AnimationCurve* CameraRotateCurve; // 0x50
		::System::Single RotateUpperLimit; // 0x58
		::RPG::Client::Prop::RubikCubePuzzleControlModeType ModeType; // 0x5C
		::RPG::Client::Prop::RubikCubePuzzleCameraController* LCGPKNKDMHJ; // 0x60
		::System::Boolean IDBEBIDMHME; // 0x68
		::UnityEngine::Transform* IAPKDGODOOO; // 0x70
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x78
		::RPG::Client::Prop::RubikCubePuzzleBoard* HPDLAPJCNOO; // 0x80
		::RPG::Client::Prop::RubikCubePuzzleCube* AMNCFPIKELK; // 0x88
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x90
		::System::Int32 OEIAODPCGMM; // 0x98
		::System::Int32 AOLOFLPADDH; // 0x9C
		::System::Int32 DPEKNFFPPAM; // 0xA0
		::Il2CppArray<::Struct_2_9B91F9179F6DB20D>* DPMBLNFHLHE; // 0xA8
		::Il2CppArray<::Struct_2_9B91F9179F6DB20D>* KPMLAHLEAAL; // 0xB0
		::Il2CppArray<::Struct_2_9B91F9179F6DB20D>* NFGEPGMJDEL; // 0xB8
		::System::Boolean CCIFMCDALII; // 0xC0
		::System::Int32 LCEGGBOGCGC; // 0xC4
		::RPG::Client::Prop::RubikCubePuzzleAxis HIFGLEIMPOP; // 0xC8
		::System::Boolean OBMMBGAOFHM; // 0xCC
		::UnityEngine::Transform* ILPDLGIJMNN; // 0xD0
		::RPG::GameCore::PropComponent* FEOOACOCPCN; // 0xD8
		::System::Boolean DILDIDIGEBM; // 0xE0
		::System::Single HJNEIOPIJHM; // 0xE4
		::System::Single PECIJKPECBF; // 0xE8
		::System::Single KJFFAPOIHKE; // 0xEC
		::System::Single LKKHFFMIECG; // 0xF0
		::System::Single BCGHNNBGMCM; // 0xF4
		::System::Boolean HPCKMKBNHAE; // 0xF8
		::System::Boolean FJCOIDADPKI; // 0xF9
		::RPG::Client::Prop::RubikCubePuzzleDragModeState OBBODDBKMCE; // 0xFC
		::UnityEngine::Vector3 KAHEDCBGMKN; // 0x100
		::UnityEngine::Vector3 NHDDELMNNFC; // 0x10C
		::UnityEngine::Transform* LHIAFECCAIB; // 0x118
		::System::Single JJKPFPOFNKL; // 0x120
		::UnityEngine::Transform* BFPPKFKAHAB; // 0x128
		::System::Boolean KJNCEIMINHD; // 0x130
		::System::Boolean JEEAPEKNGFL; // 0x131
		::RPG::GameCore::GameEntity* JPCMHJPCJLP; // 0x138
		::System::Boolean CKBHACPEKHD; // 0x140
		::System::Boolean MHBAFHLGLFN; // 0x141
		::UnityEngine::Vector3 ONCMHMMEDKK; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitBoard(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_OFFSET))(this, a1, a2);
		}

		::System::Void InitBoard_1(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LightRubikCubePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LightRubikCubePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_1_OFFSET))(this, a1, a2);
		}

		::System::Void InitBoard_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_2_OFFSET))(this, a1);
		}

		::System::Void DestroyBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_DESTROYBOARD_OFFSET))(this);
		}

		::System::Void OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void OnStartControl(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTCONTROL_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetControlBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_RESETCONTROLBOARD_OFFSET))(this);
		}

		::System::Void InitDummyBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITDUMMYBLOCK_OFFSET))(this);
		}

		::System::Void InitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITCAMERA_OFFSET))(this);
		}

		::System::Void BindDummyToUI(::Struct_2_9B91F9179F6DB20D a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9B91F9179F6DB20D))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_BINDDUMMYTOUI_OFFSET))(this, a1);
		}

		::System::Void UnbindDummyFromUI(::Struct_2_9B91F9179F6DB20D a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9B91F9179F6DB20D))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UNBINDDUMMYFROMUI_OFFSET))(this, a1);
		}

		::System::Void RefreshDummyBlockAttach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHDUMMYBLOCKATTACH_OFFSET))(this);
		}

		::System::Void RefreshAttachDummyBlockRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHATTACHDUMMYBLOCKROTATION_OFFSET))(this);
		}

		::System::Void CalcBillboardScreenRotate(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CALCBILLBOARDSCREENROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshYDummyBlockAttach(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHYDUMMYBLOCKATTACH_OFFSET))(this, a1);
		}

		::System::Void RefreshXZDummyBlockAttach(::System::Boolean a1, ::Il2CppArray<::Struct_2_9B91F9179F6DB20D>* a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::Struct_2_9B91F9179F6DB20D>*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHXZDUMMYBLOCKATTACH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStartRotate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTROTATE_OFFSET))(this, a1);
		}

		::System::Void OnReload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONRELOAD_OFFSET))(this, a1);
		}

		::System::Void OnSelectOrder(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSELECTORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::RubikCubeGroup GetGroup()
		{
			return ((::RPG::Client::Prop::RubikCubeGroup(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_GETGROUP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void StartControlMode(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_STARTCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void OnPuzzleFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONPUZZLEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnClickAction0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION0_OFFSET))(this, a1);
		}

		::System::Void OnClickAction1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION1_OFFSET))(this, a1);
		}

		::System::Void EndControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ENDCONTROLMODE_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_7E2B87FDCB5FCF51(::System::Boolean a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_7E2B87FDCB5FCF51_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_1B4BF40856AAD721(::RPG::Client::Prop::RubikCubePuzzleAxis a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_1B4BF40856AAD721_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::RubikCubePuzzleAxis Method_5_13275269230D5342(::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>* a1, ::System::Int32 a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::RPG::Client::Prop::RubikCubePuzzleAxis(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>*, ::System::Int32, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_13275269230D5342_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_0D372435D9CAE4BC_OFFSET))(this);
		}

		::RPG::Client::MonoTriggerRegion* Method_5_7AAD06186762BE3C(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_7AAD06186762BE3C_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_5_BCFFE6CBFC0AF90C(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_BCFFE6CBFC0AF90C_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_A0D8189C4327374C(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_A0D8189C4327374C_OFFSET))(this, a1);
		}

		::System::Void Method_5_AAD21DE195D05736()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_AAD21DE195D05736_OFFSET))(this);
		}

		::System::Void Method_5_AAD21DE195D05736_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_AAD21DE195D05736_1_OFFSET))(this);
		}

		::System::Void Method_5_2C5421072C50A323(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_2C5421072C50A323_OFFSET))(this, a1);
		}

		::System::Void Method_5_F11610AE8CED7CFB(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_F11610AE8CED7CFB_OFFSET))(this, a1);
		}

		::System::Void Method_5_5835DC16FC46989B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_5835DC16FC46989B_OFFSET))(this);
		}

		::System::Void Method_5_FB705BB9253CCF6A(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_FB705BB9253CCF6A_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Boolean Method_5_95AA09851A266DE3(::RPG::Client::Prop::RubikCubePuzzleAxis a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_95AA09851A266DE3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_86D9A88811BF5A61(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_86D9A88811BF5A61_OFFSET))(this, a1);
		}

		::System::Void Method_5_4358F70A163BCEAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_METHOD_5_4358F70A163BCEAE_OFFSET))(this);
		}
	};
}
