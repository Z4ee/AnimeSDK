#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class LightOverrideShowSetting; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B1E0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSetting_TypeDefinitionIndex = 74182;

	class SkinOverrideShowSetting : public ::System::Object
	{
	public:
		::MoleMole::LightOverrideShowSetting* LightOverrideShowSetting; // 0x10
		::System::UInt32 SkinID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
