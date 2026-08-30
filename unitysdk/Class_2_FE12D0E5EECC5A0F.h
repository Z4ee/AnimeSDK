#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F620E8D05780B0E8.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_FE12D0E5EECC5A0F_METHOD_2_BF784B097B30C74F_OFFSET UNITYSDK_OFFSET(0x18DB2480)
#define CLASS_2_FE12D0E5EECC5A0F__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB24D0)

inline static constexpr unsigned int Class_2_FE12D0E5EECC5A0F_TypeDefinitionIndex = 65251;

class Class_2_FE12D0E5EECC5A0F : public ::Class_1_F620E8D05780B0E8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE12D0E5EECC5A0F__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_BF784B097B30C74F(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FE12D0E5EECC5A0F_METHOD_2_BF784B097B30C74F_OFFSET))(this, a1);
	}
};
