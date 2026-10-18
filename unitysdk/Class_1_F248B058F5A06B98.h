#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1568;
class Class_0_16E4307DCC419505_1590;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_F248B058F5A06B98_METHOD_1_16CDB12CDEE83F21_OFFSET UNITYSDK_OFFSET(0x15718700)
#define CLASS_1_F248B058F5A06B98_METHOD_1_748FD83925FF0732_OFFSET UNITYSDK_OFFSET(0x15718630)
#define CLASS_1_F248B058F5A06B98_METHOD_1_F8DCC785EC9E594C_OFFSET UNITYSDK_OFFSET(0x15718760)
#define CLASS_1_F248B058F5A06B98__CTOR_OFFSET UNITYSDK_OFFSET(0x15718580)

inline static constexpr unsigned int Class_1_F248B058F5A06B98_TypeDefinitionIndex = 81202;

class Class_1_F248B058F5A06B98 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1590* KANLOKJNAEB; // 0x10
	::Class_0_16E4307DCC419505_1568* BNIJMCMIILO; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1590* a1, ::Class_0_16E4307DCC419505_1568* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1590*, ::Class_0_16E4307DCC419505_1568*))((::PBYTE)hIl2Cpp + CLASS_1_F248B058F5A06B98__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_748FD83925FF0732(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_F248B058F5A06B98_METHOD_1_748FD83925FF0732_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_16CDB12CDEE83F21(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F248B058F5A06B98_METHOD_1_16CDB12CDEE83F21_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_F8DCC785EC9E594C(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F248B058F5A06B98_METHOD_1_F8DCC785EC9E594C_OFFSET))(this, a1);
	}
};
