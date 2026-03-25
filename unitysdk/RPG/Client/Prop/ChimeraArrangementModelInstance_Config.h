#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA031C30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelInstance_Config_TypeDefinitionIndex = 63910;

	class ChimeraArrangementModelInstance_Config : public ::System::Object
	{
	public:
		::System::Single DitherAlpha; // 0x10
		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* SwapMotion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
