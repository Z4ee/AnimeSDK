#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_348;
class Class_1_06CDCC6A0A66BA0A;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_DB992AD35C032A5C_METHOD_1_69A54399DF813FC5_OFFSET UNITYSDK_OFFSET(0xA2E6640)
#define CLASS_1_DB992AD35C032A5C_METHOD_1_8164AB5D3C0F15EF_OFFSET UNITYSDK_OFFSET(0xA2E66C0)
#define CLASS_1_DB992AD35C032A5C__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E67C0)

inline static constexpr unsigned int Class_1_DB992AD35C032A5C_TypeDefinitionIndex = 57897;

class Class_1_DB992AD35C032A5C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB992AD35C032A5C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_69A54399DF813FC5(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_DB992AD35C032A5C_METHOD_1_69A54399DF813FC5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_348* Method_1_8164AB5D3C0F15EF(::Class_0_16E4307DCC419505_348* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_06CDCC6A0A66BA0A* a3)
	{
		return ((::Class_0_16E4307DCC419505_348*(*)(::PVOID, ::Class_0_16E4307DCC419505_348*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_DB992AD35C032A5C_METHOD_1_8164AB5D3C0F15EF_OFFSET))(this, a1, a2, a3);
	}
};
