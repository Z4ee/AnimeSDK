#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

class Class_1_B8E6D5AD8534D123;

#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xBC16750)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xBC16AE0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xBC16AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_GrantUnlockSummarizer_TypeDefinitionIndex = 60927;

	class GridFightTeam_GrantUnlockSummarizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateModifier(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_UpdateModifier(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET))(this, a1);
		}
	};
}
