#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_METHOD_2_624105AE8EA76FA2_OFFSET UNITYSDK_OFFSET(0x1AE74690)
#define RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_METHOD_2_F48D35FAF57FD14F_OFFSET UNITYSDK_OFFSET(0x1AE74970)
#define RPG_GAMECORE_ALLEYBASEGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE74960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyBaseGridItemData_TypeDefinitionIndex = 15064;

	class AlleyBaseGridItemData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PosX; // 0x10
		::System::UInt32 PosY; // 0x14
		::System::UInt32 GridID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBASEGRIDITEMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_624105AE8EA76FA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyBaseGridItemData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyBaseGridItemData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_METHOD_2_624105AE8EA76FA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F48D35FAF57FD14F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyBaseGridItemData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_METHOD_2_F48D35FAF57FD14F_OFFSET))(a1, a2);
		}
	};
}
