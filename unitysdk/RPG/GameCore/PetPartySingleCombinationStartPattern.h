#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN_METHOD_2_45DD601063AF865D_OFFSET UNITYSDK_OFFSET(0x1D90ADB0)
#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90AF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySingleCombinationStartPattern_TypeDefinitionIndex = 17547;

	class PetPartySingleCombinationStartPattern : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::System::Single MinIntervalSeconds; // 0x14
		::System::Single MaxIntervalSeconds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_45DD601063AF865D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartySingleCombinationStartPattern*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartySingleCombinationStartPattern*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONSTARTPATTERN_METHOD_2_45DD601063AF865D_OFFSET))(a1, a2);
		}
	};
}
