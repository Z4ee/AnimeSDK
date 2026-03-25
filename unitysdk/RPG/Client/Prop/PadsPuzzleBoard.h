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

#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xA1060D0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA107500)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_GET_PADSCAMERASTATUS_OFFSET UNITYSDK_OFFSET(0xA10A310)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA105690)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA1074B0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA1064D0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_0C5A56C5ABCA1C03_OFFSET UNITYSDK_OFFSET(0xA108AC0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xA105F70)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0xA1096F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3059B53ABB8F8B7E_OFFSET UNITYSDK_OFFSET(0xA106EC0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_3EA9C072A7A8B70A_OFFSET UNITYSDK_OFFSET(0xA109840)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xA109010)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0xA109EA0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xA1061F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xA108340)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_9325E8B082CC0AD8_OFFSET UNITYSDK_OFFSET(0xA109250)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xA108C90)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xA1063F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BC8C675A256260AC_OFFSET UNITYSDK_OFFSET(0xA1069A0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0xA106600)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_DD8D3FEE4AB0EA3E_OFFSET UNITYSDK_OFFSET(0xA1094E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_E33B6EEF5594ED25_OFFSET UNITYSDK_OFFSET(0xA108720)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0xA10A0F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0xA109AB0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPOUTCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0xA109CF0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA106E20)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORT_OFFSET UNITYSDK_OFFSET(0xA106D60)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORTINSTANT_OFFSET UNITYSDK_OFFSET(0xA106B70)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORT_OFFSET UNITYSDK_OFFSET(0xA106870)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xA106780)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESETTLE_OFFSET UNITYSDK_OFFSET(0xA106110)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xA1066C0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_REGISTERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA106CA0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_SDKREPORT_OFFSET UNITYSDK_OFFSET(0xA1071F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA105A60)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xA1079C0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA10A4A0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA10A320)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xA10A560)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA10A610)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA10A510)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA10A5A0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA10A520)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleBoard_TypeDefinitionIndex = 64201;

	class PadsPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_25()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x44F0);
		}
		static ::System::Single* StaticGet_Field_6_19()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2600);
		}
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2604);
		}
		static ::System::Single* StaticGet_Field_6_24()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2608);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x260C);
		}
		static ::System::Single* StaticGet_Field_6_22()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2610);
		}
		static ::System::Single* StaticGet_Field_6_23()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PadsPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2614);
		}
		::UnityEngine::Transform* FailAnchor; // 0x48
		::UnityEngine::Transform* StartPad; // 0x50
		::RPG::Client::Prop::PadsStatus status; // 0x58
		::Il2CppArray<::RPG::Client::Prop::PadsPuzzlePadBase*>* Field_6_3; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* Field_6_4; // 0x68
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::Client::Prop::PadsPuzzleTriggerPad*>* Field_6_5; // 0x70
		::Cinemachine::CinemachineVirtualCamera* Field_6_6; // 0x78
		::Cinemachine::CinemachineFreeLook* Field_6_7; // 0x80
		::Cinemachine::CinemachineBrain* Field_6_8; // 0x88
		::RPG::Client::PipelineCameraEngine* Field_6_9; // 0x90
		::RPG::Client::AdventurePhase* Field_6_10; // 0x98
		::RPG::Client::Prop::PadsPuzzleTransportPad* Field_6_11; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* Field_6_12; // 0xA8
		::RPG::Client::Prop::PadsCameraStatus Field_6_13; // 0xB0
		::System::Int32 Field_6_14; // 0xB4
		::System::Single Field_6_15; // 0xB8
		::System::Boolean Field_6_16; // 0xBC
		::System::Boolean Field_6_17; // 0xBD
		::System::Int32 Field_6_18; // 0xC0

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

		::System::Void Method_6_9DE87B16AD0A605E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_9DE87B16AD0A605E_OFFSET))(this);
		}

		::System::Void Method_6_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_5A124CAF1E48B74F_OFFSET))(this);
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

		::RPG::Client::Prop::PadsPuzzleSettleType Method_6_E33B6EEF5594ED25()
		{
			return ((::RPG::Client::Prop::PadsPuzzleSettleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_E33B6EEF5594ED25_OFFSET))(this);
		}

		::System::UInt32 Method_6_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET))(this);
		}

		::System::Void Method_6_913947B6596EB50A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_913947B6596EB50A_OFFSET))(this);
		}

		::System::Void Method_6_8336E89DF737C001()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_8336E89DF737C001_OFFSET))(this);
		}

		::System::Void Method_6_FE268EA0D7E91617()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_FE268EA0D7E91617_OFFSET))(this);
		}

		::System::Void Method_6_89EF21CA0414B145()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_89EF21CA0414B145_OFFSET))(this);
		}

		::System::Void Method_6_BBA49FAB086F388D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_BBA49FAB086F388D_OFFSET))(this);
		}

		::System::Void Method_6_D70C8B847AF08ADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET))(this);
		}

		::System::Void Method_6_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_METHOD_6_092CD57850778EFC_OFFSET))(this);
		}

		::RPG::Client::Prop::PadsCameraStatus get_PadsCameraStatus()
		{
			return ((::RPG::Client::Prop::PadsCameraStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_GET_PADSCAMERASTATUS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
