#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F620E8D05780B0E8.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_DACE1B11B1F6F9B9_METHOD_2_BE1605662A82DF82_OFFSET UNITYSDK_OFFSET(0xE2E3190)
#define CLASS_2_DACE1B11B1F6F9B9__CTOR_OFFSET UNITYSDK_OFFSET(0xE2E31E0)

inline static constexpr unsigned int Class_2_DACE1B11B1F6F9B9_TypeDefinitionIndex = 65249;

class Class_2_DACE1B11B1F6F9B9 : public ::Class_1_F620E8D05780B0E8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DACE1B11B1F6F9B9__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_BE1605662A82DF82(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_DACE1B11B1F6F9B9_METHOD_2_BE1605662A82DF82_OFFSET))(this, a1);
	}
};
