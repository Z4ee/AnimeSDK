#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_SteerTargetType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_STEERTOTARGET_METHOD_4_63D27154DBA92A89_OFFSET UNITYSDK_OFFSET(0x1C2C5490)
#define RPG_GAMECORE_ST_SIDE_STEERTOTARGET_METHOD_4_B49823B0156D6F12_OFFSET UNITYSDK_OFFSET(0x1C2C54D0)
#define RPG_GAMECORE_ST_SIDE_STEERTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C54C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_SteerToTarget_TypeDefinitionIndex = 19333;

	class ST_Side_SteerToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_SteerTargetType TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_STEERTOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_63D27154DBA92A89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SteerToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SteerToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_STEERTOTARGET_METHOD_4_63D27154DBA92A89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B49823B0156D6F12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SteerToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SteerToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_STEERTOTARGET_METHOD_4_B49823B0156D6F12_OFFSET))(a1, a2);
		}
	};
}
