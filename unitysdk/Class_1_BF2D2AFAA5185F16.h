#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_760;
class Class_0_16E4307DCC419505_765;
class Class_0_16E4307DCC419505_767;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class UpgradeAvatarProxy; }

#define CLASS_1_BF2D2AFAA5185F16_METHOD_1_27D1068003514B00_OFFSET UNITYSDK_OFFSET(0x15F1E3C0)
#define CLASS_1_BF2D2AFAA5185F16__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1E330)

inline static constexpr unsigned int Class_1_BF2D2AFAA5185F16_TypeDefinitionIndex = 60085;

class Class_1_BF2D2AFAA5185F16 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_765* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_767* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_765* a1, ::Class_0_16E4307DCC419505_767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_765*, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + CLASS_1_BF2D2AFAA5185F16__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::UpgradeAvatarProxy* Method_1_27D1068003514B00(::RPG::AvatarSystem::IAvatar* a1, ::Class_0_16E4307DCC419505_760* a2)
	{
		return ((::RPG::Client::UpgradeAvatarProxy*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_0_16E4307DCC419505_760*))((::PBYTE)hIl2Cpp + CLASS_1_BF2D2AFAA5185F16_METHOD_1_27D1068003514B00_OFFSET))(this, a1, a2);
	}
};
