#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace System { class String; }

#define CLASS_1_85237376E5B0C25A_METHOD_1_37490A1DBF34A304_OFFSET UNITYSDK_OFFSET(0xAF78510)
#define CLASS_1_85237376E5B0C25A_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xAF7A400)
#define CLASS_1_85237376E5B0C25A_METHOD_1_A087797A896B70F3_OFFSET UNITYSDK_OFFSET(0xAF7A2D0)
#define CLASS_1_85237376E5B0C25A_METHOD_1_B3BD374EE2590121_OFFSET UNITYSDK_OFFSET(0xAF7EDD0)
#define CLASS_1_85237376E5B0C25A_METHOD_1_BFDE17936CCF5EE6_OFFSET UNITYSDK_OFFSET(0xAF83840)
#define CLASS_1_85237376E5B0C25A_METHOD_1_C0C41457AE9A0B89_OFFSET UNITYSDK_OFFSET(0xAF7EEC0)

inline static constexpr unsigned int Class_1_85237376E5B0C25A_TypeDefinitionIndex = 69995;

class Class_1_85237376E5B0C25A : public ::System::Object
{
public:
	static ::System::Void Method_1_37490A1DBF34A304(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_37490A1DBF34A304_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A087797A896B70F3(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_A087797A896B70F3_OFFSET))(a1);
	}

	static ::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_489E0B827662C211_OFFSET))();
	}

	static ::System::Void Method_1_B3BD374EE2590121(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_B3BD374EE2590121_OFFSET))(a1);
	}

	static ::System::String* Method_1_C0C41457AE9A0B89()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_C0C41457AE9A0B89_OFFSET))();
	}

	static ::System::String* Method_1_BFDE17936CCF5EE6(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
	{
		return ((::System::String*(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_BFDE17936CCF5EE6_OFFSET))(a1, a2);
	}
};
