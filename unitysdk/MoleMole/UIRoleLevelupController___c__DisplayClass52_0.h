#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E1ED90)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__DISPLAYCLASS52_0__ONMATITEMCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x12E1EDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleLevelupController___c__DisplayClass52_0_TypeDefinitionIndex = 46209;

	class UIRoleLevelupController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MatAnimation* matAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnMatItemChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__DISPLAYCLASS52_0__ONMATITEMCHANGED_B__0_OFFSET))(this);
		}
	};
}
