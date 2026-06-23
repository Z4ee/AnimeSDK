#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROW_HADALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1777CFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRow_HadalConfig_TypeDefinitionIndex = 49954;

	class UIGeneralNewsBubbleRow_HadalConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::UnityEngine::Material*>* rankingMat; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROW_HADALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
