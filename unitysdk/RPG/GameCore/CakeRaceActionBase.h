#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_7826B614D7BCA881_OFFSET UNITYSDK_OFFSET(0x1CDD2D20)
#define RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_C01912DEA5DCFAF5_OFFSET UNITYSDK_OFFSET(0x1CDD2D60)
#define RPG_GAMECORE_CAKERACEACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD2B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionBase_TypeDefinitionIndex = 18117;

	class CakeRaceActionBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7826B614D7BCA881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_7826B614D7BCA881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C01912DEA5DCFAF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_C01912DEA5DCFAF5_OFFSET))(a1, a2);
		}
	};
}
