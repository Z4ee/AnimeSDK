#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXENTITLEMENTSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE1180)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxEntitlementsExtension_TypeDefinitionIndex = 8598;

	class XboxEntitlementsExtension : public ::System::Object
	{
	public:
		::System::String* collectionsId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXENTITLEMENTSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
