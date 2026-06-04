#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_5346EA3B7DB2F439_OFFSET UNITYSDK_OFFSET(0x19561680)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_6209C75F8344BFCC_OFFSET UNITYSDK_OFFSET(0x195618D0)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_B9C5056E6E0F4C77_OFFSET UNITYSDK_OFFSET(0x19561750)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_DCB5DF9B4A8994D5_OFFSET UNITYSDK_OFFSET(0x19561950)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x19561700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEnableNegativeHP_TypeDefinitionIndex = 22417;

	class ByIsEnableNegativeHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5346EA3B7DB2F439(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnableNegativeHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnableNegativeHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_5346EA3B7DB2F439_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9C5056E6E0F4C77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_B9C5056E6E0F4C77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6209C75F8344BFCC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_6209C75F8344BFCC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DCB5DF9B4A8994D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_METHOD_4_DCB5DF9B4A8994D5_OFFSET))(a1, a2);
		}
	};
}
