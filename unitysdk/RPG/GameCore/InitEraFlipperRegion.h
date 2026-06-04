#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INITERAFLIPPERREGION_METHOD_3_1B2E1B16386B3E5B_OFFSET UNITYSDK_OFFSET(0x1984FE90)
#define RPG_GAMECORE_INITERAFLIPPERREGION_METHOD_3_3E11595DBB3014FD_OFFSET UNITYSDK_OFFSET(0x1984FE10)
#define RPG_GAMECORE_INITERAFLIPPERREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1984FE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitEraFlipperRegion_TypeDefinitionIndex = 21102;

	class InitEraFlipperRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RegionID; // 0x18
		::RPG::GameCore::EraStateType EaraState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITERAFLIPPERREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E11595DBB3014FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitEraFlipperRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitEraFlipperRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITERAFLIPPERREGION_METHOD_3_3E11595DBB3014FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B2E1B16386B3E5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitEraFlipperRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitEraFlipperRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITERAFLIPPERREGION_METHOD_3_1B2E1B16386B3E5B_OFFSET))(a1, a2);
		}
	};
}
