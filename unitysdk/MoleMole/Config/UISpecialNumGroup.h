#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_UISPECIALNUMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56A4B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UISpecialNumGroup_TypeDefinitionIndex = 90998;

	class UISpecialNumGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* UIStringSpecialNumDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* UIBoolSpecialNumDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* UIListIntSpecialNumDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* UIFloatSpecialNumDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* UIVector3SpecialNumDict; // 0x30
		::System::String* UIScriptableAnimationKey; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* UIIntSpecialNumDict; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* UIListCellSpecialNumDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* UICurveSpecialNumDict; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UISPECIALNUMGROUP__CTOR_OFFSET))(this);
		}
	};
}
