#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftOrderRequirementControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderRequirementViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD6505A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_2BDEDB8F1540662B_OFFSET UNITYSDK_OFFSET(0xD650780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_38C1F87E407E9FA1_OFFSET UNITYSDK_OFFSET(0xD650660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_5A224A67287A3DCB_OFFSET UNITYSDK_OFFSET(0xD650EA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_D87143B649E59E40_OFFSET UNITYSDK_OFFSET(0xD6508B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD6505E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6512E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderRequirementControl_TypeDefinitionIndex = 79996;

	class MechCraftOrderRequirementControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderRequirementControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void Method_5_2BDEDB8F1540662B(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_2BDEDB8F1540662B_OFFSET))(this, a1);
		}

		::System::Void Method_5_38C1F87E407E9FA1(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_38C1F87E407E9FA1_OFFSET))(this, a1);
		}

		::System::Void Method_5_5A224A67287A3DCB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_5A224A67287A3DCB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_D87143B649E59E40(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_METHOD_5_D87143B649E59E40_OFFSET))(this, a1);
		}
	};
}
