#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_43BD383C98B4C0C5_219;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::CatGod { class CatGodViewModel; }

#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BE550)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB4BE8D0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONCATGODINTERACTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xB4BEE80)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xB4BE880)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB4BE5F0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB4BE7C0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB4BEFD0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xB4BEF70)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB4BEF10)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodGetShelfWindow_TypeDefinitionIndex = 74304;

	class CatGodGetShelfWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x40
		::RPG::Client::AnimatorButton* _BtnGo; // 0x48
		::RPG::Client::AnimatorButton* _BtnStay; // 0x50

		::System::Void _ctor(::RPG::Client::CatGod::CatGodViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CatGod::CatGodViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnCatGodInteractionMessage(::Class_1_43BD383C98B4C0C5_219* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_219*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONCATGODINTERACTIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
