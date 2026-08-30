#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1E5450B0)
#define RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E545010)
#define RPG_GAMECORE_ROGUEOPTIONTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E545070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueOptionTalkInfo_TypeDefinitionIndex = 20870;

	class RogueOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::System::UInt32 RogueOptionID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEOPTIONTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueOptionTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueOptionTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEOPTIONTALKINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
