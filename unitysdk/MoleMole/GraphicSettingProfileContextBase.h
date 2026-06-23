#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GRAPHICSETTINGPROFILECONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E81670)

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileContextBase_TypeDefinitionIndex = 71243;

	class GraphicSettingProfileContextBase : public ::System::Object
	{
	public:
		::System::Single PowerCost; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILECONTEXTBASE__CTOR_OFFSET))(this);
		}
	};
}
