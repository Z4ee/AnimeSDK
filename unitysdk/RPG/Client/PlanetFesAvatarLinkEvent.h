#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESAVATARLINKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xDB3A130)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarLinkEvent_TypeDefinitionIndex = 66656;

	class PlanetFesAvatarLinkEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* LinkIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINKEVENT__CTOR_OFFSET))(this);
		}
	};
}
