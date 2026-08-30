#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_7A30098FA5390EF9_OFFSET UNITYSDK_OFFSET(0x1CD4AAC0)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_93CC1C55289CA958_OFFSET UNITYSDK_OFFSET(0x1CD4AA90)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_9CDA0203E4D9959E_OFFSET UNITYSDK_OFFSET(0x1CD4A950)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_C3088E9A8E772E5D_OFFSET UNITYSDK_OFFSET(0x1CD4A910)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4A940)

namespace RPG::Client
{
	inline static constexpr unsigned int ByIsPlanetFesBusinessDayFinished_TypeDefinitionIndex = 10261;

	class ByIsPlanetFesBusinessDayFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C3088E9A8E772E5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_C3088E9A8E772E5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CDA0203E4D9959E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_9CDA0203E4D9959E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_93CC1C55289CA958(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_93CC1C55289CA958_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A30098FA5390EF9(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_7A30098FA5390EF9_OFFSET))(a1, a2);
		}
	};
}
