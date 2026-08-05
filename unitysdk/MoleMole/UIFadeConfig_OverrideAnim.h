#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICtrlEnum; }
namespace System { class String; }

#define MOLEMOLE_UIFADECONFIG_OVERRIDEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB6330)

namespace MoleMole
{
	inline static constexpr unsigned int UIFadeConfig_OverrideAnim_TypeDefinitionIndex = 81287;

	class UIFadeConfig_OverrideAnim : public ::System::Object
	{
	public:
		::MoleMole::UICtrlEnum* CtrlEnum; // 0x10
		::System::String* animName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG_OVERRIDEANIM__CTOR_OFFSET))(this);
		}
	};
}
