#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AniamtorParamsSetting; }

#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE__CTOR_OFFSET UNITYSDK_OFFSET(0x186ADBB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCounterstroke_TypeDefinitionIndex = 52908;

	class ConfigCounterstroke : public ::System::Object
	{
	public:
		::MoleMole::AniamtorParamsSetting* CounterstrokeAniamtorParams; // 0x10
		::System::Int32 CounterstrokeRBL; // 0x18
		::System::Int32 Priority; // 0x1C
		::System::Single CounterstrokeDis; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE__CTOR_OFFSET))(this);
		}
	};
}
