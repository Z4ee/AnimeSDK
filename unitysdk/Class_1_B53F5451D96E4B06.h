#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_B53F5451D96E4B06_GET_AVATARS_OFFSET UNITYSDK_OFFSET(0x19FB18D0)
#define CLASS_1_B53F5451D96E4B06_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x19FB18C0)
#define CLASS_1_B53F5451D96E4B06__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB18E0)

inline static constexpr unsigned int Class_1_B53F5451D96E4B06_TypeDefinitionIndex = 63912;

class Class_1_B53F5451D96E4B06 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* _Avatars_k__BackingField; // 0x10
	::System::UInt32 _RouteID_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_B53F5451D96E4B06__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_RouteID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B53F5451D96E4B06_GET_ROUTEID_OFFSET))(this);
	}

	::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* get_Avatars()
	{
		return ((::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B53F5451D96E4B06_GET_AVATARS_OFFSET))(this);
	}
};
