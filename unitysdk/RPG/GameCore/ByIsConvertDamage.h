#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_2D6B44385D8B2DC4_OFFSET UNITYSDK_OFFSET(0x1CD9A320)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_66B8DAF8943AF645_OFFSET UNITYSDK_OFFSET(0x1CD9A350)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_7A69B11D65C9CB7A_OFFSET UNITYSDK_OFFSET(0x1CD9A1E0)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_93BFABDCEBBB7A71_OFFSET UNITYSDK_OFFSET(0x1CD9A1A0)
#define RPG_GAMECORE_BYISCONVERTDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9A1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsConvertDamage_TypeDefinitionIndex = 23228;

	class ByIsConvertDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_93BFABDCEBBB7A71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsConvertDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsConvertDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_93BFABDCEBBB7A71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A69B11D65C9CB7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_7A69B11D65C9CB7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2D6B44385D8B2DC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_2D6B44385D8B2DC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_66B8DAF8943AF645(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_66B8DAF8943AF645_OFFSET))(a1, a2);
		}
	};
}
