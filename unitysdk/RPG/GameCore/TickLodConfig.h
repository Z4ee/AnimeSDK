#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TICKLODCONFIG_METHOD_3_4539F88016B3E011_OFFSET UNITYSDK_OFFSET(0x1789C9E0)
#define RPG_GAMECORE_TICKLODCONFIG_METHOD_3_9C200645AE464E44_OFFSET UNITYSDK_OFFSET(0x1789CA20)
#define RPG_GAMECORE_TICKLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1789CA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodConfig_TypeDefinitionIndex = 17629;

	class TickLodConfig : public ::RPG::GameCore::LodConfig
	{
	public:
		::System::Boolean EnableAnimatorURO; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4539F88016B3E011(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG_METHOD_3_4539F88016B3E011_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C200645AE464E44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG_METHOD_3_9C200645AE464E44_OFFSET))(a1, a2);
		}
	};
}
