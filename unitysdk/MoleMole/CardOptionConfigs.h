#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CardOptionBgColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CARDOPTIONCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x12401680)

namespace MoleMole
{
	inline static constexpr unsigned int CardOptionConfigs_TypeDefinitionIndex = 50784;

	class CardOptionConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CardOptionBgColor*>* CardOptionBgColors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CARDOPTIONCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
