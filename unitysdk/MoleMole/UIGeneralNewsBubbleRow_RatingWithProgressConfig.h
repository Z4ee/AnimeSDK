#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class MonoUIColorCollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROW_RATINGWITHPROGRESSCONFIG_SETRATINGPROGRESSCOLOR_OFFSET UNITYSDK_OFFSET(0x177EC940)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROW_RATINGWITHPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177ECA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRow_RatingWithProgressConfig_TypeDefinitionIndex = 75228;

	class UIGeneralNewsBubbleRow_RatingWithProgressConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::MoleMole::MonoUIColorCollection*>* rankingColor; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROW_RATINGWITHPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void SetRatingProgressColor(::MoleMole::Level::RatingType rating)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROW_RATINGWITHPROGRESSCONFIG_SETRATINGPROGRESSCOLOR_OFFSET))(this, rating);
		}
	};
}
