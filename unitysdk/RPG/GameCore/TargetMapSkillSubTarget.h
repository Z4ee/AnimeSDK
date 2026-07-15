#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_2E55F38823849978_OFFSET UNITYSDK_OFFSET(0x1D0C37C0)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_35BD0D3AC78C5412_OFFSET UNITYSDK_OFFSET(0x1D0C38A0)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_56D0FA57948E7E9F_OFFSET UNITYSDK_OFFSET(0x1D0C38C0)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_D7F09573111D055D_OFFSET UNITYSDK_OFFSET(0x1D0C3840)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C3830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillSubTarget_TypeDefinitionIndex = 23172;

	class TargetMapSkillSubTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E55F38823849978(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillSubTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillSubTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_2E55F38823849978_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7F09573111D055D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_D7F09573111D055D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35BD0D3AC78C5412(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_35BD0D3AC78C5412_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_56D0FA57948E7E9F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_METHOD_3_56D0FA57948E7E9F_OFFSET))(a1, a2);
		}
	};
}
