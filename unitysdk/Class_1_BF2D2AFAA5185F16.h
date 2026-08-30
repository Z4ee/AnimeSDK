#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_800;
class Class_0_16E4307DCC419505_804;
class Class_0_16E4307DCC419505_806;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class UpgradeAvatarProxy; }

#define CLASS_1_BF2D2AFAA5185F16_METHOD_1_27D1068003514B00_OFFSET UNITYSDK_OFFSET(0x15CFE610)
#define CLASS_1_BF2D2AFAA5185F16__CTOR_OFFSET UNITYSDK_OFFSET(0x15CFE580)

inline static constexpr unsigned int Class_1_BF2D2AFAA5185F16_TypeDefinitionIndex = 62931;

class Class_1_BF2D2AFAA5185F16 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_804* MLOBHABHCGB; // 0x10
	::Class_0_16E4307DCC419505_806* AMKEOCMECDM; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_804* a1, ::Class_0_16E4307DCC419505_806* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_804*, ::Class_0_16E4307DCC419505_806*))((::PBYTE)hIl2Cpp + CLASS_1_BF2D2AFAA5185F16__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::UpgradeAvatarProxy* Method_1_27D1068003514B00(::RPG::AvatarSystem::IAvatar* a1, ::Class_0_16E4307DCC419505_800* a2)
	{
		return ((::RPG::Client::UpgradeAvatarProxy*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_0_16E4307DCC419505_800*))((::PBYTE)hIl2Cpp + CLASS_1_BF2D2AFAA5185F16_METHOD_1_27D1068003514B00_OFFSET))(this, a1, a2);
	}
};
