#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_F620E8D05780B0E8_METHOD_1_C68C398C0CCB1600_OFFSET UNITYSDK_OFFSET(0xE4D1990)
#define CLASS_1_F620E8D05780B0E8_METHOD_1_D168016D0A0EBBD7_OFFSET UNITYSDK_OFFSET(0xE4D1F50)
#define CLASS_1_F620E8D05780B0E8_METHOD_1_D62C9593981E0D09_OFFSET UNITYSDK_OFFSET(0xE4D1590)
#define CLASS_1_F620E8D05780B0E8__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D20D0)

inline static constexpr unsigned int Class_1_F620E8D05780B0E8_TypeDefinitionIndex = 62263;

class Class_1_F620E8D05780B0E8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F620E8D05780B0E8__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_D62C9593981E0D09(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_F620E8D05780B0E8_METHOD_1_D62C9593981E0D09_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_C68C398C0CCB1600(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_F620E8D05780B0E8_METHOD_1_C68C398C0CCB1600_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_D168016D0A0EBBD7(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_F620E8D05780B0E8_METHOD_1_D168016D0A0EBBD7_OFFSET))(this, a1);
	}
};
