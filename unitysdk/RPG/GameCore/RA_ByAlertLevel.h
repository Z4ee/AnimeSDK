#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_1A723752AAB50AA0_OFFSET UNITYSDK_OFFSET(0x1B9AD8B0)
#define RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_51801E32AA615D17_OFFSET UNITYSDK_OFFSET(0x1B9AD880)
#define RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_75447B606F521C5D_OFFSET UNITYSDK_OFFSET(0x1B9AD700)
#define RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_BC9F0EC923B2FA78_OFFSET UNITYSDK_OFFSET(0x1B9AD6C0)
#define RPG_GAMECORE_RA_BYALERTLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AD6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAlertLevel_TypeDefinitionIndex = 19272;

	class RA_ByAlertLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC9F0EC923B2FA78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_BC9F0EC923B2FA78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_75447B606F521C5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_75447B606F521C5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_51801E32AA615D17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_51801E32AA615D17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A723752AAB50AA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_1A723752AAB50AA0_OFFSET))(a1, a2);
		}
	};
}
