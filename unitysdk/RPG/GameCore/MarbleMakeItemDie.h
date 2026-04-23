#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_9F7A5747BE63354B_OFFSET UNITYSDK_OFFSET(0x18A9E920)
#define RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_E1E81ABE3DB72680_OFFSET UNITYSDK_OFFSET(0x18A9EA00)
#define RPG_GAMECORE_MARBLEMAKEITEMDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMakeItemDie_TypeDefinitionIndex = 15964;

	class MarbleMakeItemDie : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F7A5747BE63354B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMakeItemDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMakeItemDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_9F7A5747BE63354B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1E81ABE3DB72680(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMakeItemDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMakeItemDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_E1E81ABE3DB72680_OFFSET))(a1, a2);
		}
	};
}
