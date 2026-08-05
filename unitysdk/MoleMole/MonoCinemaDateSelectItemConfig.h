#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOCINEMADATESELECTITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCEA60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaDateSelectItemConfig_TypeDefinitionIndex = 85895;

	class MonoCinemaDateSelectItemConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* optionDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMADATESELECTITEMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
