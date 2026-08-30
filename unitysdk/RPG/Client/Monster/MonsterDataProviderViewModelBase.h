#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE_GET_ISSHOWWAVEINDEX_OFFSET UNITYSDK_OFFSET(0x19608B10)
#define RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19608B50)

namespace RPG::Client::Monster
{
	inline static constexpr unsigned int MonsterDataProviderViewModelBase_TypeDefinitionIndex = 78928;

	class MonsterDataProviderViewModelBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowWaveIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE_GET_ISSHOWWAVEINDEX_OFFSET))(this);
		}
	};
}
