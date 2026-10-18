#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_0C6BC77542F8B8A3;
namespace RPG::Client::MechCraft::View { class MechCraftTalentActorIconControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPathControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointPhaseControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentTreeControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66DE00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_FADEINPROTECTSECONDS_OFFSET UNITYSDK_OFFSET(0xD66F3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_1CFEF2C87EA4995A_OFFSET UNITYSDK_OFFSET(0xD66DEA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_26C295ED2D81D681_OFFSET UNITYSDK_OFFSET(0xD670450)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_816D3BAAEACF30B4_OFFSET UNITYSDK_OFFSET(0xD66F7A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_8239E5458BB8EE62_OFFSET UNITYSDK_OFFSET(0xD670280)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xD66FB80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_998E122F46014853_OFFSET UNITYSDK_OFFSET(0xD66FDA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66DE40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD670690)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeControl_TypeDefinitionIndex = 80054;

	class MechCraftTalentTreeControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_0C6BC77542F8B8A3* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentTreeControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentPathControl*>* _PathControls; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentActorIconControl*>* _ActorControls; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentPointPhaseControl*>* _PhaseControls; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_0C6BC77542F8B8A3* get_Content()
		{
			return ((::Class_1_0C6BC77542F8B8A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_0C6BC77542F8B8A3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0C6BC77542F8B8A3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Single get_FadeInProtectSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_FADEINPROTECTSECONDS_OFFSET))(this);
		}

		::System::Void Method_5_1CFEF2C87EA4995A(::Class_1_0C6BC77542F8B8A3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0C6BC77542F8B8A3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_1CFEF2C87EA4995A_OFFSET))(this, a1);
		}

		::System::Void Method_5_89EF21CA0414B145()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_89EF21CA0414B145_OFFSET))(this);
		}

		::System::Void Method_5_816D3BAAEACF30B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_816D3BAAEACF30B4_OFFSET))(this);
		}

		::System::Void Method_5_998E122F46014853()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_998E122F46014853_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* Method_5_8239E5458BB8EE62(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPointControl*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_8239E5458BB8EE62_OFFSET))(this, a1);
		}

		::System::Void Method_5_26C295ED2D81D681(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_METHOD_5_26C295ED2D81D681_OFFSET))(this, a1);
		}
	};
}
