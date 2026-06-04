#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_88571254E3AA38DE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13567C50)
#define CLASS_1_88571254E3AA38DE___C__DISPLAYCLASS1_0__PREFERTRUE_B__0_OFFSET UNITYSDK_OFFSET(0x13568400)

inline static constexpr unsigned int Class_1_88571254E3AA38DE___c__DisplayClass1_0_TypeDefinitionIndex = 58753;

class Class_1_88571254E3AA38DE___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>* isTrue; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88571254E3AA38DE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _PreferTrue_b__0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_88571254E3AA38DE___C__DISPLAYCLASS1_0__PREFERTRUE_B__0_OFFSET))(this, a1, a2);
	}
};
