#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

namespace RPG::Client { class PlanetFesAvatarData; }

#define CLASS_2_3DFF5C387A6EF199_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x142756E0)
#define CLASS_2_3DFF5C387A6EF199_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x14275740)
#define CLASS_2_3DFF5C387A6EF199_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x14275790)
#define CLASS_2_3DFF5C387A6EF199__CTOR_OFFSET UNITYSDK_OFFSET(0x142757D0)
#define CLASS_2_3DFF5C387A6EF199__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x142756F0)

inline static constexpr unsigned int Class_2_3DFF5C387A6EF199_TypeDefinitionIndex = 62222;

class Class_2_3DFF5C387A6EF199 : public ::RPG::Client::BasePlanetFesBuff
{
public:
	::Il2CppArray<::System::UInt32>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DFF5C387A6EF199__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_PercentIncrease()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DFF5C387A6EF199_GET_PERCENTINCREASE_OFFSET))(this);
	}

	::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_3DFF5C387A6EF199__ONINITPARAM_OFFSET))(this, a1);
	}

	::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_3DFF5C387A6EF199_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
	}

	::System::Boolean IsTriggered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DFF5C387A6EF199_ISTRIGGERED_OFFSET))(this);
	}
};
