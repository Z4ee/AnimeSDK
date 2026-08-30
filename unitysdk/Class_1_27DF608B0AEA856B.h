#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_A19B9FA10333DE11;
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_27DF608B0AEA856B_METHOD_1_B049C2B413C9BAA6_OFFSET UNITYSDK_OFFSET(0x1613E0D0)
#define CLASS_1_27DF608B0AEA856B__CTOR_OFFSET UNITYSDK_OFFSET(0x1613E040)

inline static constexpr unsigned int Class_1_27DF608B0AEA856B_TypeDefinitionIndex = 65200;

class Class_1_27DF608B0AEA856B : public ::System::Object
{
public:
	::Class_1_A19B9FA10333DE11* IGBMGBIDHOD; // 0x10
	::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_27DF608B0AEA856B__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_758* Method_1_B049C2B413C9BAA6(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_27DF608B0AEA856B_METHOD_1_B049C2B413C9BAA6_OFFSET))(this, a1);
	}
};
