#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_METHOD_3_690B58B131793C45_OFFSET UNITYSDK_OFFSET(0x1876A870)
#define RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_METHOD_3_F23E432A1DE224A3_OFFSET UNITYSDK_OFFSET(0x1876C140)
#define RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1876A850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionOverrideBaseWaitTime_TypeDefinitionIndex = 17434;

	class CakeRaceActionOverrideBaseWaitTime : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 MinWaitTime; // 0x10
		::System::UInt32 MaxWaitTime; // 0x14
		::System::Int32 BaseWaitAdd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F23E432A1DE224A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_METHOD_3_F23E432A1DE224A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_690B58B131793C45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_METHOD_3_690B58B131793C45_OFFSET))(a1, a2);
		}
	};
}
