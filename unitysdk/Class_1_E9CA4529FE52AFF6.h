#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_E9CA4529FE52AFF6_METHOD_1_D0F0F5819F8F0CF2_OFFSET UNITYSDK_OFFSET(0xB5B4B10)
#define CLASS_1_E9CA4529FE52AFF6__CTOR_OFFSET UNITYSDK_OFFSET(0xB5B4B60)

inline static constexpr unsigned int Class_1_E9CA4529FE52AFF6_TypeDefinitionIndex = 65252;

class Class_1_E9CA4529FE52AFF6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9CA4529FE52AFF6__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_D0F0F5819F8F0CF2(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_E9CA4529FE52AFF6_METHOD_1_D0F0F5819F8F0CF2_OFFSET))(this, a1);
	}
};
