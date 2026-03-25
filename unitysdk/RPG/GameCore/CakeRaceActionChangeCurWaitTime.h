#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_METHOD_3_321A8915806F3C58_OFFSET UNITYSDK_OFFSET(0x170462F0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_METHOD_3_E6CF9C6B10A6CD46_OFFSET UNITYSDK_OFFSET(0x170439C0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x170439A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeCurWaitTime_TypeDefinitionIndex = 16833;

	class CakeRaceActionChangeCurWaitTime : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Int32 Value; // 0x10
		::System::Boolean ClearOnComplete; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_321A8915806F3C58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_METHOD_3_321A8915806F3C58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E6CF9C6B10A6CD46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_METHOD_3_E6CF9C6B10A6CD46_OFFSET))(a1, a2);
		}
	};
}
