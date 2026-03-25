#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LOCKHP_METHOD_3_40BC8C1901D751FE_OFFSET UNITYSDK_OFFSET(0x1736B050)
#define RPG_GAMECORE_LOCKHP_METHOD_3_7EE24B2C8B1500BD_OFFSET UNITYSDK_OFFSET(0x1736B0E0)
#define RPG_GAMECORE_LOCKHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1736B0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockHP_TypeDefinitionIndex = 21858;

	class LockHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LockHPStrength Strength; // 0x18
		::RPG::GameCore::DynamicFloat* Threshold; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40BC8C1901D751FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKHP_METHOD_3_40BC8C1901D751FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7EE24B2C8B1500BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKHP_METHOD_3_7EE24B2C8B1500BD_OFFSET))(a1, a2);
		}
	};
}
