#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_METHOD_6_7F5A09121F2469EC_OFFSET UNITYSDK_OFFSET(0xB887140)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB8870C0)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_SHOWATKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xB8874B0)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_SHOWHPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xB887270)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xB8876F0)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB887A20)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB885F50)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB885A30)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB887A90)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB887A30)

namespace RPG::View
{
	inline static constexpr unsigned int ChimeraDuelBattleChimeraControl_TypeDefinitionIndex = 47903;

	class ChimeraDuelBattleChimeraControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* Field_6_0; // 0x30
		::RPG::Client::LocalizedText* Field_6_1; // 0x38
		::RPG::Client::LocalizedText* Field_6_2; // 0x40
		::RPG::Client::LocalizedText* Field_6_3; // 0x48
		::RPG::Client::LocalizedText* Field_6_4; // 0x50
		::RPG::Client::LocalizedText* Field_6_5; // 0x58
		::RPG::Client::LocalizedText* Field_6_6; // 0x60
		::RPG::Client::LocalizedText* Field_6_7; // 0x68
		::RPG::Client::LocalizedText* Field_6_8; // 0x70
		::RPG::Client::LocalizedText* Field_6_9; // 0x78
		::UnityEngine::Animation* Field_6_10; // 0x80
		::UnityEngine::Animation* Field_6_11; // 0x88
		::UnityEngine::RectTransform* Field_6_12; // 0x90
		::UnityEngine::RectTransform* Field_6_13; // 0x98
		::System::Boolean Field_6_14; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_7F5A09121F2469EC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_METHOD_6_7F5A09121F2469EC_OFFSET))(this, a1);
		}

		::System::Void ShowHPValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_SHOWHPVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void ShowAtkValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_SHOWATKVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
