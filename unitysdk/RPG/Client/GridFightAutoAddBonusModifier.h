#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_GET_NPCUID_OFFSET UNITYSDK_OFFSET(0x1ADB7220)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ADB71D0)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB71C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAutoAddBonusModifier_TypeDefinitionIndex = 65074;

	class GridFightAutoAddBonusModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_NpcUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_GET_NPCUID_OFFSET))(this);
		}
	};
}
