#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_13.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MemberData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADVENTURECHARACTERHPREFRESHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19653700)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureCharacterHPRefreshParam_TypeDefinitionIndex = 68118;

	class AdventureCharacterHPRefreshParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MemberData*, ::RPG::GameCore::FixPoint>>* ChangeList; // 0x10
		::System::Single ChangeRatio; // 0x18
		::System::Boolean TriggerCommonEffect; // 0x1C
		::System::Boolean Overflow; // 0x1D
		::Enum_3_71AA90D596A09AC8_13 Reason; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTURECHARACTERHPREFRESHPARAM__CTOR_OFFSET))(this);
		}
	};
}
