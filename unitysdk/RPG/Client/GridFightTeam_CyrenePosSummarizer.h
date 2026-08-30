#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xD341E60)
#define RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xD341CA0)
#define RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xD342050)
#define RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER__UPDATEDONE_B__3_0_OFFSET UNITYSDK_OFFSET(0xD3420C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER__UPDATESTART_B__2_0_OFFSET UNITYSDK_OFFSET(0xD342060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_CyrenePosSummarizer_TypeDefinitionIndex = 65215;

	class GridFightTeam_CyrenePosSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::UInt32 _CyreneRoleID; // 0x10
		::System::Boolean _StartCyreneOnBoard; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER_UPDATEDONE_OFFSET))(this);
		}

		::System::Boolean _UpdateStart_b__2_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER__UPDATESTART_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateDone_b__3_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CYRENEPOSSUMMARIZER__UPDATEDONE_B__3_0_OFFSET))(this, a1);
		}
	};
}
