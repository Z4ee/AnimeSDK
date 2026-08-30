#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_19729582A8E13A85_OFFSET UNITYSDK_OFFSET(0x1CEF7420)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_43E801D84E66D8C2_OFFSET UNITYSDK_OFFSET(0x1CEF7450)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_5F1B96F3F38B38A6_OFFSET UNITYSDK_OFFSET(0x1CEF7270)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_AAE8F6BC6B5510F7_OFFSET UNITYSDK_OFFSET(0x1CEF7230)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF7260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueMode_TypeDefinitionIndex = 22804;

	class ByCompareRogueMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::RogueMode RogueMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AAE8F6BC6B5510F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_AAE8F6BC6B5510F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F1B96F3F38B38A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_5F1B96F3F38B38A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19729582A8E13A85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_19729582A8E13A85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43E801D84E66D8C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_43E801D84E66D8C2_OFFSET))(a1, a2);
		}
	};
}
