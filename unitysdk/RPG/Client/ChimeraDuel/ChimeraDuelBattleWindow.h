#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ChimeraDuel { class ChimeraDuelBattleChimeraControl; }
namespace RPG::Client::ChimeraDuel { class ChimeraDuelBattleViewModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW_DESTROYCHIMERACONTROL_OFFSET UNITYSDK_OFFSET(0x1A5038C0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A502F60)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__INITCHIMERALIST_OFFSET UNITYSDK_OFFSET(0x1A5033F0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A503750)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A5030C0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A5039B0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_1_OFFSET UNITYSDK_OFFSET(0x1A503A90)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_2_OFFSET UNITYSDK_OFFSET(0x1A503B70)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleWindow_TypeDefinitionIndex = 76290;

	class ChimeraDuelBattleWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::AnimatorButton* _BtnExit; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ChimeraDuel::ChimeraDuelBattleChimeraControl*>* _ChimeraControlMap; // 0x48
		::RPG::Client::AnimatorButton* _BtnSwitchAutoMode; // 0x50
		::RPG::Client::AnimatorButton* _BtnApplyAccelerate; // 0x58
		::RPG::Client::PrefabLoadMeta* _DynamicControlMeta; // 0x60
		::System::Int32 _ChimeraMetaIndex; // 0x68

		::System::Void _ctor(::RPG::Client::ChimeraDuel::ChimeraDuelBattleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuel::ChimeraDuelBattleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _InitChimeraList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__INITCHIMERALIST_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void DestroyChimeraControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW_DESTROYCHIMERACONTROL_OFFSET))(this, a1);
		}

		::System::Void __OnBindViewModel_b__3_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_0_OFFSET))(this, a1);
		}

		::System::Void __OnBindViewModel_b__3_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_1_OFFSET))(this, a1);
		}

		::System::Void __OnBindViewModel_b__3_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_2_OFFSET))(this, a1);
		}
	};
}
