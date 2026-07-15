#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_719;
class Class_1_AC56FA381B2C219F;
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_27DF608B0AEA856B_METHOD_1_B049C2B413C9BAA6_OFFSET UNITYSDK_OFFSET(0x181956F0)
#define CLASS_1_27DF608B0AEA856B__CTOR_OFFSET UNITYSDK_OFFSET(0x18195660)

inline static constexpr unsigned int Class_1_27DF608B0AEA856B_TypeDefinitionIndex = 62215;

class Class_1_27DF608B0AEA856B : public ::System::Object
{
public:
	::RPG::Client::GridFightRole* Field_1_0; // 0x10
	::Class_1_AC56FA381B2C219F* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_27DF608B0AEA856B__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_719* Method_1_B049C2B413C9BAA6(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_27DF608B0AEA856B_METHOD_1_B049C2B413C9BAA6_OFFSET))(this, a1);
	}
};
