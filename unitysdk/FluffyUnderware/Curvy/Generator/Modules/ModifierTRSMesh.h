#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/TRSModuleBase.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1BB29D00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2A0B0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierTRSMesh_TypeDefinitionIndex = 37430;

	class ModifierTRSMesh : public ::FluffyUnderware::Curvy::Generator::TRSModuleBase
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InVMesh; // 0xE0
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutVMesh; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSMESH__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSMESH_REFRESH_OFFSET))(this);
		}
	};
}
