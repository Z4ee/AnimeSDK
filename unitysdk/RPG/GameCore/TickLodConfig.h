#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TICKLODCONFIG_METHOD_3_9B9EBB86D7E13330_OFFSET UNITYSDK_OFFSET(0x1E1D57B0)
#define RPG_GAMECORE_TICKLODCONFIG_METHOD_3_CB78FA788E6E9A7D_OFFSET UNITYSDK_OFFSET(0x1E1D5770)
#define RPG_GAMECORE_TICKLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D57A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodConfig_TypeDefinitionIndex = 18975;

	class TickLodConfig : public ::RPG::GameCore::LodConfig
	{
	public:
		::System::Boolean EnableAnimatorURO; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB78FA788E6E9A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG_METHOD_3_CB78FA788E6E9A7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B9EBB86D7E13330(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG_METHOD_3_9B9EBB86D7E13330_OFFSET))(a1, a2);
		}
	};
}
