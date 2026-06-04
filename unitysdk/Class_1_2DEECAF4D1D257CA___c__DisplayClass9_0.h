#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_2DEECAF4D1D257CA___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7643A0)
#define CLASS_1_2DEECAF4D1D257CA___C__DISPLAYCLASS9_0__HASRETURNTRIALAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xA764490)

inline static constexpr unsigned int Class_1_2DEECAF4D1D257CA___c__DisplayClass9_0_TypeDefinitionIndex = 57879;

class Class_1_2DEECAF4D1D257CA___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasReturnTrialAvatar_b__0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA___C__DISPLAYCLASS9_0__HASRETURNTRIALAVATAR_B__0_OFFSET))(this, a1);
	}
};
