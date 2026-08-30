#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETALKINFO_METHOD_2_EA8FA1687D32DA4F_OFFSET UNITYSDK_OFFSET(0x1D4117C0)
#define RPG_GAMECORE_ROGUETALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D411900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkInfo_TypeDefinitionIndex = 20865;

	class RogueTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::Single TextSpeed; // 0x14
		::System::UInt32 TalkBgID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EA8FA1687D32DA4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKINFO_METHOD_2_EA8FA1687D32DA4F_OFFSET))(a1, a2);
		}
	};
}
