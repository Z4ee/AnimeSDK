#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYTALKENABLE_METHOD_3_168325DA3E6DAD3B_OFFSET UNITYSDK_OFFSET(0x1E829A20)
#define RPG_GAMECORE_SETENTITYTALKENABLE_METHOD_3_69B4FF9771DB715C_OFFSET UNITYSDK_OFFSET(0x1E829A60)
#define RPG_GAMECORE_SETENTITYTALKENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E829A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityTalkEnable_TypeDefinitionIndex = 20525;

	class SetEntityTalkEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean EnableTalk; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYTALKENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_168325DA3E6DAD3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityTalkEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityTalkEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYTALKENABLE_METHOD_3_168325DA3E6DAD3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69B4FF9771DB715C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityTalkEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityTalkEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYTALKENABLE_METHOD_3_69B4FF9771DB715C_OFFSET))(a1, a2);
		}
	};
}
