#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::PixAir { class PixAirPlaneGhost; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1BD120F0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_BURNCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0x1BD11E30)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_BURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD12A40)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_CURRENTHPTEXT_OFFSET UNITYSDK_OFFSET(0x1BD12B60)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1BD12960)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_HPINFOTEXT_OFFSET UNITYSDK_OFFSET(0x1BD11BF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_HPPERCENT_OFFSET UNITYSDK_OFFSET(0x1BD11FF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_MAXHPTEXT_OFFSET UNITYSDK_OFFSET(0x1BD12AB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1BD128F0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_SHIELDTEXT_OFFSET UNITYSDK_OFFSET(0x1BD11D80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_SHIELD_OFFSET UNITYSDK_OFFSET(0x1BD129D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD121A0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1BD121C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BD122C0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatusViewModel_TypeDefinitionIndex = 78786;

	class PixAirPlaneStatusViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PixAir::PixAirPlaneGhost* _Ghost; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirPlaneStatusViewModel* Create(::RPG::Client::PixAir::PixAirPlaneGhost* a1)
		{
			return ((::RPG::Client::PixAir::PixAirPlaneStatusViewModel*(*)(::RPG::Client::PixAir::PixAirPlaneGhost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnGhostPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_MaxHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_MAXHP_OFFSET))(this);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Int32 get_Shield()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_SHIELD_OFFSET))(this);
		}

		::System::Int32 get_BurnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_BURNCOUNT_OFFSET))(this);
		}

		::System::Single get_HPPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_HPPERCENT_OFFSET))(this);
		}

		::System::String* get_MaxHPText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_MAXHPTEXT_OFFSET))(this);
		}

		::System::String* get_CurrentHPText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_CURRENTHPTEXT_OFFSET))(this);
		}

		::System::String* get_HPInfoText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_HPINFOTEXT_OFFSET))(this);
		}

		::System::String* get_ShieldText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_SHIELDTEXT_OFFSET))(this);
		}

		::System::String* get_BurnCountText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSVIEWMODEL_GET_BURNCOUNTTEXT_OFFSET))(this);
		}
	};
}
