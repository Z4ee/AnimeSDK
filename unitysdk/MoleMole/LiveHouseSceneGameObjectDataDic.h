#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class LiveHouseSceneGameObjectDataDicEntry; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x13027150)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneGameObjectDataDic_TypeDefinitionIndex = 55968;

	class LiveHouseSceneGameObjectDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::UnityEngine::GameObject*, ::MoleMole::LiveHouseSceneGameObjectDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
