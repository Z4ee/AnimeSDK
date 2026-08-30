#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Rendering/SDFAtlasLayout.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xE7E7FC0)
#define RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xE7E7F50)
#define RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_9B4A2421E38298E7_OFFSET UNITYSDK_OFFSET(0xE7E7ED0)
#define RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_9BA7B23B5B374828_OFFSET UNITYSDK_OFFSET(0xE7E7E60)
#define RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_A39E0A664391984C_OFFSET UNITYSDK_OFFSET(0xE7E7D90)
#define RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0xE7E8AF0)
#define RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xE7E8D50)
#define RPG_RENDERING_SDFBOUNDSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE7E8DF0)

namespace RPG::Rendering
{
	inline static constexpr unsigned int SDFBoundsData_TypeDefinitionIndex = 52090;

	class SDFBoundsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Vector3 localToVolumeScale; // 0x18
		::UnityEngine::Vector3 localToVolumeAdd; // 0x24
		::UnityEngine::Vector3Int resolution; // 0x30
		::System::Single voxelSize; // 0x3C
		::System::Int32 sliceWidth; // 0x40
		::System::Int32 sliceHeight; // 0x44
		::System::Int32 depth; // 0x48
		::System::Int32 tilesPerRow; // 0x4C
		::System::Int32 tilesPerColumn; // 0x50
		::System::Int32 atlasWidth; // 0x54
		::System::Int32 atlasHeight; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds Method_3_A39E0A664391984C()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_A39E0A664391984C_OFFSET))(this);
		}

		::RPG::Rendering::SDFAtlasLayout Method_3_9BA7B23B5B374828()
		{
			return ((::RPG::Rendering::SDFAtlasLayout(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_9BA7B23B5B374828_OFFSET))(this);
		}

		::System::Void Method_3_9B4A2421E38298E7(::RPG::Rendering::SDFAtlasLayout a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Rendering::SDFAtlasLayout))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_9B4A2421E38298E7_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_568AE7A1499723FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_568AE7A1499723FD_OFFSET))(this);
		}

		::System::Void Method_3_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Boolean Method_3_D58849E1895DD394()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_D58849E1895DD394_OFFSET))(this);
		}

		::System::Boolean Method_3_DFF98536D8B4074F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_METHOD_3_DFF98536D8B4074F_OFFSET))(this);
		}
	};
}
