#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadType.h"
#include "unitysdk/RPG/Client/Prop/PadsCameraStatus.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleSettleType.h"
#include "unitysdk/RPG/Client/Prop/PadsStatus.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client::Prop { class PadsPuzzlePadBase; }
namespace RPG::Client::Prop { class PadsPuzzleTransportPad; }
namespace RPG::Client::Prop { class PadsPuzzleTriggerPad; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xDCD4750)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD5C80)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_GET_PADSCAMERASTATUS_OFFSET UNITYSDK_OFFSET(0xDCD8F40)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCD39C0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDCD5C30)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xDCD4B50)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_0C5A56C5ABCA1C03_OFFSET UNITYSDK_OFFSET(0xDCD7530)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xDCD4590)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0xDCD8220)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3059B53ABB8F8B7E_OFFSET UNITYSDK_OFFSET(0xDCD5640)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xDCD4C80)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3EA9C072A7A8B70A_OFFSET UNITYSDK_OFFSET(0xDCD8380)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xDCD7700)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0xDCD8AA0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_83869A492D1DD90A_OFFSET UNITYSDK_OFFSET(0xDCD7180)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_9325E8B082CC0AD8_OFFSET UNITYSDK_OFFSET(0xDCD7D90)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0xDCD6D50)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xDCD4A70)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BC8C675A256260AC_OFFSET UNITYSDK_OFFSET(0xDCD5120)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0xDCD7BA0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xDCD4870)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_DD8D3FEE4AB0EA3E_OFFSET UNITYSDK_OFFSET(0xDCD8020)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0xDCD8D00)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0xDCD85E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPOUTCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0xDCD88E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCD55A0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORT_OFFSET UNITYSDK_OFFSET(0xDCD54E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORTINSTANT_OFFSET UNITYSDK_OFFSET(0xDCD52F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORT_OFFSET UNITYSDK_OFFSET(0xDCD4FF0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDCD4E80)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESETTLE_OFFSET UNITYSDK_OFFSET(0xDCD4790)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xDCD4D40)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_REGISTERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xDCD5420)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_SDKREPORT_OFFSET UNITYSDK_OFFSET(0xDCD5970)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCD3F50)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCD6370)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDCD90D0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDCD8F50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleBoard_TypeDefinitionIndex = 78281;

	class PadsPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_CJDIFCBFIAB()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x65530);
		}
		static ::System::Single* StaticGet_PCBDDHALGNA()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14D80);
		}
		static ::System::Single* StaticGet_OKPEGNGLACH()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14D84);
		}
		static ::System::Int32* StaticGet_IIIHFJFMPIH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14D88);
		}
		static ::System::Single* StaticGet_HDCAOKHGOMC()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14D8C);
		}
		static ::System::Single* StaticGet_PLPLDKPNNBP()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14D90);
		}
		static ::System::Int32* StaticGet_ADADCANABMK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14D94);
		}
		::UnityEngine::Transform* FailAnchor; // 0x48
		::UnityEngine::Transform* StartPad; // 0x50
		::RPG::Client::Prop::PadsStatus status; // 0x58
		::Il2CppArray<::RPG::Client::Prop::PadsPuzzlePadBase*>* OBJGBJBNDNG; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* LNONPPFBGMB; // 0x68
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::Client::Prop::PadsPuzzleTriggerPad*>* PCLEJIICLBH; // 0x70
		::Cinemachine::CinemachineVirtualCamera* CAOIHMBPCHA; // 0x78
		::Cinemachine::CinemachineFreeLook* JJHLJEAKHJL; // 0x80
		::Cinemachine::CinemachineBrain* HLBHLCLAKLB; // 0x88
		::RPG::Client::PipelineCameraEngine* NLNILKDMABL; // 0x90
		::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x98
		::RPG::Client::Prop::PadsPuzzleTransportPad* GIJLPKMOAGJ; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* ANKMPFKEDIJ; // 0xA8
		::RPG::Client::Prop::PadsCameraStatus IDFDIEPFHML; // 0xB0
		::System::Int32 HDLANOKEMBL; // 0xB4
		::System::Single KNDKNLLAJLB; // 0xB8
		::System::Boolean GFEECMGFNLB; // 0xBC
		::System::Boolean FJLHEAHNKMO; // 0xBD
		::System::Int32 HGAHFGMDDKC; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void PuzzleSettle(::RPG::Client::Prop::PadsPuzzleSettleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleSettleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESETTLE_OFFSET))(this, a1);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void PuzzleResetTeleport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORT_OFFSET))(this);
		}

		::System::Void PuzzleResetTeleportInstant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORTINSTANT_OFFSET))(this);
		}

		::System::Void RegisterCollider(::UnityEngine::Collider* a1, ::RPG::Client::Prop::PadsPuzzleTriggerPad* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::RPG::Client::Prop::PadsPuzzleTriggerPad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_REGISTERCOLLIDER_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransport(::RPG::Client::Prop::PadsPuzzleTransportPad* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleTransportPad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORT_OFFSET))(this, a1);
		}

		::System::Void OnTransportCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORTCALLBACK_OFFSET))(this);
		}

		::System::Void SDKReport(::System::Int32 a1, ::RPG::Client::Prop::PadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::PadType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_SDKREPORT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_3059B53ABB8F8B7E(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3059B53ABB8F8B7E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_9325E8B082CC0AD8(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_9325E8B082CC0AD8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_DD8D3FEE4AB0EA3E(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_DD8D3FEE4AB0EA3E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_BC8C675A256260AC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BC8C675A256260AC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_737220D2233A9067()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_737220D2233A9067_OFFSET))(this);
		}

		::System::Void Method_6_BD3078E21D74E44F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BD3078E21D74E44F_OFFSET))(this);
		}

		::System::Void Method_6_2DE13BE11F24F545(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2DE13BE11F24F545_OFFSET))(this, a1);
		}

		::System::Void Method_6_3EA9C072A7A8B70A(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3EA9C072A7A8B70A_OFFSET))(this, a1);
		}

		::System::Void OnCharacterStepOnColliderChange(::RPG::Client::Prop::PadsPuzzleTriggerPad* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleTriggerPad*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCharacterStepOutColliderChange(::RPG::Client::Prop::PadsPuzzleTriggerPad* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleTriggerPad*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPOUTCOLLIDERCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_0C5A56C5ABCA1C03(::RPG::Client::Prop::PadsCameraStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsCameraStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_0C5A56C5ABCA1C03_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PadsPuzzleSettleType Method_6_83869A492D1DD90A()
		{
			return ((::RPG::Client::Prop::PadsPuzzleSettleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_83869A492D1DD90A_OFFSET))(this);
		}

		::System::UInt32 Method_6_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET))(this);
		}

		::System::Void Method_6_B6BB704B01BCC35B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_B6BB704B01BCC35B_OFFSET))(this);
		}

		::System::Void Method_6_8336E89DF737C001()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_8336E89DF737C001_OFFSET))(this);
		}

		::System::Void Method_6_FE268EA0D7E91617()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_FE268EA0D7E91617_OFFSET))(this);
		}

		::System::Void Method_6_DC715239B8B98D9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_DC715239B8B98D9C_OFFSET))(this);
		}

		::System::Void Method_6_BB881F05E41D3A04()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BB881F05E41D3A04_OFFSET))(this);
		}

		::System::Void Method_6_3BC8B8F2BB08C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3BC8B8F2BB08C1C2_OFFSET))(this);
		}

		::System::Void Method_6_07E567B3C6C3D7D7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_07E567B3C6C3D7D7_OFFSET))(this);
		}

		::RPG::Client::Prop::PadsCameraStatus get_PadsCameraStatus()
		{
			return ((::RPG::Client::Prop::PadsCameraStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_GET_PADSCAMERASTATUS_OFFSET))(this);
		}
	};
}
