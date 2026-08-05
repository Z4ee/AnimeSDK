#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGGENERALICONBADGECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47C640)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGeneralIconBadgeColor_TypeDefinitionIndex = 54464;

	class ConfigGeneralIconBadgeColor : public ::System::Object
	{
	public:
		::System::String* desc; // 0x10
		::System::String* icon; // 0x18
		::UnityEngine::Color color; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGENERALICONBADGECOLOR__CTOR_OFFSET))(this);
		}
	};
}
