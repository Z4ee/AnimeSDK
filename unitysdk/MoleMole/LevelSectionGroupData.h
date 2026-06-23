#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class LevelSectionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LEVELSECTIONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFA840)

namespace MoleMole
{
	inline static constexpr unsigned int LevelSectionGroupData_TypeDefinitionIndex = 46415;

	class LevelSectionGroupData : public ::System::Object
	{
	public:
		::System::String* beginSectionName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelSectionData*>* levelSectionDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSECTIONGROUPDATA__CTOR_OFFSET))(this);
		}
	};
}
