#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHOOSEDELIVERYGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BBF93B0)
#define RPG_CLIENT_CHOOSEDELIVERYGROUP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BBF93C0)
#define RPG_CLIENT_CHOOSEDELIVERYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF93D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryGroup_TypeDefinitionIndex = 63582;

	class ChooseDeliveryGroup : public ::System::Object
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP_SET_GROUPID_OFFSET))(this, a1);
		}
	};
}
