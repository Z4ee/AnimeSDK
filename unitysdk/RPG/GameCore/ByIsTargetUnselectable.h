#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_1E496DCCA55219CF_OFFSET UNITYSDK_OFFSET(0x1CDB0820)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_6C84D86401A6B7F3_OFFSET UNITYSDK_OFFSET(0x1CDB09E0)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_D352B73ECE9E3E05_OFFSET UNITYSDK_OFFSET(0x1CDB0A10)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_E1B987F210709866_OFFSET UNITYSDK_OFFSET(0x1CDB07E0)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB0810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetUnselectable_TypeDefinitionIndex = 23260;

	class ByIsTargetUnselectable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E1B987F210709866(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_E1B987F210709866_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E496DCCA55219CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_1E496DCCA55219CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C84D86401A6B7F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_6C84D86401A6B7F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D352B73ECE9E3E05(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_METHOD_4_D352B73ECE9E3E05_OFFSET))(a1, a2);
		}
	};
}
