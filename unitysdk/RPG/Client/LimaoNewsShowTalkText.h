#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_2756ADFA7CFFC305_OFFSET UNITYSDK_OFFSET(0x193B3050)
#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_63BFD461BAF450D4_OFFSET UNITYSDK_OFFSET(0x193B30D0)
#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193B30A0)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsShowTalkText_TypeDefinitionIndex = 9918;

	class LimaoNewsShowTalkText : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2756ADFA7CFFC305(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsShowTalkText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsShowTalkText*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_2756ADFA7CFFC305_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63BFD461BAF450D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsShowTalkText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsShowTalkText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_63BFD461BAF450D4_OFFSET))(a1, a2);
		}
	};
}
