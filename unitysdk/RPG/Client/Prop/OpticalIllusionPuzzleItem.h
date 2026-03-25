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

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA0F4440)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_METHOD_5_FC9926C19FB6003D_OFFSET UNITYSDK_OFFSET(0xA0F6610)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0xA0F3A60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMROTATE_OFFSET UNITYSDK_OFFSET(0xA0F6760)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEIN_OFFSET UNITYSDK_OFFSET(0xA0F5720)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEOUT_OFFSET UNITYSDK_OFFSET(0xA0F6080)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTSTART_OFFSET UNITYSDK_OFFSET(0xA0F5E90)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEIN_OFFSET UNITYSDK_OFFSET(0xA0F4D70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEOUT_OFFSET UNITYSDK_OFFSET(0xA0F5200)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYROTATESHAKEANIM_OFFSET UNITYSDK_OFFSET(0xA0F6CF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYSHAKEANIM_OFFSET UNITYSDK_OFFSET(0xA0F6990)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RECOVERMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0xA0F5530)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVEMATEFFECT_OFFSET UNITYSDK_OFFSET(0xA0F6460)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVESELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xA0F5050)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RESETITEM_OFFSET UNITYSDK_OFFSET(0xA0F4970)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETBOARD_OFFSET UNITYSDK_OFFSET(0xA0F4BF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETMIRRORBACKMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0xA0F5340)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMMOVE_OFFSET UNITYSDK_OFFSET(0xA0F6E40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMROTATE_OFFSET UNITYSDK_OFFSET(0xA0F6EB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0F6F60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F6F10)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_0_OFFSET UNITYSDK_OFFSET(0xA0F75F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_1_OFFSET UNITYSDK_OFFSET(0xA0F7240)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_2_OFFSET UNITYSDK_OFFSET(0xA0F74E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_3_OFFSET UNITYSDK_OFFSET(0xA0F7700)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_0_OFFSET UNITYSDK_OFFSET(0xA0F77A0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_1_OFFSET UNITYSDK_OFFSET(0xA0F7870)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYMIRRORFADEIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xA0F71A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleItem_TypeDefinitionIndex = 64167;

	class OpticalIllusionPuzzleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_ANIM_ITEM_START()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x1890);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SOUND_ITEM_X_Z_ROTATE()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x1898);
		}
		static ::System::String** StaticGet_ANIM_MIRROR_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18A0);
		}
		static ::System::String** StaticGet_ANIM_ITEM_SHAKE_TAIL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18A8);
		}
		static ::System::String** StaticGet_ANIM_ITEM_FADEIN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SOUND_Y_ROTATE()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18B8);
		}
		static ::System::String** StaticGet_ANIM_ITEM_HOLD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18C0);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE_PARAM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18C8);
		}
		static ::System::String** StaticGet_ANIM_ITEM_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18D0);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18D8);
		}
		static ::System::String** StaticGet_ANIM_ITEM_FADEOUT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18E0);
		}
		static ::System::String** StaticGet_ANIM_ITEM_ROTATE_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x18E8);
		}
		static ::System::Single* StaticGet_FloatEpsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x20B0);
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
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* Field_5_17; // 0xA8
		::System::Boolean Field_5_18; // 0xB0
		::System::Int32 Field_5_19; // 0xB4
		::System::Int32 Field_5_20; // 0xB8
		::System::Int32 Field_5_21; // 0xBC
		::System::Int32 Field_5_22; // 0xC0
		::System::Int32 Field_5_23; // 0xC4
		::System::Int32 Field_5_24; // 0xC8
		::System::Int32 Field_5_25; // 0xCC
		::RPG::Client::MonoEffect* Field_5_26; // 0xD0
		::RPG::Client::MonoEffect* Field_5_27; // 0xD8
		::UnityEngine::Coroutine* Field_5_28; // 0xE0
		::UnityEngine::Coroutine* Field_5_29; // 0xE8
		::System::Int32 Field_5_30; // 0xF0
		::System::Boolean Field_5_31; // 0xF4
		::System::Single Field_5_32; // 0xF8

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

		::System::Void _PlayMirrorFadeIn_b__3_0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYMIRRORFADEIN_B__3_0_OFFSET))(this, eff, extraParams);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_1(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_1_OFFSET))(this, eff, extraParams);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_2_OFFSET))(this);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_0_OFFSET))(this);
		}

		::System::Void _PlayItemSelectFadeIn_b__7_3(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_3_OFFSET))(this, eff, extraParams);
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
