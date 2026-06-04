#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_729;
class Class_0_16E4307DCC419505_730;
class Class_0_16E4307DCC419505_731;
class Class_0_16E4307DCC419505_733;
class Class_1_61097837E1D530F4;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_E057A2AE36BB187D_METHOD_1_7770F863FC34A043_OFFSET UNITYSDK_OFFSET(0xA3BFFE0)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_923CACB31566C6AF_OFFSET UNITYSDK_OFFSET(0xA3C00F0)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_EFCE2E28CC670930_OFFSET UNITYSDK_OFFSET(0xA3BFE00)
#define CLASS_1_E057A2AE36BB187D_METHOD_1_F20666450A5F7A70_OFFSET UNITYSDK_OFFSET(0xA3C0090)
#define CLASS_1_E057A2AE36BB187D__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BFD00)

inline static constexpr unsigned int Class_1_E057A2AE36BB187D_TypeDefinitionIndex = 58816;

class Class_1_E057A2AE36BB187D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_730* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_729* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_731* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_733* Field_1_3; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_733* a1, ::Class_0_16E4307DCC419505_729* a2, ::Class_0_16E4307DCC419505_730* a3, ::Class_0_16E4307DCC419505_731* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_733*, ::Class_0_16E4307DCC419505_729*, ::Class_0_16E4307DCC419505_730*, ::Class_0_16E4307DCC419505_731*))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EFCE2E28CC670930(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_EFCE2E28CC670930_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7770F863FC34A043(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2, ::RPG::Client::AvatarUpgradePart a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_7770F863FC34A043_OFFSET))(this, a1, a2, a3);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_F20666450A5F7A70(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_F20666450A5F7A70_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_923CACB31566C6AF(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_E057A2AE36BB187D_METHOD_1_923CACB31566C6AF_OFFSET))(this, a1, a2);
	}
};
