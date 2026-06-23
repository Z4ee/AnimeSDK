#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1574CBA0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS36_0__PLAYBGUNLOCKANI_B__0_OFFSET UNITYSDK_OFFSET(0x1574CBB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeCutBgController___c__DisplayClass36_0_TypeDefinitionIndex = 42656;

	class UIMindscapeCutBgController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* ani; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBgUnLockAni_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS36_0__PLAYBGUNLOCKANI_B__0_OFFSET))(this);
		}
	};
}
