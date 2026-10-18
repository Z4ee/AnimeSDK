#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftTalentPointPhaseControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointPhaseViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_136D638EF319D63C_OFFSET UNITYSDK_OFFSET(0xD6642A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_883502FA32B1C64C_OFFSET UNITYSDK_OFFSET(0xD663FD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_8A513DDED8359F8D_OFFSET UNITYSDK_OFFSET(0xD664050)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_BB51B7C276864F26_OFFSET UNITYSDK_OFFSET(0xD663F90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_C2CE598B1E7466A3_OFFSET UNITYSDK_OFFSET(0xD664170)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_EF3E564582B2FC0C_OFFSET UNITYSDK_OFFSET(0xD664430)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD664540)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPointPhaseControl_TypeDefinitionIndex = 80059;

	class MechCraftTalentPointPhaseControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentPointPhaseControlBinder* _Binder; // 0x20
		::System::String* _StateLocked; // 0x28
		::System::String* _StateUnlocked; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* Method_5_BB51B7C276864F26()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_BB51B7C276864F26_OFFSET))(this);
		}

		::System::Void Method_5_883502FA32B1C64C(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_883502FA32B1C64C_OFFSET))(this, a1);
		}

		::System::Void Method_5_C2CE598B1E7466A3(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_C2CE598B1E7466A3_OFFSET))(this, a1);
		}

		::System::Void Method_5_8A513DDED8359F8D(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_8A513DDED8359F8D_OFFSET))(this, a1);
		}

		::System::Void Method_5_EF3E564582B2FC0C(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_EF3E564582B2FC0C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_136D638EF319D63C(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_METHOD_5_136D638EF319D63C_OFFSET))(this, a1);
		}
	};
}
