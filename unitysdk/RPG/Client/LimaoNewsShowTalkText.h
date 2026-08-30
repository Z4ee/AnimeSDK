#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_63BFD461BAF450D4_OFFSET UNITYSDK_OFFSET(0x1D309DD0)
#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_CA732C78F0426F2F_OFFSET UNITYSDK_OFFSET(0x1D309D90)
#define RPG_CLIENT_LIMAONEWSSHOWTALKTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D309DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsShowTalkText_TypeDefinitionIndex = 10220;

	class LimaoNewsShowTalkText : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA732C78F0426F2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsShowTalkText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsShowTalkText*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_CA732C78F0426F2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63BFD461BAF450D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsShowTalkText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsShowTalkText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSSHOWTALKTEXT_METHOD_4_63BFD461BAF450D4_OFFSET))(a1, a2);
		}
	};
}
