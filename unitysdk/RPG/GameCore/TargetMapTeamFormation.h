#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_1A21DD68B97D0FCB_OFFSET UNITYSDK_OFFSET(0x1D5B5A90)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_A3E74E2F822CB2F9_OFFSET UNITYSDK_OFFSET(0x1D5B5AF0)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_AFCC9E7ACF634EEA_OFFSET UNITYSDK_OFFSET(0x1D5B59F0)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_F43CE39E1C56ED3D_OFFSET UNITYSDK_OFFSET(0x1D5B5B30)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapTeamFormation_TypeDefinitionIndex = 23680;

	class TargetMapTeamFormation : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AFCC9E7ACF634EEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_AFCC9E7ACF634EEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A21DD68B97D0FCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_1A21DD68B97D0FCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3E74E2F822CB2F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_A3E74E2F822CB2F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F43CE39E1C56ED3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_METHOD_3_F43CE39E1C56ED3D_OFFSET))(a1, a2);
		}
	};
}
