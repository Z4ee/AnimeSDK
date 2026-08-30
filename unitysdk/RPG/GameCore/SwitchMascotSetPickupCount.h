#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHMASCOTSETPICKUPCOUNT_METHOD_3_758357D4720ED77D_OFFSET UNITYSDK_OFFSET(0x1D58D990)
#define RPG_GAMECORE_SWITCHMASCOTSETPICKUPCOUNT_METHOD_3_F34F23710F3C41BE_OFFSET UNITYSDK_OFFSET(0x1D58D9D0)
#define RPG_GAMECORE_SWITCHMASCOTSETPICKUPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58D9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotSetPickupCount_TypeDefinitionIndex = 21749;

	class SwitchMascotSetPickupCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SetCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETPICKUPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_758357D4720ED77D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotSetPickupCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotSetPickupCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETPICKUPCOUNT_METHOD_3_758357D4720ED77D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F34F23710F3C41BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotSetPickupCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotSetPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETPICKUPCOUNT_METHOD_3_F34F23710F3C41BE_OFFSET))(a1, a2);
		}
	};
}
