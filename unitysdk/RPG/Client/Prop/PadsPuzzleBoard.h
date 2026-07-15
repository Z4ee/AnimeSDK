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

#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x14F0DC40)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14F0F130)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_GET_PADSCAMERASTATUS_OFFSET UNITYSDK_OFFSET(0x14F12400)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x14F0CEB0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x14F0F0E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x14F0E020)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_0C5A56C5ABCA1C03_OFFSET UNITYSDK_OFFSET(0x14F109F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x14F0DA80)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0x14F116E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3059B53ABB8F8B7E_OFFSET UNITYSDK_OFFSET(0x14F0EAF0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x14F0E150)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3EA9C072A7A8B70A_OFFSET UNITYSDK_OFFSET(0x14F11840)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x14F10BC0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0x14F11F60)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_83869A492D1DD90A_OFFSET UNITYSDK_OFFSET(0x14F10630)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_9325E8B082CC0AD8_OFFSET UNITYSDK_OFFSET(0x14F11250)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x14F10200)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x14F0DF50)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BC8C675A256260AC_OFFSET UNITYSDK_OFFSET(0x14F0E5E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x14F11060)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x14F0DD60)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_DD8D3FEE4AB0EA3E_OFFSET UNITYSDK_OFFSET(0x14F114E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x14F121C0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0x14F11AA0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPOUTCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0x14F11DA0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14F0EA50)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORT_OFFSET UNITYSDK_OFFSET(0x14F0E990)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORTINSTANT_OFFSET UNITYSDK_OFFSET(0x14F0E7A0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORT_OFFSET UNITYSDK_OFFSET(0x14F0E4B0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x14F0E340)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESETTLE_OFFSET UNITYSDK_OFFSET(0x14F0DC80)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x14F0E200)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_REGISTERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x14F0E8D0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_SDKREPORT_OFFSET UNITYSDK_OFFSET(0x14F0EE20)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x14F0D440)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x14F0F830)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F12590)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F12410)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleBoard_TypeDefinitionIndex = 74795;

	class PadsPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xA230);
		}
		static ::System::Single* StaticGet_Field_6_1()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x42D0);
		}
		static ::System::Int32* StaticGet_Field_6_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x42D4);
		}
		static ::System::Single* StaticGet_Field_6_3()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x42D8);
		}
		static ::System::Int32* StaticGet_Field_6_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x42DC);
		}
		static ::System::Single* StaticGet_Field_6_5()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x42E0);
		}
		static ::System::Single* StaticGet_Field_6_6()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x42E4);
		}
		::UnityEngine::Transform* FailAnchor; // 0x48
		::UnityEngine::Transform* StartPad; // 0x50
		::RPG::Client::Prop::PadsStatus status; // 0x58
		::Il2CppArray<::RPG::Client::Prop::PadsPuzzlePadBase*>* Field_6_10; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* Field_6_11; // 0x68
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::Client::Prop::PadsPuzzleTriggerPad*>* Field_6_12; // 0x70
		::Cinemachine::CinemachineVirtualCamera* Field_6_13; // 0x78
		::Cinemachine::CinemachineFreeLook* Field_6_14; // 0x80
		::Cinemachine::CinemachineBrain* Field_6_15; // 0x88
		::RPG::Client::PipelineCameraEngine* Field_6_16; // 0x90
		::RPG::Client::AdventurePhase* Field_6_17; // 0x98
		::RPG::Client::Prop::PadsPuzzleTransportPad* Field_6_18; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* Field_6_19; // 0xA8
		::RPG::Client::Prop::PadsCameraStatus Field_6_20; // 0xB0
		::System::Int32 Field_6_21; // 0xB4
		::System::Single Field_6_22; // 0xB8
		::System::Boolean Field_6_23; // 0xBC
		::System::Boolean Field_6_24; // 0xBD
		::System::Int32 Field_6_25; // 0xC0

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
