#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_43BD383C98B4C0C5_233;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::CatGod { class CatGodViewModel; }

#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5E000)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1AC5E3B0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONCATGODINTERACTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC5E960)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1AC5E360)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AC5E0D0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC5E2A0)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodGetShelfWindow_TypeDefinitionIndex = 76688;

	class CatGodGetShelfWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::AnimatorButton* _BtnStay; // 0x40
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x48
		::RPG::Client::AnimatorButton* _BtnGo; // 0x50

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

		::System::Void _OnCatGodInteractionMessage(::Class_1_43BD383C98B4C0C5_233* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_233*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONCATGODINTERACTIONMESSAGE_OFFSET))(this, a1);
		}
	};
}
