#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPoint; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::Client::Prop { class ChimeraDuelChimeraModelView; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_ASCENSION_OFFSET UNITYSDK_OFFSET(0xAE06260)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_CHANGETIMESCALE_OFFSET UNITYSDK_OFFSET(0xAE06420)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_DESTROY_OFFSET UNITYSDK_OFFSET(0xAE05DA0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE05D60)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_DOFIREEFFECT_OFFSET UNITYSDK_OFFSET(0xAE06820)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATKTEXT_OFFSET UNITYSDK_OFFSET(0xAE05AF0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATK_OFFSET UNITYSDK_OFFSET(0xAE05920)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xAE05D40)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_HPTEXT_OFFSET UNITYSDK_OFFSET(0xAE05910)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_HP_OFFSET UNITYSDK_OFFSET(0xAE05780)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVELTEXT_OFFSET UNITYSDK_OFFSET(0xAE05C90)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAE05B00)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xAE055F0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_TEAMPOSITION_OFFSET UNITYSDK_OFFSET(0xAE05CA0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_TIPATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xAE05380)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET__VFXPLAYER_OFFSET UNITYSDK_OFFSET(0xAE05510)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0xAE07090)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_REMOVEEFFECTWITHUNIQUEID_OFFSET UNITYSDK_OFFSET(0xAE06C30)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xAE06D70)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATKTEXT_OFFSET UNITYSDK_OFFSET(0xAE05A60)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATK_OFFSET UNITYSDK_OFFSET(0xAE05930)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xAE05D50)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HPTEXT_OFFSET UNITYSDK_OFFSET(0xAE05880)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HP_OFFSET UNITYSDK_OFFSET(0xAE05790)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVELTEXT_OFFSET UNITYSDK_OFFSET(0xAE05C00)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAE05B10)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_TEAMPOSITION_OFFSET UNITYSDK_OFFSET(0xAE05CB0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SHOWHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xAE06F90)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYFIREEFFECT_OFFSET UNITYSDK_OFFSET(0xAE06570)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYGETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xAE06640)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYREMOVEEFFECTWITHUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAE06B10)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAE061B0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xAE05ED0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DuelChimeraProxy_TypeDefinitionIndex = 71871;

	class DuelChimeraProxy : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::String* Name; // 0x18
		::System::String* _AtkText; // 0x20
		::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>* _ViewDestroyer; // 0x28
		::UnityEngine::GameObject* GameObject; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* EffectUniqueNameToID; // 0x38
		::System::String* _LevelText; // 0x40
		::System::String* _HPText; // 0x48
		::System::Int32 DefaultAtk; // 0x50
		::System::Int32 _TeamPosition; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 _Level; // 0x5C
		::System::Int32 _Atk; // 0x60
		::System::Int32 DefaultHP; // 0x64
		::System::Int32 _HP; // 0x68
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x6C
		::System::UInt32 _EquipmentID_k__BackingField; // 0x70
		::System::Int32 UniqueID; // 0x74
		::System::UInt32 InitialEffectUniqueID; // 0x78

		::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* cache, ::RPG::Client::Prop::ChimeraDuelChimeraModelView* view, ::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>* viewDestroyer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::RPG::Client::Prop::ChimeraDuelChimeraModelView*, ::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_OFFSET))(this, cache, view, viewDestroyer);
		}

		::System::Void _ctor_1(::RPG::Client::Prop::ChimeraDuelChimeraModelView* view)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_1_OFFSET))(this, view);
		}

		::UnityEngine::GameObject* get_TipAttachPoint()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_TIPATTACHPOINT_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* get__VfxPlayer()
		{
			return ((::RPG::Client::Prop::ChimeraDuelModelVfxPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET__VFXPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_SKILLID_OFFSET))(this);
		}

		::System::Int32 get_HP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_HP_OFFSET))(this);
		}

		::System::Void set_HP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HP_OFFSET))(this, value);
		}

		::System::String* get_HPText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_HPTEXT_OFFSET))(this);
		}

		::System::Void set_HPText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HPTEXT_OFFSET))(this, value);
		}

		::System::Int32 get_Atk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATK_OFFSET))(this);
		}

		::System::Void set_Atk(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATK_OFFSET))(this, value);
		}

		::System::String* get_AtkText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATKTEXT_OFFSET))(this);
		}

		::System::Void set_AtkText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATKTEXT_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVEL_OFFSET))(this, value);
		}

		::System::String* get_LevelText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVELTEXT_OFFSET))(this);
		}

		::System::Void set_LevelText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVELTEXT_OFFSET))(this, value);
		}

		::System::Int32 get_TeamPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_TEAMPOSITION_OFFSET))(this);
		}

		::System::Void set_TeamPosition(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_TEAMPOSITION_OFFSET))(this, value);
		}

		::System::UInt32 get_EquipmentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::Void set_EquipmentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_EQUIPMENTID_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_DESTROY_OFFSET))(this);
		}

		::System::Void Ascension(::System::UInt32 newChimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_ASCENSION_OFFSET))(this, newChimeraID);
		}

		::System::Void ChangeTimeScale(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_CHANGETIMESCALE_OFFSET))(this, timeScale);
		}

		::System::Boolean TryFireEffect(::System::String* attachPointName, ::System::String* effectPath, ::UnityEngine::Vector3 scale, ::System::UInt32& uniqueEffectID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYFIREEFFECT_OFFSET))(this, attachPointName, effectPath, scale, uniqueEffectID);
		}

		::System::Void TryRemoveEffectWithUniqueName(::System::String* uniqueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYREMOVEEFFECTWITHUNIQUENAME_OFFSET))(this, uniqueName);
		}

		::System::Void RemoveEffectWithUniqueID(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_REMOVEEFFECTWITHUNIQUEID_OFFSET))(this, uniqueID);
		}

		::System::Boolean TryGetAttachPoint(::System::String* anchorName, ::RPG::Client::AttachPoint*& attachPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::AttachPoint*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYGETATTACHPOINT_OFFSET))(this, anchorName, attachPoint);
		}

		::System::UInt32 DoFireEffect(::RPG::Client::AttachPoint* attachPoint, ::System::String* effectPath, ::UnityEngine::Vector3 scale)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AttachPoint*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_DOFIREEFFECT_OFFSET))(this, attachPoint, effectPath, scale);
		}

		::System::Void SetLightWeightActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SETLIGHTWEIGHTACTIVE_OFFSET))(this, isActive);
		}

		::System::Void ShowHighlightOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SHOWHIGHLIGHTOUTLINE_OFFSET))(this);
		}

		::System::Void HideOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_HIDEOUTLINE_OFFSET))(this);
		}
	};
}
