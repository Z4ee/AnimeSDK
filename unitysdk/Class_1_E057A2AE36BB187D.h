#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_901;
class Class_0_16E4307DCC419505_902;
class Class_0_16E4307DCC419505_903;
class Class_0_16E4307DCC419505_905;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_E057A2AE36BB187D_METHOD_1_923CACB31566C6AF_OFFSET UNITYSDK_OFFSET(0xB134670)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_BE4691C72381BA61_OFFSET UNITYSDK_OFFSET(0xB134560)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_EFCE2E28CC670930_OFFSET UNITYSDK_OFFSET(0xB1343A0)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_F20666450A5F7A70_OFFSET UNITYSDK_OFFSET(0xB134610)
#define CLASS_1_E057A2AE36BB187D__CTOR_OFFSET UNITYSDK_OFFSET(0xB1342A0)

inline static constexpr unsigned int Class_1_E057A2AE36BB187D_TypeDefinitionIndex = 62866;

class Class_1_E057A2AE36BB187D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_901* EHPIMMAHHLH; // 0x10
	::Class_0_16E4307DCC419505_903* CGJIHBHGGJJ; // 0x18
	::Class_0_16E4307DCC419505_905* OIHFGHCBPFI; // 0x20
	::Class_0_16E4307DCC419505_902* MLOBHABHCGB; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_905* a1, ::Class_0_16E4307DCC419505_901* a2, ::Class_0_16E4307DCC419505_902* a3, ::Class_0_16E4307DCC419505_903* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_905*, ::Class_0_16E4307DCC419505_901*, ::Class_0_16E4307DCC419505_902*, ::Class_0_16E4307DCC419505_903*))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
