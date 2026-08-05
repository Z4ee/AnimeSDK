#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RoleRarityIconItemConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ROLERARITYICONCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1809CA10)

namespace MoleMole
{
	inline static constexpr unsigned int RoleRarityIconConfigs_TypeDefinitionIndex = 60330;

	class RoleRarityIconConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::RoleRarityIconItemConfig*>* IconItemConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROLERARITYICONCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
