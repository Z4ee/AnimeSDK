#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_FD740778034CC2E9_METHOD_1_232429C69FD28461_OFFSET UNITYSDK_OFFSET(0xAFC4920)
#define CLASS_1_FD740778034CC2E9_METHOD_1_CD5C34C7F2BA3C14_OFFSET UNITYSDK_OFFSET(0xAFC4B20)
#define CLASS_1_FD740778034CC2E9_METHOD_1_D3477B9BE6D5D7C7_OFFSET UNITYSDK_OFFSET(0xAFC48B0)
#define CLASS_1_FD740778034CC2E9__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC4CB0)

inline static constexpr unsigned int Class_1_FD740778034CC2E9_TypeDefinitionIndex = 61303;

class Class_1_FD740778034CC2E9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D3477B9BE6D5D7C7(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_D3477B9BE6D5D7C7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_798* Method_1_CD5C34C7F2BA3C14(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_798*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_CD5C34C7F2BA3C14_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_232429C69FD28461(::RPG::Client::EquipmentItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_232429C69FD28461_OFFSET))(this, a1);
	}
};
