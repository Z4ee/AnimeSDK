#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGhostBase.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_CLEARONPROPERTYCHANGEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0xC3E2370)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_BURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC3E2760)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xC3E2620)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_HPPERCENT_OFFSET UNITYSDK_OFFSET(0xC3E2800)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC3E25A0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_SHIELD_OFFSET UNITYSDK_OFFSET(0xC3E26C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_INITFROMENTITY_OFFSET UNITYSDK_OFFSET(0xC3E2860)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_NOTIFYPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xC3E23E0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_REGISTERONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xC3E2160)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_BURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC3E2770)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xC3E2630)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC3E25B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_SHIELD_OFFSET UNITYSDK_OFFSET(0xC3E26D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SYNCFROMENTITY_OFFSET UNITYSDK_OFFSET(0xC3E2A80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_UNREGISTERONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xC3E2300)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E2110)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneGhost_TypeDefinitionIndex = 73518;

	class PixAirPlaneGhost : public ::RPG::Client::PixAir::PixAirGhostBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Action*>* _onPropertyChangedCallbacks; // 0x20
		::System::Int32 _CurrentHP; // 0x28
		::System::Int32 _Shield; // 0x2C
		::System::Int32 _MaxHP; // 0x30
		::System::Int32 _BurnCount; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST__CTOR_OFFSET))(this, a1);
		}

		::System::Void RegisterOnPropertyChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_REGISTERONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void UnregisterOnPropertyChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_UNREGISTERONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void ClearOnPropertyChangedCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_CLEARONPROPERTYCHANGEDCALLBACKS_OFFSET))(this);
		}

		::System::Void NotifyPropertyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_NOTIFYPROPERTYCHANGED_OFFSET))(this);
		}

		::System::Int32 get_MaxHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_CURRENTHP_OFFSET))(this, a1);
		}

		::System::Int32 get_Shield()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_SHIELD_OFFSET))(this);
		}

		::System::Void set_Shield(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_SHIELD_OFFSET))(this, a1);
		}

		::System::Int32 get_BurnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_BURNCOUNT_OFFSET))(this);
		}

		::System::Void set_BurnCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SET_BURNCOUNT_OFFSET))(this, a1);
		}

		::System::Single get_HPPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_GET_HPPERCENT_OFFSET))(this);
		}

		::System::Void InitFromEntity(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_INITFROMENTITY_OFFSET))(this, a1);
		}

		::System::Void SyncFromEntity(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEGHOST_SYNCFROMENTITY_OFFSET))(this, a1);
		}
	};
}
