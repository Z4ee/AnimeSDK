#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA_METHOD_2_6DF4151C4CD65A0D_OFFSET UNITYSDK_OFFSET(0x198A1F10)
#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x198A20E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSmartObjectSlotData_TypeDefinitionIndex = 17949;

	class LittleGameSmartObjectSlotData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEntityType UserTag; // 0x10
		::RPG::GameCore::LittleGameSmartObjectSlotGroup Group; // 0x14
		::RPG::MVector3 LocalPosition; // 0x18
		::RPG::MVector3 LocalRotation; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6DF4151C4CD65A0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameSmartObjectSlotData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameSmartObjectSlotData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA_METHOD_2_6DF4151C4CD65A0D_OFFSET))(a1, a2);
		}
	};
}
