#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }

#define RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD390E10)
#define RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD390DD0)
#define RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD391120)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookAvatarComparerFactory_TypeDefinitionIndex = 65672;

	class HandbookAvatarComparerFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IAvatarComparer* Create()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY_CREATE_OFFSET))();
		}

		static ::RPG::Client::IAvatarComparer* Create_1(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY_CREATE_1_OFFSET))(a1, a2, a3);
		}
	};
}
