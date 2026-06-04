#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_0DE4E977057C907F_OFFSET UNITYSDK_OFFSET(0x199A5290)
#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_D77ABD3D52FDF1D3_OFFSET UNITYSDK_OFFSET(0x199A53A0)
#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x199A5370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyTriggerMoveToNextMap_TypeDefinitionIndex = 19789;

	class MonopolyTriggerMoveToNextMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DE4E977057C907F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_0DE4E977057C907F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D77ABD3D52FDF1D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_METHOD_3_D77ABD3D52FDF1D3_OFFSET))(a1, a2);
		}
	};
}
