#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_ROLEIDEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4D1B00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_ROLEIDEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4D1C60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_ROLEIDEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D0CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefExpiredSummary_RoleIDEqualityComparer_TypeDefinitionIndex = 59599;

	class GridFightGameRefExpiredSummary_RoleIDEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_ROLEIDEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::GridFightSeasonRole* x, ::RPG::Client::GridFightSeasonRole* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_ROLEIDEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::RPG::Client::GridFightSeasonRole* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_ROLEIDEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
