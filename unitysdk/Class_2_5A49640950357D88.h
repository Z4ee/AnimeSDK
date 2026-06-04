#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A85708757A0277D.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_5A49640950357D88_METHOD_2_56D7C60E441F4AB9_OFFSET UNITYSDK_OFFSET(0x13966600)
#define CLASS_2_5A49640950357D88__CTOR_OFFSET UNITYSDK_OFFSET(0x13966650)

inline static constexpr unsigned int Class_2_5A49640950357D88_TypeDefinitionIndex = 60952;

class Class_2_5A49640950357D88 : public ::Class_1_5A85708757A0277D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A49640950357D88__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_56D7C60E441F4AB9(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_5A49640950357D88_METHOD_2_56D7C60E441F4AB9_OFFSET))(this, a1);
	}
};
