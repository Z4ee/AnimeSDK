#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class LiveHouseSceneAnimatorDataDicEntry; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_LIVEHOUSESCENEANIMATORDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x182F6020)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneAnimatorDataDic_TypeDefinitionIndex = 40771;

	class LiveHouseSceneAnimatorDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::UnityEngine::Animator*, ::MoleMole::LiveHouseSceneAnimatorDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEANIMATORDATADIC__CTOR_OFFSET))(this);
		}
	};
}
