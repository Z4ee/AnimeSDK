#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_71427885D46E47E4_OFFSET UNITYSDK_OFFSET(0x1E151680)
#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_DE4F60914E299861_OFFSET UNITYSDK_OFFSET(0x1E1515B0)
#define RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E151670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchOnPartialFlipDevice_TypeDefinitionIndex = 22088;

	class SwitchOnPartialFlipDevice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE4F60914E299861(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchOnPartialFlipDevice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_DE4F60914E299861_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71427885D46E47E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchOnPartialFlipDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHONPARTIALFLIPDEVICE_METHOD_3_71427885D46E47E4_OFFSET))(a1, a2);
		}
	};
}
