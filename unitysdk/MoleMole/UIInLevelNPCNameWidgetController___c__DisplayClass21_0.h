#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelNPCNameWidgetController__AnimRunState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9E760)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS21_0___PLAYANIMATIONWITHSAMPLE_B__0_OFFSET UNITYSDK_OFFSET(0x16F9E770)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 61986;

	class UIInLevelNPCNameWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* clipName; // 0x10
		::UnityEngine::Animation* animation; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Animation*, ::MoleMole::UIInLevelNPCNameWidgetController__AnimRunState>* runStateAnim; // 0x20
		::System::Boolean loop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayAnimationWithSample_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER___C__DISPLAYCLASS21_0___PLAYANIMATIONWITHSAMPLE_B__0_OFFSET))(this);
		}
	};
}
