#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD20DE0)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__DISPLAYCLASS0_0___TRYGETFIRSTSKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0xBD21190)

namespace RPG::Client
{
	inline static constexpr unsigned int IChimeraDuelLevelDataExtensions___c__DisplayClass0_0_TypeDefinitionIndex = 59286;

	class IChimeraDuelLevelDataExtensions___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>* predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGetFirstSkillData_b__0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__DISPLAYCLASS0_0___TRYGETFIRSTSKILLDATA_B__0_OFFSET))(this, a1);
		}
	};
}
