#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BABB143454D17CA6.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7E72B772E0973369_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0x1659CC00)
#define CLASS_1_7E72B772E0973369_METHOD_1_033877C708C46A46_OFFSET UNITYSDK_OFFSET(0x1659CC10)
#define CLASS_1_7E72B772E0973369__CTOR_OFFSET UNITYSDK_OFFSET(0x1659CE40)

inline static constexpr unsigned int Class_1_7E72B772E0973369_TypeDefinitionIndex = 63992;

class Class_1_7E72B772E0973369 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_BABB143454D17CA6, ::RPG::Client::ExpeditionBattleTeam*>* _Teams_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E72B772E0973369__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_BABB143454D17CA6, ::RPG::Client::ExpeditionBattleTeam*>* get_Teams()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_BABB143454D17CA6, ::RPG::Client::ExpeditionBattleTeam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E72B772E0973369_GET_TEAMS_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleTeam* Method_1_033877C708C46A46(::Struct_2_BABB143454D17CA6 a1)
	{
		return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID, ::Struct_2_BABB143454D17CA6))((::PBYTE)hIl2Cpp + CLASS_1_7E72B772E0973369_METHOD_1_033877C708C46A46_OFFSET))(this, a1);
	}
};
