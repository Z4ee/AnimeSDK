#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { struct Enum; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_ENUMEXT_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1B2D0ED0)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int EnumExt_TypeDefinitionIndex = 25912;

	class EnumExt : public ::System::Object
	{
	public:
		static ::System::Boolean HasFlag(::System::Enum* variable, ::Il2CppArray<::System::Enum*>* flags)
		{
			return ((::System::Boolean(*)(::System::Enum*, ::Il2CppArray<::System::Enum*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_ENUMEXT_HASFLAG_OFFSET))(variable, flags);
		}
	};
}
