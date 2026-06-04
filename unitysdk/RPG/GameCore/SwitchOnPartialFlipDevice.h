#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_71427885D46E47E4_OFFSET UNITYSDK_OFFSET(0x19CDDB70)
#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_BB98E1280D9A45B8_OFFSET UNITYSDK_OFFSET(0x19CDDA60)
#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDDB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchOnPartialFlipDevice_TypeDefinitionIndex = 21110;

	class SwitchOnPartialFlipDevice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB98E1280D9A45B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchOnPartialFlipDevice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_BB98E1280D9A45B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71427885D46E47E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchOnPartialFlipDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_71427885D46E47E4_OFFSET))(a1, a2);
		}
	};
}
