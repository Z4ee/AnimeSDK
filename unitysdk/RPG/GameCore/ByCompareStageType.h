#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_85A06994B7EE0F76_OFFSET UNITYSDK_OFFSET(0x195340C0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_C095D51C7497E99B_OFFSET UNITYSDK_OFFSET(0x19534040)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_CC249D221517F756_OFFSET UNITYSDK_OFFSET(0x19533EC0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_E36DFD7C7BB65228_OFFSET UNITYSDK_OFFSET(0x19533DF0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19533E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStageType_TypeDefinitionIndex = 21808;

	class ByCompareStageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::StageType CurrentStageType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E36DFD7C7BB65228(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_E36DFD7C7BB65228_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC249D221517F756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_CC249D221517F756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C095D51C7497E99B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_C095D51C7497E99B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85A06994B7EE0F76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_85A06994B7EE0F76_OFFSET))(a1, a2);
		}
	};
}
