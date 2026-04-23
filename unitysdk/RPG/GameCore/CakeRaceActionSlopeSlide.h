#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_METHOD_3_07557168107372DD_OFFSET UNITYSDK_OFFSET(0x1876C2E0)
#define RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_METHOD_3_6F968CC3F8074F2B_OFFSET UNITYSDK_OFFSET(0x1876AF00)
#define RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1876AEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionSlopeSlide_TypeDefinitionIndex = 17444;

	class CakeRaceActionSlopeSlide : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07557168107372DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSlopeSlide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSlopeSlide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_METHOD_3_07557168107372DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F968CC3F8074F2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSlopeSlide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSlopeSlide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_METHOD_3_6F968CC3F8074F2B_OFFSET))(a1, a2);
		}
	};
}
