#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ServerPlayerSettingItem.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ServerPlayerSettingEnumItem_1_TypeDefinitionIndex = 63748;

	template <typename T>
	class ServerPlayerSettingEnumItem_1 : public ::RPG::Client::ServerPlayerSettingItem
	{
	public:
		::System::Action_1<T>* _ClientPrefSetter_k__BackingField; // 0x0
	};
}
