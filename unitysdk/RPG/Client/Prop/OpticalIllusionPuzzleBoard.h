#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionDire.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPuzzleBoard_PuzzlePhase.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_29CB0845A0882CB9;
class Class_1_7C47734FE9B6C258;
class Class_1_DA16F6EFFF969A86;
class Class_1_F574BDCB88571F05;
namespace RPG::Client { class MirrormentValleyConfig; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::Client::Prop { class OpticalIllusionCamera; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleCube; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CHECKPOINTSOVERLAYONSCREEN_OFFSET UNITYSDK_OFFSET(0xDCB5B60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTBOARDTOWORLDPOS_OFFSET UNITYSDK_OFFSET(0xDCBB7F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTWORLDTOBOARDPOS_OFFSET UNITYSDK_OFFSET(0xDCB22D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCAD7D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ENTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDCB1E40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EXITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDCB1E90)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FINDPATH_OFFSET UNITYSDK_OFFSET(0xDCBF220)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETENTITY_OFFSET UNITYSDK_OFFSET(0xDCB0670)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETIGNORECOVERPOS_OFFSET UNITYSDK_OFFSET(0xDCBEB40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0xDCB20A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_GOLDGEARASSET_OFFSET UNITYSDK_OFFSET(0xDCC4190)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_HOVERITEM_OFFSET UNITYSDK_OFFSET(0xDCC4150)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_OPCOUNT_OFFSET UNITYSDK_OFFSET(0xDCC41D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xDCC4130)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0xDCC41F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xDCC4170)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SILVERGEARASSET_OFFSET UNITYSDK_OFFSET(0xDCC41B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HASIGNORECOVERCUBES_OFFSET UNITYSDK_OFFSET(0xDCBEAE0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCAAF80)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDCB06C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xDCB0710)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0457507DF38D8288_OFFSET UNITYSDK_OFFSET(0xDCB5310)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0865E94460F11643_1_OFFSET UNITYSDK_OFFSET(0xDCBA110)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xDCB9FA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_094B0097F108028C_OFFSET UNITYSDK_OFFSET(0xDCBB710)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0D97457E251B0734_OFFSET UNITYSDK_OFFSET(0xDCB93E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xDCB0550)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_159C9D9875436268_OFFSET UNITYSDK_OFFSET(0xDCBE3E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_1C64B8C0F1A72497_OFFSET UNITYSDK_OFFSET(0xDCBC400)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_1E3DFBB09C3E70E9_OFFSET UNITYSDK_OFFSET(0xDCC2E60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xDCAE5B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xDCABA20)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_2928A55194B8E32E_OFFSET UNITYSDK_OFFSET(0xDCB26C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xDCB52B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xDCAD1B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0xDCAE3D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_3_OFFSET UNITYSDK_OFFSET(0xDCAE460)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_4_OFFSET UNITYSDK_OFFSET(0xDCAB710)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xDCB05E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_3879EA6D7539708A_OFFSET UNITYSDK_OFFSET(0xDCB36D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_38ADAA156D5E6758_OFFSET UNITYSDK_OFFSET(0xDCC2DD0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_3B44871AFE34BC4F_OFFSET UNITYSDK_OFFSET(0xDCB4830)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0xDCB9970)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xDCB90D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_421A462C2ECF66DF_OFFSET UNITYSDK_OFFSET(0xDCB68F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xDCB07A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_431B41F82025C3EE_OFFSET UNITYSDK_OFFSET(0xDCB2170)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_44566536665BE7EB_1_OFFSET UNITYSDK_OFFSET(0xDCBE9E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_44566536665BE7EB_OFFSET UNITYSDK_OFFSET(0xDCBE970)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_446BE43D2AA5DB95_OFFSET UNITYSDK_OFFSET(0xDCAF970)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_4E8A3F7A0113D485_OFFSET UNITYSDK_OFFSET(0xDCB7040)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_4FD6AFA6F158FADD_OFFSET UNITYSDK_OFFSET(0xDCBEA50)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xDCB8E00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xDCBA3B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5213E75FA17D9E65_OFFSET UNITYSDK_OFFSET(0xDCB1490)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_54FF506E09E1174A_OFFSET UNITYSDK_OFFSET(0xDCBBA90)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_56AAF22972BD1A66_OFFSET UNITYSDK_OFFSET(0xDCAC8C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5B56B56BFFE4CC00_OFFSET UNITYSDK_OFFSET(0xDCB21B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5F59867914726945_OFFSET UNITYSDK_OFFSET(0xDCB97E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_65FFC22DF0ABA763_OFFSET UNITYSDK_OFFSET(0xDCB23A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_6719DA68505926D8_OFFSET UNITYSDK_OFFSET(0xDCB61B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_68BD5489BD21F18D_OFFSET UNITYSDK_OFFSET(0xDCBE750)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xDCAB800)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xDCAD2D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0xDCB3BC0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_752BB3BCDA90FF0A_OFFSET UNITYSDK_OFFSET(0xDCAEBD0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xDCAE4E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_7AC55A5C080EF11F_OFFSET UNITYSDK_OFFSET(0xDCB4220)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xDCB09A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xDCB53E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_8D3DBB818193843D_OFFSET UNITYSDK_OFFSET(0xDCB5D60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_916B8A6B72C96F5C_OFFSET UNITYSDK_OFFSET(0xDCB3E00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDCBA310)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xDCB92A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_A149D247F7723D05_OFFSET UNITYSDK_OFFSET(0xDCB4BF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xDCAE6B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xDCAFF40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xDCB02F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_AE86A66C8FD43296_OFFSET UNITYSDK_OFFSET(0xDCBE560)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_B19261A0CF994DEF_OFFSET UNITYSDK_OFFSET(0xDCB6220)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_C178EE53650C1A7A_OFFSET UNITYSDK_OFFSET(0xDCBA4E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xDCB3D00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0xDCAD390)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_D740A9BE179A9A5F_OFFSET UNITYSDK_OFFSET(0xDCBB8C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xDCB8CA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xDCB9330)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xDCAE610)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_E702603535BCED6C_OFFSET UNITYSDK_OFFSET(0xDCB19C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_EB98D3E386F8F884_OFFSET UNITYSDK_OFFSET(0xDCB2790)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_ECF6C62C44B499CA_OFFSET UNITYSDK_OFFSET(0xDCBE6A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xDCB3D80)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_FADBDF6B666E37DE_OFFSET UNITYSDK_OFFSET(0xDCACD40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_FF23CF46ADBA32C4_OFFSET UNITYSDK_OFFSET(0xDCB9B60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_FF2DB8C5D4C76BA8_OFFSET UNITYSDK_OFFSET(0xDCBE480)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MOVEITEMASYNC_OFFSET UNITYSDK_OFFSET(0xDCBB360)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xDCB4780)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETORTHOGRAPHICCAMERA_OFFSET UNITYSDK_OFFSET(0xDCB1F80)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCB0070)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ROTATEITEM_OFFSET UNITYSDK_OFFSET(0xDCB64D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SETNPCBUBBLETALK_OFFSET UNITYSDK_OFFSET(0xDCB3F20)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_GOLDGEARASSET_OFFSET UNITYSDK_OFFSET(0xDCC41A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_HOVERITEM_OFFSET UNITYSDK_OFFSET(0xDCC4160)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_OPCOUNT_OFFSET UNITYSDK_OFFSET(0xDCC41E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xDCC4140)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0xDCC4200)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xDCC4180)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SILVERGEARASSET_OFFSET UNITYSDK_OFFSET(0xDCC41C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCAE770)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SWITCHCAMERAANCHOR_OFFSET UNITYSDK_OFFSET(0xDCB2000)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCB1270)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xDCB44A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCB0750)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDCC45E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDCC4210)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard_TypeDefinitionIndex = 78231;

	class OpticalIllusionPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_SOUND_WAY_PASS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7320);
		}
		static ::RPG::Client::MirrormentValleyConfig** StaticGet_MirrorValleyConfig()
		{
			return (::RPG::Client::MirrormentValleyConfig**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7328);
		}
		static ::System::String** StaticGet_GUIDE_DIALOG_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7330);
		}
		static ::System::String** StaticGet_SOUND_MIRROR_MOVE_START()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7338);
		}
		static ::System::String** StaticGet_CONFIRM_DIALOG_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7340);
		}
		static ::System::String** StaticGet_SOUND_MIRROR_MOVE_END()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7348);
		}
		static ::System::String** StaticGet_END_SOUND()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7350);
		}
		static ::System::String** StaticGet_GAME_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7358);
		}
		static ::System::String** StaticGet_SOUND_MIRROR_MOVE_BLOCK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7360);
		}
		static ::System::String** StaticGet_SOUND_ITEM_SELECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7368);
		}
		static ::System::String** StaticGet_POST_PROCESS_ASSET()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7370);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE_COLLIDE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7378);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE_BLOCK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7380);
		}
		static ::System::String** StaticGet_BUBBLE_UNIQUE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7388);
		}
		static ::System::String** StaticGet_START_SOUND()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7390);
		}
		static ::System::Single* StaticGet_OverlayEpsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x1FC0);
		}
		static ::System::UInt32* StaticGet_CLOCK_BOY_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x1FC4);
		}
		static ::System::Single* StaticGet_FloatEpsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x1FC8);
		}
		static ::System::Single* StaticGet_RotateStep()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x1FCC);
		}
		::UnityEngine::Object* JKODBCHAPIE; // 0x48
		::UnityEngine::GameObject* IFLOMLFLGBG; // 0x50
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase _Phase_k__BackingField; // 0x58
		::System::Boolean GFAMGLFOMGI; // 0x5C
		::System::Boolean KBJACNAMHBA; // 0x5D
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>* CCAPCKJHLOE; // 0x60
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionPuzzleItem*>* GCIKKMGIPIO; // 0x68
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*>* AHDEONMPMHE; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>*>* MDJLDCNGLCC; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>*>* ALFFLMNKFJN; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::OpticalIllusionPuzzleCube*>* IADBNPJFMEG; // 0x88
		::Class_1_7C47734FE9B6C258* CONIDCGICDD; // 0x90
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x98
		::RPG::GameCore::AdventureCharacterController* HFBBBNLCIHN; // 0xA0
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* _HoverItem_k__BackingField; // 0xA8
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* _SelectItem_k__BackingField; // 0xB0
		::RPG::Client::Prop::OpticalIllusionDire FGNJDDKGHIF; // 0xB8
		::UnityEngine::Vector3 NPHFNMFEGMH; // 0xBC
		::System::Boolean LLLFONGLIPE; // 0xC8
		::System::Single IEKJLLHKOFA; // 0xCC
		::System::Single FBONMFPMGME; // 0xD0
		::System::Single OHLCEAMNLDG; // 0xD4
		::UnityEngine::Coroutine* HPMNPIFGHBM; // 0xD8
		::System::Single BAEPHMOKCIA; // 0xE0
		::System::Single GDDJJEPKLEF; // 0xE4
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* MirrorItem; // 0xE8
		::UnityEngine::Vector3 FNBCCKMKAHN; // 0xF0
		::UnityEngine::Vector3 ALKKGENMJMH; // 0xFC
		::UnityEngine::Vector3 HPFNIIIGIDG; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GMHMONEFEKD; // 0x118
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BDCNFLBLEAO; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GBGMBFPFCKO; // 0x128
		::UnityEngine::Vector3 GGHANMBEFML; // 0x130
		::System::Collections::Generic::HashSet_1<::System::UInt32>* MEDOLNCILMF; // 0x140
		::System::Boolean JGJJBDFAFIN; // 0x148
		::RPG::Client::VirtualCursor* GNGEFFIBCMO; // 0x150
		::System::Boolean FDLGENCFKDD; // 0x158
		::System::Int32 JIBJKHCJFBJ; // 0x15C
		::System::Int32 HHJKKIMFJAI; // 0x160
		::System::Int32 HBDPPIJNGOO; // 0x164
		::System::Int32 GJLINPFBDAN; // 0x168
		::System::Boolean HHAODJLIPAE; // 0x16C
		::UnityEngine::GameObject* _GoldGearAsset_k__BackingField; // 0x170
		::UnityEngine::GameObject* _SilverGearAsset_k__BackingField; // 0x178
		::Class_1_F574BDCB88571F05* NOHHGLPGAFK; // 0x180
		::RPG::Client::Billboard::BillboardNotifyParam* BOPNPNJENII; // 0x188
		::RPG::GameCore::PlayNPCBubbleTalk* AKHJFPLFOJB; // 0x190
		::System::Single MOEIIILKPFP; // 0x198
		::System::UInt32 OMBHPKJCIHJ; // 0x19C
		::System::Single BJMGPMDLOPO; // 0x1A0
		::System::Boolean NMKAFOFBAFA; // 0x1A4
		::System::Int32 NDMGHHDMPAN; // 0x1A8
		::System::Single JKMMDKFNOEB; // 0x1AC
		::System::Single LFDPJHAPBED; // 0x1B0
		::System::Single EPNJMCDPJDG; // 0x1B4
		::UnityEngine::Vector3 PFBFFIMPNBL; // 0x1B8
		::Il2CppArray<::UnityEngine::RaycastHit>* LIEMGOHMCCD; // 0x1C8
		::System::Int32 _OpCount_k__BackingField; // 0x1D0
		::System::Int32 _ReachPoint_k__BackingField; // 0x1D4
		::UnityEngine::Vector3 PlayerStartPosition; // 0x1D8
		::UnityEngine::Quaternion PlayerStartRotation; // 0x1E4
		::RPG::GameCore::CharacterMotionFlag PlayerMotion; // 0x1F4
		::System::Single PlayerSpeedRate; // 0x1F8
		::Il2CppArray<::UnityEngine::Vector3>* DesignPaths; // 0x200
		::RPG::Client::Prop::OpticalIllusionPlane MirrorPlane; // 0x208
		::UnityEngine::Vector3 CameraPosition; // 0x20C
		::UnityEngine::Quaternion CameraRotation; // 0x218
		::System::Single OrthographicSize; // 0x228
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionCamera*>* CameraAnchors; // 0x230
		::System::Boolean IsSpecialMode; // 0x238
		::Class_1_29CB0845A0882CB9* BHJDJDPLCLP; // 0x240
		::System::Int32 KBDPMBDJIOF; // 0x248
		::System::UInt32 LCAOJIDMINA; // 0x24C
		::System::Int32 HFOIDBJPGIL; // 0x250
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0x258

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntity(::RPG::GameCore::TargetFetchPuzzleEntityType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetFetchPuzzleEntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETENTITY_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsPuzzleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ISPUZZLESTART_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void EnterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ENTERPERFORMANCE_OFFSET))(this);
		}

		::System::Void ExitPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_EXITPERFORMANCE_OFFSET))(this);
		}

		::System::Void ResetOrthographicCamera(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_RESETORTHOGRAPHICCAMERA_OFFSET))(this, a1);
		}

		::System::Boolean SwitchCameraAnchor(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SWITCHCAMERAANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_5213E75FA17D9E65(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5213E75FA17D9E65_OFFSET))(this, a1);
		}

		::System::Single Method_6_431B41F82025C3EE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_431B41F82025C3EE_OFFSET))(this);
		}

		::System::Void Method_6_E702603535BCED6C(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_E702603535BCED6C_OFFSET))(this, a1);
		}

		::System::Void Method_6_446BE43D2AA5DB95()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_446BE43D2AA5DB95_OFFSET))(this);
		}

		::System::Void Method_6_5B56B56BFFE4CC00(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5B56B56BFFE4CC00_OFFSET))(this, a1);
		}

		::System::Void Method_6_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_6_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_AA169839CB93802A_OFFSET))(this);
		}

		::System::Single GetOrthographicSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETORTHOGRAPHICSIZE_OFFSET))(this);
		}

		::System::Void Method_6_FADBDF6B666E37DE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_FADBDF6B666E37DE_OFFSET))(this, a1);
		}

		::System::Void Method_6_56AAF22972BD1A66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_56AAF22972BD1A66_OFFSET))(this);
		}

		::System::Void Method_6_EB98D3E386F8F884(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_EB98D3E386F8F884_OFFSET))(this, a1);
		}

		::System::Void Method_6_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_6_6A0EBEECA245A27C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_6A0EBEECA245A27C_OFFSET))(this);
		}

		::System::Void Method_6_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_6_3879EA6D7539708A(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_3879EA6D7539708A_OFFSET))(this, a1);
		}

		::System::Void Method_6_73C23613314BF1A1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_73C23613314BF1A1_OFFSET))(this, a1);
		}

		::System::Void Method_6_C450A961450309C9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET))(this, a1);
		}

		::System::Void Method_6_F37CDBD6D46274D2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_F37CDBD6D46274D2_OFFSET))(this, a1);
		}

		::System::Void Method_6_916B8A6B72C96F5C(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_916B8A6B72C96F5C_OFFSET))(this, a1);
		}

		::System::Void Method_6_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_229CEF33F0AF9039_OFFSET))(this);
		}

		::System::Void SetNpcBubbleTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SETNPCBUBBLETALK_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* Method_6_7AC55A5C080EF11F(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_7AC55A5C080EF11F_OFFSET))(this, a1);
		}

		::System::Void Method_6_30D1209326FA87FC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_1_OFFSET))(this);
		}

		::System::Void Method_6_30D1209326FA87FC_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_2_OFFSET))(this);
		}

		::System::Void TriggerEffect(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::String* a5, ::UnityEngine::Transform* a6, ::System::Boolean a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_TRIGGEREFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void RemoveEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_REMOVEEFFECT_OFFSET))(this, a1);
		}

		::System::Void Method_6_3B44871AFE34BC4F(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_3B44871AFE34BC4F_OFFSET))(this, a1);
		}

		::System::Void Method_6_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::Void Method_6_0457507DF38D8288(::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0457507DF38D8288_OFFSET))(this, a1);
		}

		::System::Void Method_6_87318FF00D6BC7EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET))(this);
		}

		::System::Boolean CheckPointsOverlayOnScreen(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CHECKPOINTSOVERLAYONSCREEN_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_6_B19261A0CF994DEF(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_B19261A0CF994DEF_OFFSET))(this, a1);
		}

		::System::Void Method_6_6719DA68505926D8(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_6719DA68505926D8_OFFSET))(this, a1);
		}

		::System::Void Method_6_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Boolean Method_6_DFF98536D8B4074F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_DFF98536D8B4074F_OFFSET))(this);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* Method_6_8D3DBB818193843D()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_8D3DBB818193843D_OFFSET))(this);
		}

		::System::Void Method_6_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Void Method_6_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_6_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5176DC743E478510_OFFSET))(this);
		}

		::System::Void Method_6_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_6_974A70E8019154E7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_974A70E8019154E7_OFFSET))(this, a1);
		}

		::System::Void Method_6_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Void Method_6_CFE6FB160FFF5938()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_CFE6FB160FFF5938_OFFSET))(this);
		}

		::System::Void Method_6_30D1209326FA87FC_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_3_OFFSET))(this);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* Method_6_0D97457E251B0734()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0D97457E251B0734_OFFSET))(this);
		}

		::System::Void Method_6_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_E11AC65AA0DC2249_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_6_5F59867914726945()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_5F59867914726945_OFFSET))(this);
		}

		::System::Void Method_6_41A074549EF25F63_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_41A074549EF25F63_1_OFFSET))(this);
		}

		::System::Void Method_6_FF23CF46ADBA32C4(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_FF23CF46ADBA32C4_OFFSET))(this, a1);
		}

		::System::Void Method_6_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0865E94460F11643_OFFSET))(this);
		}

		::System::Void Method_6_0865E94460F11643_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_0865E94460F11643_1_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_6_421A462C2ECF66DF(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_421A462C2ECF66DF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MoveItemAsync(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_MOVEITEMASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* Method_6_094B0097F108028C(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_094B0097F108028C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_4E8A3F7A0113D485(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_4E8A3F7A0113D485_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_54FF506E09E1174A(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_54FF506E09E1174A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_6_C178EE53650C1A7A(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::RPG::Client::Prop::OpticalIllusionDire a2, ::System::Single a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::RPG::Client::Prop::OpticalIllusionDire, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_C178EE53650C1A7A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RotateItem(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_ROTATEITEM_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_6_159C9D9875436268(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_159C9D9875436268_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_1C64B8C0F1A72497(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_1C64B8C0F1A72497_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_FF2DB8C5D4C76BA8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_FF2DB8C5D4C76BA8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Void Method_6_752BB3BCDA90FF0A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_752BB3BCDA90FF0A_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_A149D247F7723D05(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_A149D247F7723D05_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertWorldToBoardPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTWORLDTOBOARDPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertBoardToWorldPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CONVERTBOARDTOWORLDPOS_OFFSET))(this, a1);
		}

		::System::UInt32 Method_6_AE86A66C8FD43296(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_AE86A66C8FD43296_OFFSET))(this, a1);
		}

		::System::UInt32 Method_6_65FFC22DF0ABA763(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_65FFC22DF0ABA763_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_ECF6C62C44B499CA(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_ECF6C62C44B499CA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_D740A9BE179A9A5F(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_D740A9BE179A9A5F_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_6_68BD5489BD21F18D(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_68BD5489BD21F18D_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Method_6_2928A55194B8E32E(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_2928A55194B8E32E_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Method_6_44566536665BE7EB(::UnityEngine::Vector2 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_44566536665BE7EB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_6_44566536665BE7EB_1(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_44566536665BE7EB_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_4FD6AFA6F158FADD(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_4FD6AFA6F158FADD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HasIgnoreCoverCubes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_HASIGNORECOVERCUBES_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetIgnoreCoverPos(::UnityEngine::Vector3 a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GETIGNORECOVERPOS_OFFSET))(this, a1, a2);
		}

		::System::Boolean FindPath(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_FINDPATH_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::UInt32>* Method_6_1E3DFBB09C3E70E9(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_1E3DFBB09C3E70E9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 Method_6_38ADAA156D5E6758(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_38ADAA156D5E6758_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase get_Phase()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard_PuzzlePhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_PHASE_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* get_HoverItem()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_HOVERITEM_OFFSET))(this);
		}

		::System::Void set_HoverItem(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_HOVERITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleItem* get_SelectItem()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SELECTITEM_OFFSET))(this);
		}

		::System::Void set_SelectItem(::RPG::Client::Prop::OpticalIllusionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SELECTITEM_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_GoldGearAsset()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_GOLDGEARASSET_OFFSET))(this);
		}

		::System::Void set_GoldGearAsset(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_GOLDGEARASSET_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_SilverGearAsset()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_SILVERGEARASSET_OFFSET))(this);
		}

		::System::Void set_SilverGearAsset(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_SILVERGEARASSET_OFFSET))(this, a1);
		}

		::System::Int32 get_OpCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_OPCOUNT_OFFSET))(this);
		}

		::System::Void set_OpCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_OPCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ReachPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_GET_REACHPOINT_OFFSET))(this);
		}

		::System::Void set_ReachPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_SET_REACHPOINT_OFFSET))(this, a1);
		}

		::System::Void Method_6_30D1209326FA87FC_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_METHOD_6_30D1209326FA87FC_4_OFFSET))(this);
		}
	};
}
