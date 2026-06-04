#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_56ED75563FA6925A_OFFSET UNITYSDK_OFFSET(0x19411970)
#define RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_74D7B50FA42428B4_OFFSET UNITYSDK_OFFSET(0x19411AC0)
#define RPG_GAMECORE_ADDRESHAREACTPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x19411A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaReactProp_TypeDefinitionIndex = 20810;

	class AddReShaReactProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56ED75563FA6925A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaReactProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaReactProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_56ED75563FA6925A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74D7B50FA42428B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaReactProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaReactProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_74D7B50FA42428B4_OFFSET))(a1, a2);
		}
	};
}
