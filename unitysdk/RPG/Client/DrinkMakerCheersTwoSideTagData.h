#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersConfigRow; }

#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0xCD9F560)
#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0xCD9F5A0)
#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCD9F580)
#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0xCD9F4F0)
#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_SET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0xCD9F570)
#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_SET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0xCD9F5B0)
#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCD9F590)
#define RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD9F2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersTwoSideTagData_TypeDefinitionIndex = 63689;

	class DrinkMakerCheersTwoSideTagData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersConfigRow* _DrinkMakerCheersConfigRow; // 0x10
		::System::Boolean _HasFinished_k__BackingField; // 0x18
		::System::Boolean _IsPositive_k__BackingField; // 0x19
		::System::Boolean _IsUnlock_k__BackingField; // 0x1A

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_TAGNAME_OFFSET))(this);
		}

		::System::Boolean get_HasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_HASFINISHED_OFFSET))(this);
		}

		::System::Void set_HasFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_SET_HASFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPositive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_GET_ISPOSITIVE_OFFSET))(this);
		}

		::System::Void set_IsPositive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTWOSIDETAGDATA_SET_ISPOSITIVE_OFFSET))(this, a1);
		}
	};
}
