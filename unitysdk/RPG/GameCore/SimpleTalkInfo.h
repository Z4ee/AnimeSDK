#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TextMotionTyperType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SIMPLETALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17709440)
#define RPG_GAMECORE_SIMPLETALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17709630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkInfo_TypeDefinitionIndex = 22433;

	class SimpleTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TextSpeed; // 0x10
		::System::UInt32 TalkSentenceID; // 0x14
		::System::Single ProtectTime; // 0x18
		::System::Single ForceToNextTime; // 0x1C
		::RPG::GameCore::TextMotionTyperType TyperType; // 0x20
		::System::Boolean ProtectByVoice; // 0x24
		::System::Boolean ForceToNextOnProtectEnd; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SimpleTalkInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
