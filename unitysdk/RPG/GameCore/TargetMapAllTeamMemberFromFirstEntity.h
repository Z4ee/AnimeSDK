#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_529AD20B83CE76CE_OFFSET UNITYSDK_OFFSET(0x177C1EB0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_6E5D9F1828755F1F_OFFSET UNITYSDK_OFFSET(0x177C1E40)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177C1E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAllTeamMemberFromFirstEntity_TypeDefinitionIndex = 22225;

	class TargetMapAllTeamMemberFromFirstEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveUnselectable; // 0x10
		::System::Boolean SelectEnemyTeam; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E5D9F1828755F1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_6E5D9F1828755F1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_529AD20B83CE76CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_METHOD_3_529AD20B83CE76CE_OFFSET))(a1, a2);
		}
	};
}
