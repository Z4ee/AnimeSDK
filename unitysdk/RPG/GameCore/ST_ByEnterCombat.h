#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_25C3F5D23C7869B9_OFFSET UNITYSDK_OFFSET(0x1B77B6E0)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_6E2E1379F517CB18_OFFSET UNITYSDK_OFFSET(0x1B77B6B0)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_78062A5994BC399D_OFFSET UNITYSDK_OFFSET(0x1B77B530)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_DF058C859678E4DE_OFFSET UNITYSDK_OFFSET(0x1B77B570)
#define RPG_GAMECORE_ST_BYENTERCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77B560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByEnterCombat_TypeDefinitionIndex = 19317;

	class ST_ByEnterCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_78062A5994BC399D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByEnterCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByEnterCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_78062A5994BC399D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF058C859678E4DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_DF058C859678E4DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E2E1379F517CB18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_6E2E1379F517CB18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25C3F5D23C7869B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_25C3F5D23C7869B9_OFFSET))(a1, a2);
		}
	};
}
