#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_9A09F4503BCBA2AC_OFFSET UNITYSDK_OFFSET(0x1D08D4C0)
#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_AC5B94CC69540EAA_OFFSET UNITYSDK_OFFSET(0x1D08D460)
#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierConfigBase_TypeDefinitionIndex = 19026;

	class FateModifierConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AC5B94CC69540EAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_AC5B94CC69540EAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9A09F4503BCBA2AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_9A09F4503BCBA2AC_OFFSET))(a1, a2);
		}
	};
}
