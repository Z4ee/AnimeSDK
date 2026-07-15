#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEADVENTITYIGNOREAIRSHIPCARCOLLISION_METHOD_3_EC0D9354F38E0731_OFFSET UNITYSDK_OFFSET(0x1BB3EDB0)
#define RPG_GAMECORE_ENABLEADVENTITYIGNOREAIRSHIPCARCOLLISION_METHOD_3_FCB50F090A9D605D_OFFSET UNITYSDK_OFFSET(0x1BB3ED10)
#define RPG_GAMECORE_ENABLEADVENTITYIGNOREAIRSHIPCARCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB3ED70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableAdvEntityIgnoreAirshipCarCollision_TypeDefinitionIndex = 20163;

	class EnableAdvEntityIgnoreAirshipCarCollision : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Ignore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYIGNOREAIRSHIPCARCOLLISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FCB50F090A9D605D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYIGNOREAIRSHIPCARCOLLISION_METHOD_3_FCB50F090A9D605D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC0D9354F38E0731(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYIGNOREAIRSHIPCARCOLLISION_METHOD_3_EC0D9354F38E0731_OFFSET))(a1, a2);
		}
	};
}
