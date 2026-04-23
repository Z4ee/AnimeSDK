#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }

#define RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA5DFCF0)
#define RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xA5DFCB0)
#define RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E0010)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookAvatarComparerFactory_TypeDefinitionIndex = 60408;

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

		static ::RPG::Client::IAvatarComparer* Create_1(::System::Boolean isLevelFirst, ::System::Boolean isAscend, ::System::Boolean includeHighlights)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKAVATARCOMPARERFACTORY_CREATE_1_OFFSET))(isLevelFirst, isAscend, includeHighlights);
		}
	};
}
