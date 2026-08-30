#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_METHOD_4_9AACDC1FB46922D1_OFFSET UNITYSDK_OFFSET(0x1D22F2E0)
#define RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_METHOD_4_D6FCACBD5F36A079_OFFSET UNITYSDK_OFFSET(0x1D22F280)
#define RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22F2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCheckSealLevel_TypeDefinitionIndex = 16700;

	class MarbleByCheckSealLevel : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::UInt32 Level; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6FCACBD5F36A079(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckSealLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckSealLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_METHOD_4_D6FCACBD5F36A079_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9AACDC1FB46922D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckSealLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckSealLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_METHOD_4_9AACDC1FB46922D1_OFFSET))(a1, a2);
		}
	};
}
