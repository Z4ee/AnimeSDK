#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CardOptionRarityBgColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CARDOPTIONRARITYCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16292110)

namespace MoleMole
{
	inline static constexpr unsigned int CardOptionRarityConfigs_TypeDefinitionIndex = 62803;

	class CardOptionRarityConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CardOptionRarityBgColor*>* CardOptionBgColors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CARDOPTIONRARITYCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
