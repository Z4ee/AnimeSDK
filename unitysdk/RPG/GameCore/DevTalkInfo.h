#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEVTALKINFO_METHOD_2_1BD0C0DC0C858228_OFFSET UNITYSDK_OFFSET(0x17155870)
#define RPG_GAMECORE_DEVTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x171559F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DevTalkInfo_TypeDefinitionIndex = 19436;

	class DevTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TalkSentenceNameString; // 0x10
		::System::String* TalkSentenceString; // 0x18
		::System::Single ProtectTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1BD0C0DC0C858228(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DevTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DevTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVTALKINFO_METHOD_2_1BD0C0DC0C858228_OFFSET))(a1, a2);
		}
	};
}
