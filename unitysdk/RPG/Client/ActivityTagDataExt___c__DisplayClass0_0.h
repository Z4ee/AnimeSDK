#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTagData; }

#define RPG_CLIENT_ACTIVITYTAGDATAEXT___C__DISPLAYCLASS0_0__CONTAINSTAG_B__0_OFFSET UNITYSDK_OFFSET(0x1963B360)
#define RPG_CLIENT_ACTIVITYTAGDATAEXT___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1963B350)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTagDataExt___c__DisplayClass0_0_TypeDefinitionIndex = 61798;

	class ActivityTagDataExt___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 tagID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATAEXT___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsTag_b__0(::RPG::Client::ActivityTagData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityTagData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATAEXT___C__DISPLAYCLASS0_0__CONTAINSTAG_B__0_OFFSET))(this, a1);
		}
	};
}
