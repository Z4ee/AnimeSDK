#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftCustomerActorControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD63A8F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_094024222D6F02A6_OFFSET UNITYSDK_OFFSET(0xD63AAD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_14815E4D0C87B38F_OFFSET UNITYSDK_OFFSET(0xD63AF10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_5C43B8E2DCA831FF_OFFSET UNITYSDK_OFFSET(0xD63AC00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_B489778638D3B913_OFFSET UNITYSDK_OFFSET(0xD63A9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD63A930)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD63B180)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCustomerActorControl_TypeDefinitionIndex = 79985;

	class MechCraftCustomerActorControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCustomerActorControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void Method_5_094024222D6F02A6(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_094024222D6F02A6_OFFSET))(this, a1);
		}

		::System::Void Method_5_B489778638D3B913(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_B489778638D3B913_OFFSET))(this, a1);
		}

		::System::Void Method_5_14815E4D0C87B38F(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_14815E4D0C87B38F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_5C43B8E2DCA831FF(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_METHOD_5_5C43B8E2DCA831FF_OFFSET))(this, a1);
		}
	};
}
