#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
class Class_1_AC56FA381B2C219F;
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_27DF608B0AEA856B_METHOD_1_B049C2B413C9BAA6_OFFSET UNITYSDK_OFFSET(0xB160940)
#define CLASS_1_27DF608B0AEA856B__CTOR_OFFSET UNITYSDK_OFFSET(0xB1608B0)

inline static constexpr unsigned int Class_1_27DF608B0AEA856B_TypeDefinitionIndex = 65140;

class Class_1_27DF608B0AEA856B : public ::System::Object
{
public:
	::Class_1_AC56FA381B2C219F* IGBMGBIDHOD; // 0x10
	::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_27DF608B0AEA856B__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_855* Method_1_B049C2B413C9BAA6(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_855*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_27DF608B0AEA856B_METHOD_1_B049C2B413C9BAA6_OFFSET))(this, a1);
	}
};
