#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ONAGER_FXMESH_FXMESHSETTINGS_POLARCOORDS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC010)
#define ONAGER_FXMESH_FXMESHSETTINGS_POLARCOORDS__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace Onager::FXMesh
{
	inline static constexpr unsigned int FXMeshSettings_PolarCoords_TypeDefinitionIndex = 36447;

	struct alignas(4) FXMeshSettings_PolarCoords
	{
		::System::Int32 ring; // 0x10
		::System::Int32 loop; // 0x14

		::System::Void _ctor(::System::Int32 ring, ::System::Int32 theta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_POLARCOORDS__CTOR_OFFSET))(this, ring, theta);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_POLARCOORDS_TOSTRING_OFFSET))(this);
		}
	};
}
