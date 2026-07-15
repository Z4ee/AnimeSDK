#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_764;
class Class_0_16E4307DCC419505_765;
class Class_0_16E4307DCC419505_766;
class Class_0_16E4307DCC419505_768;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_E057A2AE36BB187D_METHOD_1_923CACB31566C6AF_OFFSET UNITYSDK_OFFSET(0x17A8E950)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_BE4691C72381BA61_OFFSET UNITYSDK_OFFSET(0x17A8E840)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_EFCE2E28CC670930_OFFSET UNITYSDK_OFFSET(0x17A8E600)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_F20666450A5F7A70_OFFSET UNITYSDK_OFFSET(0x17A8E8F0)
#define CLASS_1_E057A2AE36BB187D__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8E500)

inline static constexpr unsigned int Class_1_E057A2AE36BB187D_TypeDefinitionIndex = 60087;

class Class_1_E057A2AE36BB187D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_765* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_764* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_768* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_766* Field_1_3; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_768* a1, ::Class_0_16E4307DCC419505_764* a2, ::Class_0_16E4307DCC419505_765* a3, ::Class_0_16E4307DCC419505_766* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*, ::Class_0_16E4307DCC419505_764*, ::Class_0_16E4307DCC419505_765*, ::Class_0_16E4307DCC419505_766*))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EFCE2E28CC670930(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_EFCE2E28CC670930_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BE4691C72381BA61(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2, ::RPG::Client::AvatarUpgradePart a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_BE4691C72381BA61_OFFSET))(this, a1, a2, a3);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_F20666450A5F7A70(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_F20666450A5F7A70_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_923CACB31566C6AF(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_923CACB31566C6AF_OFFSET))(this, a1, a2);
	}
};
