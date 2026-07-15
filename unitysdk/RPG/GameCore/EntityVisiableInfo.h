#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYVISIABLEINFO_METHOD_2_92512B14B844A479_OFFSET UNITYSDK_OFFSET(0x1C057DC0)
#define RPG_GAMECORE_ENTITYVISIABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C057EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityVisiableInfo_TypeDefinitionIndex = 21047;

	class EntityVisiableInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupNPCID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYVISIABLEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_92512B14B844A479(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityVisiableInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityVisiableInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYVISIABLEINFO_METHOD_2_92512B14B844A479_OFFSET))(a1, a2);
		}
	};
}
