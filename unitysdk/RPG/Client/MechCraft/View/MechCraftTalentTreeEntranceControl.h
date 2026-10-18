#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftTalentTreeEntranceControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD667080)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_HIDEHINT_OFFSET UNITYSDK_OFFSET(0xD6678F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_METHOD_5_962B8EDB0520ACA6_OFFSET UNITYSDK_OFFSET(0xD667720)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_METHOD_5_E5C6FFD25C8ECBC8_OFFSET UNITYSDK_OFFSET(0xD667270)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD667620)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6670C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_SHOWHINT_OFFSET UNITYSDK_OFFSET(0xD649370)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6679F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeEntranceControl_TypeDefinitionIndex = 80007;

	class MechCraftTalentTreeEntranceControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentTreeEntranceControlBinder* _Binder; // 0x20
		::UnityEngine::Animation* _HintAnim; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_962B8EDB0520ACA6(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_METHOD_5_962B8EDB0520ACA6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E5C6FFD25C8ECBC8(::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_METHOD_5_E5C6FFD25C8ECBC8_OFFSET))(this, a1);
		}

		::System::Void HideHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_HIDEHINT_OFFSET))(this);
		}

		::System::Void ShowHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREEENTRANCECONTROL_SHOWHINT_OFFSET))(this);
		}
	};
}
