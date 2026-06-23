#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11082550)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__DISPLAYCLASS24_0__FILTERQTECAMERABASEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x11082560)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfigBase___c__DisplayClass24_0_TypeDefinitionIndex = 68723;

	class CharacterScriptConfigBase___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Type* cameraType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FilterQTECameraBaseInfo_b__0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE___C__DISPLAYCLASS24_0__FILTERQTECAMERABASEINFO_B__0_OFFSET))(this, t);
		}
	};
}
