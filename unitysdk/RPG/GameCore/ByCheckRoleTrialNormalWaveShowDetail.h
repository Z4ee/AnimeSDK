#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_0438A98F1F910F57_OFFSET UNITYSDK_OFFSET(0x19500410)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_282756C45E005363_OFFSET UNITYSDK_OFFSET(0x19500490)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_5EB87B24F76B931C_OFFSET UNITYSDK_OFFSET(0x195002D0)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_C36952305592DB56_OFFSET UNITYSDK_OFFSET(0x19500200)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19500280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckRoleTrialNormalWaveShowDetail_TypeDefinitionIndex = 21785;

	class ByCheckRoleTrialNormalWaveShowDetail : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C36952305592DB56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_C36952305592DB56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5EB87B24F76B931C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_5EB87B24F76B931C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0438A98F1F910F57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_0438A98F1F910F57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_282756C45E005363(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_282756C45E005363_OFFSET))(a1, a2);
		}
	};
}
