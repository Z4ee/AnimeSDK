#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_METHOD_3_8A04627268CEE2A0_OFFSET UNITYSDK_OFFSET(0x1D58C460)
#define RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_METHOD_3_9AF5A991A716BB33_OFFSET UNITYSDK_OFFSET(0x1D58C4A0)
#define RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58C490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotAddPickupCount_TypeDefinitionIndex = 21750;

	class SwitchMascotAddPickupCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AddCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A04627268CEE2A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotAddPickupCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotAddPickupCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_METHOD_3_8A04627268CEE2A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9AF5A991A716BB33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotAddPickupCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotAddPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_METHOD_3_9AF5A991A716BB33_OFFSET))(a1, a2);
		}
	};
}
