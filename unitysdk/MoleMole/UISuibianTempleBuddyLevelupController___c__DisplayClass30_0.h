#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1519B950)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS30_0__ONCLICKMATITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1519B960)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController___c__DisplayClass30_0_TypeDefinitionIndex = 65053;

	class UISuibianTempleBuddyLevelupController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MatAnimation* matAnim; // 0x10
		::UnityEngine::Animation* anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMatItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS30_0__ONCLICKMATITEM_B__0_OFFSET))(this);
		}
	};
}
