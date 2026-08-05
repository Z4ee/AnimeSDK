#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/MonoHoundLaserItem_Enum_3_086341004015E6AB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_517618AF9F81A011;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADDTOPARENT_OFFSET UNITYSDK_OFFSET(0x19DCCF00)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADJUSTSIZE_OFFSET UNITYSDK_OFFSET(0x19DCD1B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x19DCCBC0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x19DCD3C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_GETLASERTYPE_OFFSET UNITYSDK_OFFSET(0x19DCE060)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_INIT_OFFSET UNITYSDK_OFFSET(0x19DCD000)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ISFINISH_OFFSET UNITYSDK_OFFSET(0x19DCD8B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_METHOD_5_B6CBA8101B92A75F_OFFSET UNITYSDK_OFFSET(0x19DCDAC0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x19DCD990)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTEMISSION_OFFSET UNITYSDK_OFFSET(0x19DCDE60)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x19DCD1F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x19DCD590)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPOSITION_OFFSET UNITYSDK_OFFSET(0x19DCD900)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DCE100)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCE0A0)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundLaserItem_TypeDefinitionIndex = 47766;

	class MonoHoundLaserItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_startAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x4C3B0);
		}
		static ::System::String** StaticGet_endAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x4C3B8);
		}
		static ::System::String** StaticGet_warnAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x4C3C0);
		}
		static ::System::String** StaticGet_loopAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x4C3C8);
		}
		::UnityEngine::GameObject* warnRoot; // 0x18
		::UnityEngine::GameObject* activeRoot; // 0x20
		::Enum_3_E36C894DCA3F304A Field_5_6; // 0x28
		::System::Int32 Field_5_5; // 0x2C
		::UnityEngine::RectTransform* Field_5_4; // 0x30
		::UnityEngine::RectTransform* Field_5_11; // 0x38
		::System::Boolean Field_5_10; // 0x40
		::UnityEngine::Animation* Field_5_9; // 0x48
		::MoleMole::MiniGame::TartarusHounds::MonoHoundLaserItem_Enum_3_086341004015E6AB Field_5_8; // 0x50
		::System::Single Field_5_19; // 0x54
		::System::Single Field_5_18; // 0x58
		::System::Single Field_5_17; // 0x5C
		::System::Single Field_5_16; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_AWAKE_OFFSET))(this);
		}

		::System::Void AddToParent(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADDTOPARENT_OFFSET))(this, a1);
		}

		::System::Void Init(::Enum_3_E36C894DCA3F304A a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_E36C894DCA3F304A, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void AdjustSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADJUSTSIZE_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTPLAY_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ENDPLAY_OFFSET))(this);
		}

		::System::Void TickPlayState(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPLAYSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ISFINISH_OFFSET))(this);
		}

		::System::Void TickPosition(::Class_1_517618AF9F81A011* a1, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a2, ::UnityEngine::Camera* a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_517618AF9F81A011*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetPosition(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2, ::Class_1_517618AF9F81A011* a3, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::Class_1_517618AF9F81A011*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_SETPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTEMISSION_OFFSET))(this);
		}

		::Enum_3_E36C894DCA3F304A GetLaserType()
		{
			return ((::Enum_3_E36C894DCA3F304A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_GETLASERTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_5_B6CBA8101B92A75F(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_METHOD_5_B6CBA8101B92A75F_OFFSET))(this, a1, a2, a3);
		}
	};
}
