#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_1B37D6C51D9FE809_OFFSET UNITYSDK_OFFSET(0x1CF50BE0)
#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_8CDC38791FADB5C0_OFFSET UNITYSDK_OFFSET(0x1CF50A60)
#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_9FAE2967260A1280_OFFSET UNITYSDK_OFFSET(0x1CF50C10)
#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_A8202CAC86D4EF53_OFFSET UNITYSDK_OFFSET(0x1CF50AA0)
#define RPG_GAMECORE_BYLEVELLOSECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF50A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLevelLoseCheck_TypeDefinitionIndex = 23170;

	class ByLevelLoseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8CDC38791FADB5C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_8CDC38791FADB5C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8202CAC86D4EF53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_A8202CAC86D4EF53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B37D6C51D9FE809(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_1B37D6C51D9FE809_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FAE2967260A1280(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_9FAE2967260A1280_OFFSET))(a1, a2);
		}
	};
}
