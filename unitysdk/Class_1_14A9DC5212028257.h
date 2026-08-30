#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_25EA9E797601849C;
namespace RPG::GameCore { class AvatarSourceConfigRow; }

#define CLASS_1_14A9DC5212028257_GET_AVATARSOURCEROW_OFFSET UNITYSDK_OFFSET(0x17A96A90)
#define CLASS_1_14A9DC5212028257_GET_FATERINAVATARROW_OFFSET UNITYSDK_OFFSET(0x17A96A70)
#define CLASS_1_14A9DC5212028257_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x17A96A50)
#define CLASS_1_14A9DC5212028257_SET_AVATARSOURCEROW_OFFSET UNITYSDK_OFFSET(0x17A96AA0)
#define CLASS_1_14A9DC5212028257_SET_FATERINAVATARROW_OFFSET UNITYSDK_OFFSET(0x17A96A80)
#define CLASS_1_14A9DC5212028257_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x17A96A60)
#define CLASS_1_14A9DC5212028257__CTOR_OFFSET UNITYSDK_OFFSET(0x17A96AB0)

inline static constexpr unsigned int Class_1_14A9DC5212028257_TypeDefinitionIndex = 79889;

class Class_1_14A9DC5212028257 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarSourceConfigRow* _AvatarSourceRow_k__BackingField; // 0x10
	::Class_1_25EA9E797601849C* _FateRinAvatarRow_k__BackingField; // 0x18
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

	::Class_1_25EA9E797601849C* get_FateRinAvatarRow()
	{
		return ((::Class_1_25EA9E797601849C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_GET_FATERINAVATARROW_OFFSET))(this);
	}

	::System::Void set_FateRinAvatarRow(::Class_1_25EA9E797601849C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_25EA9E797601849C*))((::PBYTE)hIl2Cpp + CLASS_1_14A9DC5212028257_SET_FATERINAVATARROW_OFFSET))(this, a1);
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
