#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

namespace RPG::Client { class PlanetFesAvatarData; }

#define CLASS_2_1120B43FB4AA052C_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x1187B120)
#define CLASS_2_1120B43FB4AA052C_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x1187B180)
#define CLASS_2_1120B43FB4AA052C_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1187B1D0)
#define CLASS_2_1120B43FB4AA052C__CTOR_OFFSET UNITYSDK_OFFSET(0x1187B210)
#define CLASS_2_1120B43FB4AA052C__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x1187B130)

inline static constexpr unsigned int Class_2_1120B43FB4AA052C_TypeDefinitionIndex = 54137;

class Class_2_1120B43FB4AA052C : public ::RPG::Client::BasePlanetFesBuff
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1120B43FB4AA052C__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_PercentIncrease()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1120B43FB4AA052C_GET_PERCENTINCREASE_OFFSET))(this);
	}

	::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_1120B43FB4AA052C__ONINITPARAM_OFFSET))(this, a1);
	}

	::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_1120B43FB4AA052C_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
	}

	::System::Boolean IsTriggered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1120B43FB4AA052C_ISTRIGGERED_OFFSET))(this);
	}
};
