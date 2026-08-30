#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_DEVACCOUNTMODEL_ISACCOUNTUIDVALID_OFFSET UNITYSDK_OFFSET(0x192E4C90)
#define RPG_CLIENT_DEVACCOUNTMODEL_ISUIDVALID_OFFSET UNITYSDK_OFFSET(0x192E4C40)
#define RPG_CLIENT_DEVACCOUNTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x192E4C20)

namespace RPG::Client
{
	inline static constexpr unsigned int DevAccountModel_TypeDefinitionIndex = 61171;

	class DevAccountModel : public ::System::Object
	{
	public:
		// static const ::System::String* DevAccoundDevice; // 0x0
		// static const ::System::UInt32 DevAccountChannelId = 0x2710; // 0x0
		::System::String* AccountUid; // 0x10
		::System::UInt32 Uid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVACCOUNTMODEL__CTOR_OFFSET))(this);
		}

		::System::Boolean IsUidValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVACCOUNTMODEL_ISUIDVALID_OFFSET))(this);
		}

		::System::Boolean IsAccountUidValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVACCOUNTMODEL_ISACCOUNTUIDVALID_OFFSET))(this);
		}
	};
}
