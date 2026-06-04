#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BUFFCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194EF410)
#define RPG_GAMECORE_BUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194EF530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BuffConfig_TypeDefinitionIndex = 12437;

	class BuffConfig : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 BuffID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUFFCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
