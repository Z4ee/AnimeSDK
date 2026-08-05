#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimatorParamsSetting; }

#define MOLEMOLE_GALGAMEFACIALSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17905200)

namespace MoleMole
{
	inline static constexpr unsigned int GalGameFacialSetting_TypeDefinitionIndex = 52034;

	class GalGameFacialSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarAnimatorParamsSetting* animatorParamSetting; // 0x10
		::System::Boolean canWink; // 0x18
		::System::Boolean forceWinkAtStart; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEFACIALSETTING__CTOR_OFFSET))(this);
		}
	};
}
