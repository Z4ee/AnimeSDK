#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENTITAS_ENTITASRESOURCES_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1D1C9340)

namespace Entitas
{
	inline static constexpr unsigned int EntitasResources_TypeDefinitionIndex = 9666;

	class EntitasResources : public ::System::Object
	{
	public:
		static ::System::String* GetVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ENTITAS_ENTITASRESOURCES_GETVERSION_OFFSET))();
		}
	};
}
