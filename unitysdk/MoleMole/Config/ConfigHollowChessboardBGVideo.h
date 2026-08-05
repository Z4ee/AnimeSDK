#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IConfigChangeBGVideo; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDBGVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1170A160)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardBGVideo_TypeDefinitionIndex = 57716;

	class ConfigHollowChessboardBGVideo : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::MoleMole::Config::IConfigChangeBGVideo* ConfigChangeBgVideo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDBGVIDEO__CTOR_OFFSET))(this);
		}
	};
}
