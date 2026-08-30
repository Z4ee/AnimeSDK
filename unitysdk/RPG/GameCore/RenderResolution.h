#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RENDERRESOLUTION_METHOD_2_2804F2607FBE516E_OFFSET UNITYSDK_OFFSET(0x1D3A0DD0)
#define RPG_GAMECORE_RENDERRESOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderResolution_TypeDefinitionIndex = 18051;

	class RenderResolution : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERRESOLUTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2804F2607FBE516E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RenderResolution*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RenderResolution*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERRESOLUTION_METHOD_2_2804F2607FBE516E_OFFSET))(a1, a2);
		}
	};
}
