#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

class Class_1_EBD9A77671154634;

#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA5A5520)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A5910)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA5A5920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_GrantUnlockSummarizer_TypeDefinitionIndex = 59992;

	class GridFightTeam_GrantUnlockSummarizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateModifier(::Class_1_EBD9A77671154634* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET))(this, modifier);
		}

		::System::Void __iFixBaseProxy_UpdateModifier(::Class_1_EBD9A77671154634* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET))(this, P0);
		}
	};
}
