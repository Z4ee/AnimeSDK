#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_675DF7FCD18C0C05;
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldFilterTabControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldFilterTabsControlBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD600C70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_METHOD_5_3B935EDF35B815B0_OFFSET UNITYSDK_OFFSET(0xD600CB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_METHOD_5_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0xD601B90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5FA480)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD601D50)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipMoldFilterTabsControl_TypeDefinitionIndex = 79862;

	class MechCraftCraftChipMoldFilterTabsControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_675DF7FCD18C0C05* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftChipMoldFilterTabsControlBinder* _Binder; // 0x20
		::System::String* _AnimNameSwitchTab; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftCraftChipMoldFilterTabControl*>* JPJPEAMHMHK; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_675DF7FCD18C0C05* get_Content()
		{
			return ((::Class_1_675DF7FCD18C0C05*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_675DF7FCD18C0C05* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_675DF7FCD18C0C05*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_3B935EDF35B815B0(::Class_1_675DF7FCD18C0C05* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_675DF7FCD18C0C05*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_METHOD_5_3B935EDF35B815B0_OFFSET))(this, a1);
		}

		::System::Void Method_5_DA37DFE3A5BDA9F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_METHOD_5_DA37DFE3A5BDA9F4_OFFSET))(this);
		}
	};
}
