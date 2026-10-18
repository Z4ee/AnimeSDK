#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

namespace RPG::Client { class PlanetFesAvatarData; }

#define CLASS_2_6AA318838448B5D2_1_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0xB204620)
#define CLASS_2_6AA318838448B5D2_1_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0xB2046C0)
#define CLASS_2_6AA318838448B5D2_1_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB204710)
#define CLASS_2_6AA318838448B5D2_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB204750)
#define CLASS_2_6AA318838448B5D2_1__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0xB204660)

inline static constexpr unsigned int Class_2_6AA318838448B5D2_1_TypeDefinitionIndex = 66542;

class Class_2_6AA318838448B5D2_1 : public ::RPG::Client::BasePlanetFesBuff
{
public:
	::System::UInt32 AJNJFAGOAEK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_PercentIncrease()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_1_GET_PERCENTINCREASE_OFFSET))(this);
	}

	::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_1__ONINITPARAM_OFFSET))(this, a1);
	}

	::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_1_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
	}

	::System::Boolean IsTriggered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_1_ISTRIGGERED_OFFSET))(this);
	}
};
