#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ItemRarityBgColor; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ITEMRARITYCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x14186030)

namespace MoleMole
{
	inline static constexpr unsigned int ItemRarityConfigs_TypeDefinitionIndex = 57624;

	class ItemRarityConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ItemRarityBgColor*>* ItemRarityBgColors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMRARITYCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
