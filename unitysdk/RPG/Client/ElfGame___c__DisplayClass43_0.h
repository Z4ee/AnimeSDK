#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }

#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA23ACE0)
#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS43_0___TRYAPPLYBLEND_B__0_OFFSET UNITYSDK_OFFSET(0xA23CAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfGame___c__DisplayClass43_0_TypeDefinitionIndex = 58689;

	class ElfGame___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineBrain* brain; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryApplyBlend_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS43_0___TRYAPPLYBLEND_B__0_OFFSET))(this);
		}
	};
}
