#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionAxis.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionDire.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionOp.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleCube; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1486FB20)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_METHOD_5_FC9926C19FB6003D_OFFSET UNITYSDK_OFFSET(0x148703B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0x14865730)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMROTATE_OFFSET UNITYSDK_OFFSET(0x14868950)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEIN_OFFSET UNITYSDK_OFFSET(0x148623C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEOUT_OFFSET UNITYSDK_OFFSET(0x14862CA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTSTART_OFFSET UNITYSDK_OFFSET(0x14860B30)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEIN_OFFSET UNITYSDK_OFFSET(0x148620D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEOUT_OFFSET UNITYSDK_OFFSET(0x14862B60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYROTATESHAKEANIM_OFFSET UNITYSDK_OFFSET(0x14868800)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYSHAKEANIM_OFFSET UNITYSDK_OFFSET(0x148653D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RECOVERMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x148701F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVEMATEFFECT_OFFSET UNITYSDK_OFFSET(0x14863240)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVESELECTEFFECT_OFFSET UNITYSDK_OFFSET(0x14863090)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RESETITEM_OFFSET UNITYSDK_OFFSET(0x1485DCA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETBOARD_OFFSET UNITYSDK_OFFSET(0x1485DB20)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETMIRRORBACKMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x14870040)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMMOVE_OFFSET UNITYSDK_OFFSET(0x14870500)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMROTATE_OFFSET UNITYSDK_OFFSET(0x14870570)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14870620)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x148705D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_0_OFFSET UNITYSDK_OFFSET(0x14870C50)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_1_OFFSET UNITYSDK_OFFSET(0x14870890)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_2_OFFSET UNITYSDK_OFFSET(0x14870B40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_3_OFFSET UNITYSDK_OFFSET(0x14870D60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_0_OFFSET UNITYSDK_OFFSET(0x14870E00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_1_OFFSET UNITYSDK_OFFSET(0x14870ED0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYMIRRORFADEIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x148707F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleItem_TypeDefinitionIndex = 74761;

	class OpticalIllusionPuzzleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_ANIM_ITEM_FADEOUT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x8780);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x8788);
		}
		static ::System::String** StaticGet_ANIM_ITEM_FADEIN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x8790);
		}
		static ::System::String** StaticGet_ANIM_ITEM_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x8798);
		}
		static ::System::String** StaticGet_ANIM_ITEM_START()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87A0);
		}
		static ::System::String** StaticGet_ANIM_ITEM_ROTATE_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SOUND_ITEM_X_Z_ROTATE()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SOUND_Y_ROTATE()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87B8);
		}
		static ::System::String** StaticGet_ANIM_ITEM_HOLD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87C0);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE_PARAM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87C8);
		}
		static ::System::String** StaticGet_ANIM_ITEM_SHAKE_TAIL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87D0);
		}
		static ::System::String** StaticGet_ANIM_MIRROR_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x87D8);
		}
		static ::System::Single* StaticGet_FloatEpsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x3610);
		}
		::System::Boolean IsMirror; // 0x18
		::UnityEngine::GameObject* MirrorObject; // 0x20
		::RPG::Client::Prop::OpticalIllusionOp Operation; // 0x28
		::RPG::Client::Prop::OpticalIllusionAxis Axis; // 0x2C
		::System::Single PositiveMaxMoveDist; // 0x30
		::System::Single NegativeMaxMoveDist; // 0x34
		::RPG::Client::Prop::OpticalIllusionDire RotateDire; // 0x38
		::UnityEngine::Vector3 InitPosition; // 0x3C
		::UnityEngine::Quaternion InitRotation; // 0x48
		::UnityEngine::Vector3 MirrorInitPosition; // 0x58
		::UnityEngine::Quaternion MirrorInitRotation; // 0x64
		::RPG::Client::Prop::OpticalIllusionDire CurrentRotateDire; // 0x74
		::Il2CppArray<::UnityEngine::Collider*>* Colliders; // 0x78
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>* Cubes; // 0x80
		::Il2CppArray<::RPG::Client::Prop::OpticalIllusionPuzzleCube*>* MirrorObjectCubes; // 0x88
		::System::Collections::Generic::HashSet_1<::System::UInt32>* OccupyCubes; // 0x90
		::UnityEngine::Vector3 ScreenMoveDire; // 0x98
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* Field_5_30; // 0xA8
		::System::Boolean Field_5_31; // 0xB0
		::System::Int32 Field_5_32; // 0xB4
		::System::Int32 Field_5_33; // 0xB8
		::System::Int32 Field_5_34; // 0xBC
		::System::Int32 Field_5_35; // 0xC0
		::System::Int32 Field_5_36; // 0xC4
		::System::Int32 Field_5_37; // 0xC8
		::System::Int32 Field_5_38; // 0xCC
		::RPG::Client::MonoEffect* Field_5_39; // 0xD0
		::RPG::Client::MonoEffect* Field_5_40; // 0xD8
		::UnityEngine::Coroutine* Field_5_41; // 0xE0
		::UnityEngine::Coroutine* Field_5_42; // 0xE8
		::System::Int32 Field_5_43; // 0xF0
		::System::Boolean Field_5_44; // 0xF4
		::System::Single Field_5_45; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_AWAKE_OFFSET))(this);
		}

		::System::Void ResetItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RESETITEM_OFFSET))(this);
		}

		::System::Void SetBoard(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETBOARD_OFFSET))(this, a1);
		}

		::System::Void PlayMirrorFadeIn(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEIN_OFFSET))(this, a1);
		}

		::System::Void PlayMirrorFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEOUT_OFFSET))(this);
		}

		::System::Void SetMirrorBackMaterialParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETMIRRORBACKMATERIALPARAMS_OFFSET))(this);
		}

		::System::Void RecoverMaterialParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RECOVERMATERIALPARAMS_OFFSET))(this);
		}

		::System::Void PlayItemSelectFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEIN_OFFSET))(this);
		}

		::System::Void PlayItemSelectStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTSTART_OFFSET))(this);
		}

		::System::Void PlayItemSelectFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEOUT_OFFSET))(this);
		}

		::System::Void RemoveSelectEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVESELECTEFFECT_OFFSET))(this);
		}

		::System::Void RemoveMatEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVEMATEFFECT_OFFSET))(this);
		}

		::System::Void OnItemMove(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_FC9926C19FB6003D(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_METHOD_5_FC9926C19FB6003D_OFFSET))(this, a1);
		}

		::System::Void OnItemRotate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMROTATE_OFFSET))(this);
		}

		::System::Void PlayShakeAnim(::RPG::Client::Prop::OpticalIllusionDire a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionDire))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYSHAKEANIM_OFFSET))(this, a1);
		}

		::System::Void PlayRotateShakeAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYROTATESHAKEANIM_OFFSET))(this);
		}

		::System::Void SimItemMove(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMMOVE_OFFSET))(this, a1);
		}

		::System::Void SimItemRotate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMROTATE_OFFSET))(this);
		}

		::System::Void _PlayMirrorFadeIn_b__3_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYMIRRORFADEIN_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_1(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_1_OFFSET))(this, a1, a2);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_2_OFFSET))(this);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_0_OFFSET))(this);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_3(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_3_OFFSET))(this, a1, a2);
		}

		::System::Void _PlayItemSelectFadeOut_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_0_OFFSET))(this);
		}

		::System::Void _PlayItemSelectFadeOut_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_1_OFFSET))(this);
		}
	};
}
