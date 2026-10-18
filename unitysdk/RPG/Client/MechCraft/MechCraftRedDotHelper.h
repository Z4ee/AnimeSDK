#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWNORMALMECHATRON_OFFSET UNITYSDK_OFFSET(0xD5DDEC0)
#define RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWSPECIALMECHATRON_OFFSET UNITYSDK_OFFSET(0xD5DD8F0)

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftRedDotHelper_TypeDefinitionIndex = 79411;

	class MechCraftRedDotHelper : public ::System::Object
	{
	public:
		static ::System::Boolean HasNewSpecialMechatron()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWSPECIALMECHATRON_OFFSET))();
		}

		static ::System::Boolean HasNewNormalMechatron()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWNORMALMECHATRON_OFFSET))();
		}
	};
}
