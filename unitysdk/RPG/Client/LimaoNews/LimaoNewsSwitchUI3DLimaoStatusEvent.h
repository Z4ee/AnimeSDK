#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsSwitchUI3DLimaoType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMainEntrance3DViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_GET_SWITCHTYPE_OFFSET UNITYSDK_OFFSET(0x1C4AEB60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_GET_VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4AEB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_SET_SWITCHTYPE_OFFSET UNITYSDK_OFFSET(0x1C4AEB70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_SET_VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4AEB50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AEB80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSwitchUI3DLimaoStatusEvent_TypeDefinitionIndex = 78956;

	class LimaoNewsSwitchUI3DLimaoStatusEvent : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* _ViewModel_k__BackingField; // 0x10
		::RPG::Client::LimaoNewsSwitchUI3DLimaoType _SwitchType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* get_ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_GET_VIEWMODEL_OFFSET))(this);
		}

		::System::Void set_ViewModel(::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_SET_VIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNewsSwitchUI3DLimaoType get_SwitchType()
		{
			return ((::RPG::Client::LimaoNewsSwitchUI3DLimaoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_GET_SWITCHTYPE_OFFSET))(this);
		}

		::System::Void set_SwitchType(::RPG::Client::LimaoNewsSwitchUI3DLimaoType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNewsSwitchUI3DLimaoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSWITCHUI3DLIMAOSTATUSEVENT_SET_SWITCHTYPE_OFFSET))(this, a1);
		}
	};
}
