#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C1B8880)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_SHOWATKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1C1B8E30)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_SHOWHPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1C1B8A40)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C1B9220)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B9550)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C1B7D60)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__ONCHIMERAATTRIBUTECHANGE_OFFSET UNITYSDK_OFFSET(0x1C1B8900)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C1B7B50)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleChimeraControl_TypeDefinitionIndex = 79921;

	class ChimeraDuelBattleChimeraControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _ChimeraName; // 0x38
		::RPG::Client::LocalizedText* _ChimeraLevel; // 0x40
		::RPG::Client::LocalizedText* _ChimeraHp; // 0x48
		::RPG::Client::LocalizedText* _ChimeraHpChange; // 0x50
		::RPG::Client::LocalizedText* _ChimeraHPWhenIncreased; // 0x58
		::RPG::Client::LocalizedText* _ChimeraHPWhenDecreased; // 0x60
		::RPG::Client::LocalizedText* _ChimeraAtk; // 0x68
		::RPG::Client::LocalizedText* _ChimeraAtkChange; // 0x70
		::RPG::Client::LocalizedText* _ChimeraAtkWhenIncreased; // 0x78
		::RPG::Client::LocalizedText* _ChimeraAtkWhenDecreased; // 0x80
		::UnityEngine::Animation* _ChimeraHpChangeAnimation; // 0x88
		::UnityEngine::Animation* _ChimeraAtkChangeAnimation; // 0x90
		::UnityEngine::RectTransform* _ChimeraHpChangeRoot; // 0x98
		::UnityEngine::RectTransform* _UIRoot; // 0xA0
		::System::Boolean _IsInitialized; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnChimeraAttributeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL__ONCHIMERAATTRIBUTECHANGE_OFFSET))(this, a1);
		}

		::System::Void ShowHPValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_SHOWHPVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void ShowAtkValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_SHOWATKVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL_UPDATE_OFFSET))(this);
		}
	};
}
