#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_0DF9EE681003664F_OFFSET UNITYSDK_OFFSET(0x1CDC8510)
#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_923A04971001C573_OFFSET UNITYSDK_OFFSET(0x1CDC86D0)
#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_D16A088D7B21E4E6_OFFSET UNITYSDK_OFFSET(0x1CDC84D0)
#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_F907E371DCF94B85_OFFSET UNITYSDK_OFFSET(0x1CDC8700)
#define RPG_GAMECORE_BYTARGETLISTALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC8500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListAll_TypeDefinitionIndex = 23525;

	class ByTargetListAll : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D16A088D7B21E4E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAll*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAll*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_D16A088D7B21E4E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DF9EE681003664F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_0DF9EE681003664F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_923A04971001C573(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_923A04971001C573_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F907E371DCF94B85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_F907E371DCF94B85_OFFSET))(a1, a2);
		}
	};
}
