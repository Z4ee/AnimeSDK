#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F620E8D05780B0E8.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_CAB973834C8DA1C4_METHOD_2_AA81D6C0B58433F0_OFFSET UNITYSDK_OFFSET(0x156ADA50)
#define CLASS_2_CAB973834C8DA1C4__CTOR_OFFSET UNITYSDK_OFFSET(0x156ADAA0)

inline static constexpr unsigned int Class_2_CAB973834C8DA1C4_TypeDefinitionIndex = 65250;

class Class_2_CAB973834C8DA1C4 : public ::Class_1_F620E8D05780B0E8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB973834C8DA1C4__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_AA81D6C0B58433F0(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_CAB973834C8DA1C4_METHOD_2_AA81D6C0B58433F0_OFFSET))(this, a1);
	}
};
