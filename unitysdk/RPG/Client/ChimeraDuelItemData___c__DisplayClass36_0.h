#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELITEMDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE60E0)
#define RPG_CLIENT_CHIMERADUELITEMDATA___C__DISPLAYCLASS36_0___TRYGETFIRSTSKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0xCBE6540)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemData___c__DisplayClass36_0_TypeDefinitionIndex = 63428;

	class ChimeraDuelItemData___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>* predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGetFirstSkillData_b__0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__DISPLAYCLASS36_0___TRYGETFIRSTSKILLDATA_B__0_OFFSET))(this, a1);
		}
	};
}
