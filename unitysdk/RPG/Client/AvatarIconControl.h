#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarSpecialMarkType.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_770;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class AvatarHpBarControl; }
namespace RPG::Client { class GridFightPositionTagControl; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoMaterialSwitch; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_AVATARICONCONTROL__BINDBUTTON_OFFSET UNITYSDK_OFFSET(0xC6F4AE0)
#define RPG_CLIENT_AVATARICONCONTROL__BINDCHILDCONTROLS_OFFSET UNITYSDK_OFFSET(0xC6FA350)
#define RPG_CLIENT_AVATARICONCONTROL__BINDHINTAREAS_OFFSET UNITYSDK_OFFSET(0xC6F87F0)
#define RPG_CLIENT_AVATARICONCONTROL__BINDIMAGES_OFFSET UNITYSDK_OFFSET(0xC6F50A0)
#define RPG_CLIENT_AVATARICONCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xC6F4A00)
#define RPG_CLIENT_AVATARICONCONTROL__BINDLEVELPANEL_OFFSET UNITYSDK_OFFSET(0xC6F5C10)
#define RPG_CLIENT_AVATARICONCONTROL__BINDMARKS_OFFSET UNITYSDK_OFFSET(0xC6F6860)
#define RPG_CLIENT_AVATARICONCONTROL__BINDMATERIAL_OFFSET UNITYSDK_OFFSET(0xC6FA110)
#define RPG_CLIENT_AVATARICONCONTROL__BINDNAMEPANEL_OFFSET UNITYSDK_OFFSET(0xC6F63E0)
#define RPG_CLIENT_AVATARICONCONTROL__BINDORDERANDCHECKMARK_OFFSET UNITYSDK_OFFSET(0xC6F7F00)
#define RPG_CLIENT_AVATARICONCONTROL__BINDREDDOT_OFFSET UNITYSDK_OFFSET(0xC6F9EA0)
#define RPG_CLIENT_AVATARICONCONTROL__BINDROGUEHEX_OFFSET UNITYSDK_OFFSET(0xC6F9A20)
#define RPG_CLIENT_AVATARICONCONTROL__BINDSPECIALMARK_OFFSET UNITYSDK_OFFSET(0xC6F7850)
#define RPG_CLIENT_AVATARICONCONTROL__BINDTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC6FAC40)
#define RPG_CLIENT_AVATARICONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FAF30)
#define RPG_CLIENT_AVATARICONCONTROL__GETSPECIALMARKCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xC6FAEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarIconControl_TypeDefinitionIndex = 60097;

	class AvatarIconControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_770*>
	{
	public:
		// static const ::System::String* _UpgradeLevelColor; // 0x0
		// static const ::System::String* _DefaultLevelColor; // 0x0
		::RPG::Client::AnimatorButton* _RootButton; // 0x70
		::UnityEngine::UI::Image* _IconImage; // 0x78
		::RPG::Client::MonoMaterialSwitch* _IconMaterial; // 0x80
		::UnityEngine::UI::Image* _RarityImage; // 0x88
		::UnityEngine::Transform* _DamageTypeRoot; // 0x90
		::UnityEngine::UI::Image* _DamageTypeImage; // 0x98
		::UnityEngine::Transform* _LevelRoot; // 0xA0
		::RPG::Client::LocalizedText* _LevelText; // 0xA8
		::RPG::Client::LocalizedText* _LevelTitleText; // 0xB0
		::UnityEngine::Transform* _NameRoot; // 0xB8
		::RPG::Client::LocalizedText* _NameText; // 0xC0
		::UnityEngine::Transform* _BlackMaskRoot; // 0xC8
		::UnityEngine::Transform* _TeamMark; // 0xD0
		::UnityEngine::Transform* _FavoriteMark; // 0xD8
		::UnityEngine::Transform* _UpgradeMark; // 0xE0
		::UnityEngine::Transform* _FixedMark; // 0xE8
		::UnityEngine::Transform* _AssistMark; // 0xF0
		::UnityEngine::Transform* _GrowthTargetMark; // 0xF8
		::UnityEngine::Transform* _ReplaceMark; // 0x100
		::UnityEngine::Transform* _SpecialMarkRoot; // 0x108
		::RPG::Client::LocalizedText* _SpecialMarkText; // 0x110
		::RPG::Client::MonoUIColorSwitcher* _SpecialMarkColorSwitcher; // 0x118
		::UnityEngine::Transform* _OrderRoot; // 0x120
		::RPG::Client::LocalizedText* _OrderText; // 0x128
		::UnityEngine::Transform* _CheckMark; // 0x130
		::UnityEngine::Transform* _MaskHintRoot; // 0x138
		::UnityEngine::Transform* _MaskHintTextRoot; // 0x140
		::RPG::Client::LocalizedText* _MaskHintText; // 0x148
		::RPG::Client::MonoUIColorSwitcher* _MaskHintColorSwitcher; // 0x150
		::UnityEngine::Transform* _SpecialHintRoot; // 0x158
		::RPG::Client::LocalizedText* _SpecialHintText; // 0x160
		::UnityEngine::Transform* _TargetHintRoot; // 0x168
		::RPG::Client::LocalizedText* _TargetHintText; // 0x170
		::UnityEngine::Transform* _RogueHexRoot; // 0x178
		::RPG::Client::LocalizedText* _RogueHexNumText; // 0x180
		::UnityEngine::Transform* _RedDotTrans; // 0x188
		::RPG::Client::AvatarHpBarControl* _HpBar; // 0x190
		::RPG::Client::GridFightPositionTagControl* _GridFightPositionTag; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindButton(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDBUTTON_OFFSET))(this, a1);
		}

		::System::Void _BindImages(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDIMAGES_OFFSET))(this, a1);
		}

		::System::Void _BindLevelPanel(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDLEVELPANEL_OFFSET))(this, a1);
		}

		::System::Void _BindNamePanel(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDNAMEPANEL_OFFSET))(this, a1);
		}

		::System::Void _BindMarks(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDMARKS_OFFSET))(this, a1);
		}

		::System::Void _BindSpecialMark(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDSPECIALMARK_OFFSET))(this, a1);
		}

		static ::System::String* _GetSpecialMarkColorState(::RPG::Client::AvatarSpecialMarkType a1)
		{
			return ((::System::String*(*)(::RPG::Client::AvatarSpecialMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__GETSPECIALMARKCOLORSTATE_OFFSET))(a1);
		}

		::System::Void _BindOrderAndCheckMark(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDORDERANDCHECKMARK_OFFSET))(this, a1);
		}

		::System::Void _BindHintAreas(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDHINTAREAS_OFFSET))(this, a1);
		}

		::System::Void _BindRogueHex(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDROGUEHEX_OFFSET))(this, a1);
		}

		::System::Void _BindRedDot(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDREDDOT_OFFSET))(this, a1);
		}

		::System::Void _BindMaterial(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDMATERIAL_OFFSET))(this, a1);
		}

		::System::Void _BindChildControls(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDCHILDCONTROLS_OFFSET))(this, a1);
		}

		::System::Void _BindTutorial(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL__BINDTUTORIAL_OFFSET))(this, a1);
		}
	};
}
