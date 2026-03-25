#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_UPDATEPROJECTIONREMOVE_OFFSET UNITYSDK_OFFSET(0x98C0F40)
#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x98C0FB0)
#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER___IFIXBASEPROXY_UPDATEPROJECTIONREMOVE_OFFSET UNITYSDK_OFFSET(0x98C0FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_ProjectionRemoveSummarizer_TypeDefinitionIndex = 52906;

	class GridFightTeam_ProjectionRemoveSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateProjectionRemove(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_UPDATEPROJECTIONREMOVE_OFFSET))(this, uniqueID);
		}

		::System::Void __iFixBaseProxy_UpdateProjectionRemove(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER___IFIXBASEPROXY_UPDATEPROJECTIONREMOVE_OFFSET))(this, P0);
		}
	};
}
