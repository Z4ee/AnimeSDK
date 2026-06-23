#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGRASTERIZEDPATH_RESET_OFFSET UNITYSDK_OFFSET(0x1E88B680)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGRASTERIZEDPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88B6A0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int DebugRasterizedPath_TypeDefinitionIndex = 39000;

	class DebugRasterizedPath : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPath; // 0xB8
		::System::Boolean ShowNormals; // 0xC0
		::System::Boolean ShowOrientation; // 0xC1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGRASTERIZEDPATH__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGRASTERIZEDPATH_RESET_OFFSET))(this);
		}
	};
}
