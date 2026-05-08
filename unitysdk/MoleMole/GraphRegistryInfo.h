#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GRAPHREGISTRYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x125CEA10)

namespace MoleMole
{
	inline static constexpr unsigned int GraphRegistryInfo_TypeDefinitionIndex = 69635;

	class GraphRegistryInfo : public ::System::Object
	{
	public:
		::System::String* registryName; // 0x10
		::Foundation::AssetPath graphPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHREGISTRYINFO__CTOR_OFFSET))(this);
		}
	};
}
