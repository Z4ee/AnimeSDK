#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_7FAC92942103F342_OFFSET UNITYSDK_OFFSET(0x1B9E37F0)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_A21E28B548A4224F_OFFSET UNITYSDK_OFFSET(0x1B9E37B0)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_B0831A8246B287B4_OFFSET UNITYSDK_OFFSET(0x1B9E3960)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_CF4913875A376DDB_OFFSET UNITYSDK_OFFSET(0x1B9E3990)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E37E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ByComparePlanetFesEventProgressLeft_TypeDefinitionIndex = 9961;

	class ByComparePlanetFesEventProgressLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 LeftProgress; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A21E28B548A4224F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_A21E28B548A4224F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7FAC92942103F342(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_7FAC92942103F342_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B0831A8246B287B4(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_B0831A8246B287B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF4913875A376DDB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_CF4913875A376DDB_OFFSET))(a1, a2);
		}
	};
}
