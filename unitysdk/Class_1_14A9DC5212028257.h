#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_0B306B15445B2FC1;
namespace RPG::GameCore { class AvatarSourceConfigRow; }

#define CLASS_1_14A9DC5212028257_GET_AVATARSOURCEROW_OFFSET UNITYSDK_OFFSET(0x15E32580)
#define CLASS_1_14A9DC5212028257_GET_FATERINAVATARROW_OFFSET UNITYSDK_OFFSET(0x15E32560)
#define CLASS_1_14A9DC5212028257_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x15E32540)
#define CLASS_1_14A9DC5212028257_SET_AVATARSOURCEROW_OFFSET UNITYSDK_OFFSET(0x15E32590)
#define CLASS_1_14A9DC5212028257_SET_FATERINAVATARROW_OFFSET UNITYSDK_OFFSET(0x15E32570)
#define CLASS_1_14A9DC5212028257_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x15E32550)
#define CLASS_1_14A9DC5212028257__CTOR_OFFSET UNITYSDK_OFFSET(0x15E325A0)

inline static constexpr unsigned int Class_1_14A9DC5212028257_TypeDefinitionIndex = 76256;

class Class_1_14A9DC5212028257 : public ::System::Object
{
public:
	::Class_1_0B306B15445B2FC1* _FateRinAvatarRow_k__BackingField; // 0x10
	::RPG::GameCore::AvatarSourceConfigRow* _AvatarSourceRow_k__BackingField; // 0x18
	::RPG::GameCore::FateRinHouguOwnerType _OwnerType_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateRinHouguOwnerType get_OwnerType()
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_GET_OWNERTYPE_OFFSET))(this);
	}

	::System::Void set_OwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_SET_OWNERTYPE_OFFSET))(this, a1);
	}

	::Class_1_0B306B15445B2FC1* get_FateRinAvatarRow()
	{
		return ((::Class_1_0B306B15445B2FC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_GET_FATERINAVATARROW_OFFSET))(this);
	}

	::System::Void set_FateRinAvatarRow(::Class_1_0B306B15445B2FC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B306B15445B2FC1*))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_SET_FATERINAVATARROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSourceConfigRow* get_AvatarSourceRow()
	{
		return ((::RPG::GameCore::AvatarSourceConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_GET_AVATARSOURCEROW_OFFSET))(this);
	}

	::System::Void set_AvatarSourceRow(::RPG::GameCore::AvatarSourceConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSourceConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_SET_AVATARSOURCEROW_OFFSET))(this, a1);
	}
};
