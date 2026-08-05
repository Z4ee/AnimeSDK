#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CHARACTERPHOTOCAMERACOMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x134F3FF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterPhotoCameraCommon_TypeDefinitionIndex = 73167;

	class CharacterPhotoCameraCommon : public ::System::Object
	{
	public:
		::System::Int32 AvatarSystemConfigID_PhotoStart; // 0x10
		::System::Int32 AvatarSystemConfigID_PhotoEnd; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERPHOTOCAMERACOMMON__CTOR_OFFSET))(this);
		}
	};
}
