#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_METHOD_3_3E5860E7847E9929_OFFSET UNITYSDK_OFFSET(0x1CF70B20)
#define RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_METHOD_3_6513AE5AA7B88754_OFFSET UNITYSDK_OFFSET(0x1CF70A80)
#define RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF70B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionToiletTransfer_TypeDefinitionIndex = 18129;

	class CakeRaceActionToiletTransfer : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6513AE5AA7B88754(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionToiletTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionToiletTransfer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_METHOD_3_6513AE5AA7B88754_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E5860E7847E9929(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionToiletTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionToiletTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_METHOD_3_3E5860E7847E9929_OFFSET))(a1, a2);
		}
	};
}
