#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_206061BDD2876D3A_OFFSET UNITYSDK_OFFSET(0x1D5B21F0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_245AD0DC6BED970D_OFFSET UNITYSDK_OFFSET(0x1D5B2070)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_529AD20B83CE76CE_OFFSET UNITYSDK_OFFSET(0x1D5B20B0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_9766DF78F2BF7C8F_OFFSET UNITYSDK_OFFSET(0x1D5B2220)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B20A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAllTeamMemberFromFirstEntity_TypeDefinitionIndex = 23673;

	class TargetMapAllTeamMemberFromFirstEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveUnselectable; // 0x10
		::System::Boolean SelectEnemyTeam; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_245AD0DC6BED970D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_245AD0DC6BED970D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_529AD20B83CE76CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_529AD20B83CE76CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_206061BDD2876D3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_206061BDD2876D3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9766DF78F2BF7C8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_9766DF78F2BF7C8F_OFFSET))(a1, a2);
		}
	};
}
