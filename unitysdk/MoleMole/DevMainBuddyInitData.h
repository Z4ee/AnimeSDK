#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DevBuddyInitData.h"

#define MOLEMOLE_DEVMAINBUDDYINITDATA_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1922CC20)
#define MOLEMOLE_DEVMAINBUDDYINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1922CC30)

namespace MoleMole
{
	inline static constexpr unsigned int DevMainBuddyInitData_TypeDefinitionIndex = 46660;

	class DevMainBuddyInitData : public ::MoleMole::DevBuddyInitData
	{
	public:
		::System::Int32 BuddyTemplateID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVMAINBUDDYINITDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_TemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVMAINBUDDYINITDATA_GET_TEMPLATEID_OFFSET))(this);
		}
	};
}
