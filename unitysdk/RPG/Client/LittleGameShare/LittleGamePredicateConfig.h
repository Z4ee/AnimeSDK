#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_1184CBB4A9BE1646_OFFSET UNITYSDK_OFFSET(0x193B31F0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_4F6192B10094B463_OFFSET UNITYSDK_OFFSET(0x193B4E20)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_A5C49084393F456C_OFFSET UNITYSDK_OFFSET(0x193B5EB0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_FC9DCC174BCB2987_OFFSET UNITYSDK_OFFSET(0x193B4F60)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x193B6000)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGamePredicateConfig_TypeDefinitionIndex = 9989;

	class LittleGamePredicateConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1184CBB4A9BE1646(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_1184CBB4A9BE1646_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F6192B10094B463(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_4F6192B10094B463_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC9DCC174BCB2987(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_FC9DCC174BCB2987_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A5C49084393F456C(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_A5C49084393F456C_OFFSET))(a1, a2);
		}
	};
}
