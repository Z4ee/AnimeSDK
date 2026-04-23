#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18D578D0)
#define RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D57830)
#define RPG_GAMECORE_ROGUEOPTIONTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18D57890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueOptionTalkInfo_TypeDefinitionIndex = 20090;

	class RogueOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::System::UInt32 RogueOptionID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEOPTIONTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueOptionTalkInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueOptionTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueOptionTalkInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
