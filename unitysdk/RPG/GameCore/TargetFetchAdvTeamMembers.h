#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_63315671B3CEEEAD_OFFSET UNITYSDK_OFFSET(0x1E16B270)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_AE730C307F962D20_OFFSET UNITYSDK_OFFSET(0x1E16B2D0)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_CEAF4E83136B70C8_OFFSET UNITYSDK_OFFSET(0x1E16B1F0)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_E10DDCFA89EA846D_OFFSET UNITYSDK_OFFSET(0x1E16B2F0)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16B260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvTeamMembers_TypeDefinitionIndex = 23591;

	class TargetFetchAdvTeamMembers : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CEAF4E83136B70C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamMembers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_CEAF4E83136B70C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63315671B3CEEEAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_63315671B3CEEEAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE730C307F962D20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_AE730C307F962D20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E10DDCFA89EA846D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_METHOD_4_E10DDCFA89EA846D_OFFSET))(a1, a2);
		}
	};
}
