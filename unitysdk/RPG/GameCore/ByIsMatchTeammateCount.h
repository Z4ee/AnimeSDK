#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeammateCountType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_361C9DF326070109_OFFSET UNITYSDK_OFFSET(0x1B29F700)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_5EE233099D404824_OFFSET UNITYSDK_OFFSET(0x1B29F4D0)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_8A2E038ADEDEB1A6_OFFSET UNITYSDK_OFFSET(0x1B29F740)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_D538136C86468979_OFFSET UNITYSDK_OFFSET(0x1B29F480)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29F4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMatchTeammateCount_TypeDefinitionIndex = 22206;

	class ByIsMatchTeammateCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x20
		::RPG::GameCore::TeammateCountType CountType; // 0x24
		::System::Boolean IgnoreServant; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D538136C86468979(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMatchTeammateCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMatchTeammateCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_D538136C86468979_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5EE233099D404824(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_5EE233099D404824_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_361C9DF326070109(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_361C9DF326070109_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A2E038ADEDEB1A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_8A2E038ADEDEB1A6_OFFSET))(a1, a2);
		}
	};
}
