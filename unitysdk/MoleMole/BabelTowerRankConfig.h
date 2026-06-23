#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BABELTOWERRANKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x126E2CA0)

namespace MoleMole
{
	inline static constexpr unsigned int BabelTowerRankConfig_TypeDefinitionIndex = 75787;

	class BabelTowerRankConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* rankConfig; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* levelUpAnim; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERRANKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
