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

#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_ASCENSION_OFFSET UNITYSDK_OFFSET(0xDC97030)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_CHANGETIMESCALE_OFFSET UNITYSDK_OFFSET(0xDC971F0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_DESTROY_OFFSET UNITYSDK_OFFSET(0xDC62E50)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC96CD0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_DOFIREEFFECT_OFFSET UNITYSDK_OFFSET(0xDC97500)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATKTEXT_OFFSET UNITYSDK_OFFSET(0xDC96A60)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATK_OFFSET UNITYSDK_OFFSET(0xDC96890)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xDC96CB0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_HPTEXT_OFFSET UNITYSDK_OFFSET(0xDC96880)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_HP_OFFSET UNITYSDK_OFFSET(0xDC966F0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVELTEXT_OFFSET UNITYSDK_OFFSET(0xDC96C00)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDC96A70)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDC96500)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_TEAMPOSITION_OFFSET UNITYSDK_OFFSET(0xDC96C10)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_TIPATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xDC96290)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET__VFXPLAYER_OFFSET UNITYSDK_OFFSET(0xDC96420)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_HIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0xDC97B00)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_REMOVEEFFECTWITHUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDC97870)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xDC978D0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATKTEXT_OFFSET UNITYSDK_OFFSET(0xDC969D0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATK_OFFSET UNITYSDK_OFFSET(0xDC968A0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xDC96CC0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HPTEXT_OFFSET UNITYSDK_OFFSET(0xDC967F0)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HP_OFFSET UNITYSDK_OFFSET(0xDC96700)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVELTEXT_OFFSET UNITYSDK_OFFSET(0xDC96B70)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDC96A80)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_TEAMPOSITION_OFFSET UNITYSDK_OFFSET(0xDC96C20)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_SHOWHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xDC97A00)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYFIREEFFECT_OFFSET UNITYSDK_OFFSET(0xDC97260)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYGETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xDC97330)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYREMOVEEFFECTWITHUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xDC97710)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDC63C30)
#define RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xDC96D10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DuelChimeraProxy_TypeDefinitionIndex = 78374;

	class DuelChimeraProxy : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::String* Name; // 0x18
		::System::String* _LevelText; // 0x20
		::UnityEngine::GameObject* GameObject; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* EffectUniqueNameToID; // 0x30
		::System::String* _AtkText; // 0x38
		::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>* _ViewDestroyer; // 0x40
		::System::String* _HPText; // 0x48
		::System::Int32 _Atk; // 0x50
		::System::Int32 DefaultAtk; // 0x54
		::System::Int32 UniqueID; // 0x58
		::System::Int32 _TeamPosition; // 0x5C
		::System::UInt32 ID; // 0x60
		::System::UInt32 _Level; // 0x64
		::System::Int32 _HP; // 0x68
		::System::UInt32 InitialEffectUniqueID; // 0x6C
		::System::UInt32 _EquipmentID_k__BackingField; // 0x70
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x74
		::System::Int32 DefaultHP; // 0x78

		::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1, ::RPG::Client::Prop::ChimeraDuelChimeraModelView* a2, ::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::RPG::Client::Prop::ChimeraDuelChimeraModelView*, ::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::Client::Prop::ChimeraDuelChimeraModelView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_HP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HP_OFFSET))(this, a1);
		}

		::System::String* get_HPText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_HPTEXT_OFFSET))(this);
		}

		::System::Void set_HPText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_HPTEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Atk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATK_OFFSET))(this);
		}

		::System::Void set_Atk(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATK_OFFSET))(this, a1);
		}

		::System::String* get_AtkText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_ATKTEXT_OFFSET))(this);
		}

		::System::Void set_AtkText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_ATKTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* get_LevelText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_LEVELTEXT_OFFSET))(this);
		}

		::System::Void set_LevelText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_LEVELTEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_TeamPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_TEAMPOSITION_OFFSET))(this);
		}

		::System::Void set_TeamPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_TEAMPOSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquipmentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::Void set_EquipmentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SET_EQUIPMENTID_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_DESTROY_OFFSET))(this);
		}

		::System::Void Ascension(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_ASCENSION_OFFSET))(this, a1);
		}

		::System::Void ChangeTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_CHANGETIMESCALE_OFFSET))(this, a1);
		}

		::System::Boolean TryFireEffect(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::UInt32& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYFIREEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TryRemoveEffectWithUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYREMOVEEFFECTWITHUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void RemoveEffectWithUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_REMOVEEFFECTWITHUNIQUEID_OFFSET))(this, a1);
		}

		::System::Boolean TryGetAttachPoint(::System::String* a1, ::RPG::Client::AttachPoint*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::AttachPoint*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_TRYGETATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 DoFireEffect(::RPG::Client::AttachPoint* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AttachPoint*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_DOFIREEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLightWeightActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUELCHIMERAPROXY_SETLIGHTWEIGHTACTIVE_OFFSET))(this, a1);
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
