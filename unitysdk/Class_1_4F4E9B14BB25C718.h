#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_1_06CDCC6A0A66BA0A;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_4F4E9B14BB25C718_METHOD_1_17DE5A393EEEC8C7_OFFSET UNITYSDK_OFFSET(0x11388AB0)
#define CLASS_1_4F4E9B14BB25C718_METHOD_1_246D96658EF34B24_OFFSET UNITYSDK_OFFSET(0x113888E0)
#define CLASS_1_4F4E9B14BB25C718__CTOR_OFFSET UNITYSDK_OFFSET(0x11388CC0)

inline static constexpr unsigned int Class_1_4F4E9B14BB25C718_TypeDefinitionIndex = 51017;

class Class_1_4F4E9B14BB25C718 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F4E9B14BB25C718__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_246D96658EF34B24(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_4F4E9B14BB25C718_METHOD_1_246D96658EF34B24_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_341* Method_1_17DE5A393EEEC8C7(::Class_0_16E4307DCC419505_341* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_06CDCC6A0A66BA0A* a3)
	{
		return ((::Class_0_16E4307DCC419505_341*(*)(::PVOID, ::Class_0_16E4307DCC419505_341*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_4F4E9B14BB25C718_METHOD_1_17DE5A393EEEC8C7_OFFSET))(this, a1, a2, a3);
	}
};
