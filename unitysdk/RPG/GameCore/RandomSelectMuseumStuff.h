#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_METHOD_3_300E637437D8F54F_OFFSET UNITYSDK_OFFSET(0x1D386460)
#define RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_METHOD_3_FB7CC1F4E4A833D6_OFFSET UNITYSDK_OFFSET(0x1D386540)
#define RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3864E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectMuseumStuff_TypeDefinitionIndex = 20843;

	class RandomSelectMuseumStuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RandomCount; // 0x18
		::RPG::GameCore::DynamicString* CustomString; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_300E637437D8F54F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectMuseumStuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectMuseumStuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_METHOD_3_300E637437D8F54F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB7CC1F4E4A833D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectMuseumStuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectMuseumStuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_METHOD_3_FB7CC1F4E4A833D6_OFFSET))(a1, a2);
		}
	};
}
