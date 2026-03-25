#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_1A21DD68B97D0FCB_OFFSET UNITYSDK_OFFSET(0x177C45C0)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_F1D61DA564E8037D_OFFSET UNITYSDK_OFFSET(0x177C44E0)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x177C45A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapTeamFormation_TypeDefinitionIndex = 22232;

	class TargetMapTeamFormation : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1D61DA564E8037D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_F1D61DA564E8037D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A21DD68B97D0FCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_1A21DD68B97D0FCB_OFFSET))(a1, a2);
		}
	};
}
