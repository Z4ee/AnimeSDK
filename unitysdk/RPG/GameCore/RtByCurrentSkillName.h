#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_2D3FCEB7190A1451_OFFSET UNITYSDK_OFFSET(0x1CCDC710)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_5287FAA60DF53FC4_OFFSET UNITYSDK_OFFSET(0x1CCDC550)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_AA1D9026989E075C_OFFSET UNITYSDK_OFFSET(0x1CCDC770)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_FDBAEA08272BBB3D_OFFSET UNITYSDK_OFFSET(0x1CCDC4B0)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDC510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCurrentSkillName_TypeDefinitionIndex = 23959;

	class RtByCurrentSkillName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SkillName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FDBAEA08272BBB3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_FDBAEA08272BBB3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5287FAA60DF53FC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_5287FAA60DF53FC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2D3FCEB7190A1451(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_2D3FCEB7190A1451_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA1D9026989E075C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_AA1D9026989E075C_OFFSET))(a1, a2);
		}
	};
}
