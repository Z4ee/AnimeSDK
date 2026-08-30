#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_25977F324ED2ED3B_OFFSET UNITYSDK_OFFSET(0x1CD4CD80)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_4F6192B10094B463_OFFSET UNITYSDK_OFFSET(0x1CD4E420)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_5DA2D9B7E4DD5CC0_OFFSET UNITYSDK_OFFSET(0x1CD4E560)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_945AAE43F452E1F0_OFFSET UNITYSDK_OFFSET(0x1CD4F070)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4F380)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGamePredicateConfig_TypeDefinitionIndex = 10340;

	class LittleGamePredicateConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_25977F324ED2ED3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_25977F324ED2ED3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F6192B10094B463(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_4F6192B10094B463_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5DA2D9B7E4DD5CC0(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_5DA2D9B7E4DD5CC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_945AAE43F452E1F0(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_945AAE43F452E1F0_OFFSET))(a1, a2);
		}
	};
}
