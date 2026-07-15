#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_METHOD_3_1D6E923E5A5A5477_OFFSET UNITYSDK_OFFSET(0x1B43A160)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_METHOD_3_AFC55B1B16743E1A_OFFSET UNITYSDK_OFFSET(0x1B43A980)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43A150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefFloorCustomFloat_TypeDefinitionIndex = 16824;

	class SwitchRefFloorCustomFloat : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AFC55B1B16743E1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorCustomFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorCustomFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_METHOD_3_AFC55B1B16743E1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D6E923E5A5A5477(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_METHOD_3_1D6E923E5A5A5477_OFFSET))(a1, a2);
		}
	};
}
