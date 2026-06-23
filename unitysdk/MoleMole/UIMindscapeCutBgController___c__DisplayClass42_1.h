#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x152F6BE0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS42_1__SETMASKBGSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x152F6BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeCutBgController___c__DisplayClass42_1_TypeDefinitionIndex = 42655;

	class UIMindscapeCutBgController___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* ani; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetMaskBgState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS42_1__SETMASKBGSTATE_B__1_OFFSET))(this);
		}
	};
}
