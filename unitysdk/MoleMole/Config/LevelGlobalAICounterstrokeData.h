#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_LEVELGLOBALAICOUNTERSTROKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11033FF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAICounterstrokeData_TypeDefinitionIndex = 52081;

	class LevelGlobalAICounterstrokeData : public ::System::Object
	{
	public:
		::System::Single AICounterstrokeCD; // 0x10
		::System::Single MinBeHitCountDown; // 0x14
		::System::Single MaxBeHitCountDown; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAICOUNTERSTROKEDATA__CTOR_OFFSET))(this);
		}
	};
}
