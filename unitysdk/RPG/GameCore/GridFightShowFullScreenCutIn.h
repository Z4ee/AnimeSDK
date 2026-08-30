#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightShowFullScreenCutInType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_METHOD_3_3FAF1D783BE1F4BF_OFFSET UNITYSDK_OFFSET(0x1D1671F0)
#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_METHOD_3_EA0EC48B19180F5E_OFFSET UNITYSDK_OFFSET(0x1D167230)
#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D167220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowFullScreenCutIn_TypeDefinitionIndex = 22972;

	class GridFightShowFullScreenCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightShowFullScreenCutInType CutInType; // 0x18
		::System::String* TraitKey; // 0x20
		::RPG::GameCore::DynamicFloat* TraitLv; // 0x28
		::System::String* OverrideImagePath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FAF1D783BE1F4BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowFullScreenCutIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowFullScreenCutIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_METHOD_3_3FAF1D783BE1F4BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA0EC48B19180F5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowFullScreenCutIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowFullScreenCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_METHOD_3_EA0EC48B19180F5E_OFFSET))(a1, a2);
		}
	};
}
