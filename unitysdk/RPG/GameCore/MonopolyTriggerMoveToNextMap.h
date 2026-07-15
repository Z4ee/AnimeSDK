#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_100524A6C5EF0A96_OFFSET UNITYSDK_OFFSET(0x1B1C1640)
#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_D77ABD3D52FDF1D3_OFFSET UNITYSDK_OFFSET(0x1B1C1710)
#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C1700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyTriggerMoveToNextMap_TypeDefinitionIndex = 20149;

	class MonopolyTriggerMoveToNextMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_100524A6C5EF0A96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_100524A6C5EF0A96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D77ABD3D52FDF1D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_D77ABD3D52FDF1D3_OFFSET))(a1, a2);
		}
	};
}
