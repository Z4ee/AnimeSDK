#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace System { class String; }

#define CLASS_1_F783AE939752A97D_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xC2CB4A0)
#define CLASS_1_F783AE939752A97D_METHOD_1_A087797A896B70F3_OFFSET UNITYSDK_OFFSET(0xC2CB370)
#define CLASS_1_F783AE939752A97D_METHOD_1_ABD6123E48134045_OFFSET UNITYSDK_OFFSET(0xC2C9530)
#define CLASS_1_F783AE939752A97D_METHOD_1_B3BD374EE2590121_OFFSET UNITYSDK_OFFSET(0xC2D0090)
#define CLASS_1_F783AE939752A97D_METHOD_1_C0C41457AE9A0B89_OFFSET UNITYSDK_OFFSET(0xC2D01A0)
#define CLASS_1_F783AE939752A97D_METHOD_1_FC97B6D2116E2F3B_OFFSET UNITYSDK_OFFSET(0xC2D4D40)

inline static constexpr unsigned int Class_1_F783AE939752A97D_TypeDefinitionIndex = 75124;

class Class_1_F783AE939752A97D : public ::System::Object
{
public:
	static ::System::Void Method_1_ABD6123E48134045(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F783AE939752A97D_METHOD_1_ABD6123E48134045_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A087797A896B70F3(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F783AE939752A97D_METHOD_1_A087797A896B70F3_OFFSET))(a1);
	}

	static ::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F783AE939752A97D_METHOD_1_489E0B827662C211_OFFSET))();
	}

	static ::System::Void Method_1_B3BD374EE2590121(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F783AE939752A97D_METHOD_1_B3BD374EE2590121_OFFSET))(a1);
	}

	static ::System::String* Method_1_C0C41457AE9A0B89()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F783AE939752A97D_METHOD_1_C0C41457AE9A0B89_OFFSET))();
	}

	static ::System::String* Method_1_FC97B6D2116E2F3B(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
	{
		return ((::System::String*(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F783AE939752A97D_METHOD_1_FC97B6D2116E2F3B_OFFSET))(a1, a2);
	}
};
