#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_GET_NPCUID_OFFSET UNITYSDK_OFFSET(0x97D1470)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x97D1420)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x97D1410)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x97D1510)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAutoAddBonusModifier_TypeDefinitionIndex = 52798;

	class GridFightAutoAddBonusModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER__CTOR_OFFSET))(this, info);
		}

		::System::Void Update(::Class_1_F0A446EC7AE7E87D_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_UPDATE_OFFSET))(this, info);
		}

		::System::UInt32 get_NpcUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_GET_NPCUID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Update(::Class_1_F0A446EC7AE7E87D_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
		}
	};
}
