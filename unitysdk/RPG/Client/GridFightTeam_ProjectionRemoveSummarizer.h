#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_UPDATEPROJECTIONREMOVE_OFFSET UNITYSDK_OFFSET(0xBC17170)
#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xBC171E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER___IFIXBASEPROXY_UPDATEPROJECTIONREMOVE_OFFSET UNITYSDK_OFFSET(0xBC171F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_ProjectionRemoveSummarizer_TypeDefinitionIndex = 60919;

	class GridFightTeam_ProjectionRemoveSummarizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateProjectionRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_UPDATEPROJECTIONREMOVE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_UpdateProjectionRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER___IFIXBASEPROXY_UPDATEPROJECTIONREMOVE_OFFSET))(this, a1);
		}
	};
}
