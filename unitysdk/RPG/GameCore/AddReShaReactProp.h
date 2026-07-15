#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_6FC47CF8DDBD1F9C_OFFSET UNITYSDK_OFFSET(0x1BE09980)
#define RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_74D7B50FA42428B4_OFFSET UNITYSDK_OFFSET(0x1BE09A00)
#define RPG_GAMECORE_ADDRESHAREACTPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE099D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaReactProp_TypeDefinitionIndex = 21225;

	class AddReShaReactProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FC47CF8DDBD1F9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaReactProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaReactProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_6FC47CF8DDBD1F9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74D7B50FA42428B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaReactProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaReactProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP_METHOD_3_74D7B50FA42428B4_OFFSET))(a1, a2);
		}
	};
}
