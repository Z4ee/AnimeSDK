#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1DF55570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF555A0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int DebugVMesh_TypeDefinitionIndex = 38835;

	class DebugVMesh : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InData; // 0xB8
		::System::Boolean ShowVertices; // 0xC0
		::System::Boolean ShowVertexID; // 0xC1
		::System::Boolean ShowUV; // 0xC2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVMESH__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVMESH_RESET_OFFSET))(this);
		}
	};
}
