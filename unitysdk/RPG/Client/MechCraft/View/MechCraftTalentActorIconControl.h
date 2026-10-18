#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftTalentActorIconControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_32AEC869C225A3A6_OFFSET UNITYSDK_OFFSET(0xD666780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_5F906710E91A972F_OFFSET UNITYSDK_OFFSET(0xD666A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_66F109863DD4CF75_OFFSET UNITYSDK_OFFSET(0xD666840)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_6C055FB8AF9612E6_OFFSET UNITYSDK_OFFSET(0xD6667C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_AC4AB195F7CDB685_OFFSET UNITYSDK_OFFSET(0xD666960)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_F668FFC34D68B434_OFFSET UNITYSDK_OFFSET(0xD666F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD667100)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentActorIconControl_TypeDefinitionIndex = 80052;

	class MechCraftTalentActorIconControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentActorIconControlBinder* _Binder; // 0x20
		::System::String* _StateDefault; // 0x28
		::System::String* _StateLocked; // 0x30
		::System::String* _StateHighlight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* Method_5_32AEC869C225A3A6()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_32AEC869C225A3A6_OFFSET))(this);
		}

		::System::Void Method_5_6C055FB8AF9612E6(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_6C055FB8AF9612E6_OFFSET))(this, a1);
		}

		::System::Void Method_5_AC4AB195F7CDB685(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_AC4AB195F7CDB685_OFFSET))(this, a1);
		}

		::System::Void Method_5_66F109863DD4CF75(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_66F109863DD4CF75_OFFSET))(this, a1);
		}

		::System::Void Method_5_F668FFC34D68B434(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_F668FFC34D68B434_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_5F906710E91A972F(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_METHOD_5_5F906710E91A972F_OFFSET))(this, a1);
		}
	};
}
