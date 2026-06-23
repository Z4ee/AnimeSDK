#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADMONSTERSUMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x160E95E0)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadMonsterSummonConfig_TypeDefinitionIndex = 55649;

	class PreloadMonsterSummonConfig : public ::System::Object
	{
	public:
		::System::Int32 monsterId; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* summonIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADMONSTERSUMMONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
