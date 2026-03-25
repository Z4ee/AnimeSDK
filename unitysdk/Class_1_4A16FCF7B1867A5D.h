#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }

#define CLASS_1_4A16FCF7B1867A5D_METHOD_1_420B3D21C111D902_OFFSET UNITYSDK_OFFSET(0xE470A60)
#define CLASS_1_4A16FCF7B1867A5D_METHOD_1_733B0DD0C3A9A4FC_OFFSET UNITYSDK_OFFSET(0xE470B60)
#define CLASS_1_4A16FCF7B1867A5D_METHOD_1_D9BA312BE2F68B88_OFFSET UNITYSDK_OFFSET(0xE4708E0)
#define CLASS_1_4A16FCF7B1867A5D_METHOD_1_F7DCEC68D92235A0_OFFSET UNITYSDK_OFFSET(0xE4709A0)
#define CLASS_1_4A16FCF7B1867A5D__CTOR_OFFSET UNITYSDK_OFFSET(0xE470BD0)

inline static constexpr unsigned int Class_1_4A16FCF7B1867A5D_TypeDefinitionIndex = 50997;

class Class_1_4A16FCF7B1867A5D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A16FCF7B1867A5D__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_D9BA312BE2F68B88(::RPG::Client::AvatarData* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_4A16FCF7B1867A5D_METHOD_1_D9BA312BE2F68B88_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarData* Method_1_F7DCEC68D92235A0(::RPG::Client::AvatarData* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_4A16FCF7B1867A5D_METHOD_1_F7DCEC68D92235A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_420B3D21C111D902(::RPG::Client::AvatarData* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_4A16FCF7B1867A5D_METHOD_1_420B3D21C111D902_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_733B0DD0C3A9A4FC(::RPG::Client::AvatarData* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A16FCF7B1867A5D_METHOD_1_733B0DD0C3A9A4FC_OFFSET))(this, a1, a2);
	}
};
