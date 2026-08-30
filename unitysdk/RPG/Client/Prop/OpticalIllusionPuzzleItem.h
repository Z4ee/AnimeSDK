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

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCC5390)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_METHOD_5_FC9926C19FB6003D_OFFSET UNITYSDK_OFFSET(0xDCC5C20)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDCBAFB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_ONITEMROTATE_OFFSET UNITYSDK_OFFSET(0xDCBE1D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEIN_OFFSET UNITYSDK_OFFSET(0xDCB7B70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTFADEOUT_OFFSET UNITYSDK_OFFSET(0xDCB84B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYITEMSELECTSTART_OFFSET UNITYSDK_OFFSET(0xDCB62B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEIN_OFFSET UNITYSDK_OFFSET(0xDCB7880)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYMIRRORFADEOUT_OFFSET UNITYSDK_OFFSET(0xDCB8370)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYROTATESHAKEANIM_OFFSET UNITYSDK_OFFSET(0xDCBE080)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_PLAYSHAKEANIM_OFFSET UNITYSDK_OFFSET(0xDCBAC50)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RECOVERMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0xDCC5A60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVEMATEFFECT_OFFSET UNITYSDK_OFFSET(0xDCB8AC0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_REMOVESELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xDCB88E0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_RESETITEM_OFFSET UNITYSDK_OFFSET(0xDCB3440)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETBOARD_OFFSET UNITYSDK_OFFSET(0xDCB32C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SETMIRRORBACKMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0xDCC58B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDCC5D70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM_SIMITEMROTATE_OFFSET UNITYSDK_OFFSET(0xDCC5DE0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xDCC5E90)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDCC5E40)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_0_OFFSET UNITYSDK_OFFSET(0xDCC64C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_1_OFFSET UNITYSDK_OFFSET(0xDCC6100)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_2_OFFSET UNITYSDK_OFFSET(0xDCC63B0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEIN_B__7_3_OFFSET UNITYSDK_OFFSET(0xDCC65D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_0_OFFSET UNITYSDK_OFFSET(0xDCC6670)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYITEMSELECTFADEOUT_B__9_1_OFFSET UNITYSDK_OFFSET(0xDCC6740)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEITEM__PLAYMIRRORFADEIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xDCC6060)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleItem_TypeDefinitionIndex = 78247;

	class OpticalIllusionPuzzleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_ANIM_ITEM_SHAKE_TAIL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65360);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65368);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SOUND_ITEM_X_Z_ROTATE()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65370);
		}
		static ::System::String** StaticGet_ANIM_ITEM_FADEIN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65378);
		}
		static ::System::String** StaticGet_ANIM_ITEM_ROTATE_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65380);
		}
		static ::System::String** StaticGet_SOUND_ITEM_MOVE_PARAM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65388);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SOUND_Y_ROTATE()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65390);
		}
		static ::System::String** StaticGet_ANIM_ITEM_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x65398);
		}
		static ::System::String** StaticGet_ANIM_ITEM_HOLD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x653A0);
		}
		static ::System::String** StaticGet_ANIM_ITEM_FADEOUT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x653A8);
		}
		static ::System::String** StaticGet_ANIM_MIRROR_SHAKE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x653B0);
		}
		static ::System::String** StaticGet_ANIM_ITEM_START()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x653B8);
		}
		static ::System::Single* StaticGet_FloatEpsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x14D30);
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
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* MIPPNCGOJNM; // 0xA8
		::System::Boolean FHACNGIOIOA; // 0xB0
		::System::Int32 JJIEKEKGNGF; // 0xB4
		::System::Int32 HEAOODEBHME; // 0xB8
		::System::Int32 GKHBKCONDHL; // 0xBC
		::System::Int32 HNCDBCCPBGO; // 0xC0
		::System::Int32 CJJIFIGMHHB; // 0xC4
		::System::Int32 EKBNENIIBAO; // 0xC8
		::System::Int32 FJNDFMHHGML; // 0xCC
		::RPG::Client::MonoEffect* PLEJLCBFGPK; // 0xD0
		::RPG::Client::MonoEffect* ONOPBKJPPMA; // 0xD8
		::UnityEngine::Coroutine* FAFJLFIDFEF; // 0xE0
		::UnityEngine::Coroutine* OCNKDFLIBJA; // 0xE8
		::System::Int32 JPKEIFONDCP; // 0xF0
		::System::Boolean EOPPNDMPNEH; // 0xF4
		::System::Single INIKDDNICAD; // 0xF8

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
