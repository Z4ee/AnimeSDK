#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_09C6DFF233966578_OFFSET UNITYSDK_OFFSET(0x1875E1D0)
#define RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_F3DEF6BA0C7ADF0E_OFFSET UNITYSDK_OFFSET(0x1875E2A0)
#define RPG_GAMECORE_BYRANDOMCHANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1875E250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRandomChance_TypeDefinitionIndex = 21912;

	class ByRandomChance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Chance; // 0x20
		::System::String* LogComment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09C6DFF233966578(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_09C6DFF233966578_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3DEF6BA0C7ADF0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_F3DEF6BA0C7ADF0E_OFFSET))(a1, a2);
		}
	};
}
