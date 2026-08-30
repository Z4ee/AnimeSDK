#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_0D004210BAA09704_OFFSET UNITYSDK_OFFSET(0x15D410)
#define RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_1C8EA29F932BA1DA_OFFSET UNITYSDK_OFFSET(0x15D4B0)
#define RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x15D530)
#define RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x15D5A0)
#define RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x15D4C0)
#define RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_FDF65392AA9DFE9F_OFFSET UNITYSDK_OFFSET(0xE7E7B00)

namespace RPG::Rendering
{
	inline static constexpr unsigned int SDFAtlasLayout_TypeDefinitionIndex = 52088;

	struct alignas(4) SDFAtlasLayout
	{
		::System::Int32 sliceWidth; // 0x10
		::System::Int32 sliceHeight; // 0x14
		::System::Int32 depth; // 0x18
		::System::Int32 tilesPerRow; // 0x1C
		::System::Int32 tilesPerColumn; // 0x20
		::System::Int32 atlasWidth; // 0x24
		::System::Int32 atlasHeight; // 0x28

		static ::RPG::Rendering::SDFAtlasLayout Method_2_FDF65392AA9DFE9F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Rendering::SDFAtlasLayout(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_FDF65392AA9DFE9F_OFFSET))(a1, a2, a3);
		}

		/*
		::UnityEngine::Vector2Int Method_2_0D004210BAA09704(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_0D004210BAA09704_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector2 Method_2_1C8EA29F932BA1DA(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_1C8EA29F932BA1DA_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
		}
		*/

		::System::Boolean Method_2_568AE7A1499723FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_568AE7A1499723FD_OFFSET))(this);
		}

		::System::Void Method_2_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
		}
	};
}
