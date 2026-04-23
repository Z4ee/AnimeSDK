#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AUTOFIGHTVOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186B5FA0)
#define RPG_GAMECORE_AUTOFIGHTVOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186B62A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoFightVORow_TypeDefinitionIndex = 14329;

	class AutoFightVORow : public ::System::Object
	{
	public:
		::System::UInt32 Revived; // 0x10
		::System::UInt32 UltraReady; // 0x14
		::System::UInt32 LightHit; // 0x18
		::System::UInt32 ActionBegin; // 0x1C
		::System::UInt32 ActionBeginHighThreat; // 0x20
		::System::UInt32 StandBy; // 0x24
		::System::UInt32 Mode; // 0x28
		::System::UInt32 ReceiveHealing; // 0x2C
		::System::UInt32 ReceiveBuff; // 0x30
		::System::UInt32 ActionBeginAdvantage; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AutoFightVORow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoFightVORow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
