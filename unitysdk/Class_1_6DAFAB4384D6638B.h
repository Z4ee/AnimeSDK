#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_6DAFAB4384D6638B_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x16CE8D30)
#define CLASS_1_6DAFAB4384D6638B_GET_ISEQUIPMENTFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x16CE8D50)
#define CLASS_1_6DAFAB4384D6638B_GET_ISLEVELFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x16CE8D40)
#define CLASS_1_6DAFAB4384D6638B_GET_ISRELICFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x16CE8D70)
#define CLASS_1_6DAFAB4384D6638B_GET_ISSKILLTREEFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x16CE8D60)
#define CLASS_1_6DAFAB4384D6638B_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x16CE8BF0)
#define CLASS_1_6DAFAB4384D6638B_METHOD_1_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x16CE8C60)
#define CLASS_1_6DAFAB4384D6638B_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16CE8B80)
#define CLASS_1_6DAFAB4384D6638B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16CE8CD0)
#define CLASS_1_6DAFAB4384D6638B__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE8B00)

inline static constexpr unsigned int Class_1_6DAFAB4384D6638B_TypeDefinitionIndex = 60481;

class Class_1_6DAFAB4384D6638B : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
	::System::Boolean _IsSkillTreeFullyTrained_k__BackingField; // 0x18
	::System::Boolean _IsEquipmentFullyTrained_k__BackingField; // 0x19
	::System::Boolean _IsLevelFullyTrained_k__BackingField; // 0x1A
	::System::Boolean _IsRelicFullyTrained_k__BackingField; // 0x1B

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_METHOD_1_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* get_Avatar()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_GET_AVATAR_OFFSET))(this);
	}

	::System::Boolean get_IsLevelFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_GET_ISLEVELFULLYTRAINED_OFFSET))(this);
	}

	::System::Boolean get_IsEquipmentFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_GET_ISEQUIPMENTFULLYTRAINED_OFFSET))(this);
	}

	::System::Boolean get_IsSkillTreeFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_GET_ISSKILLTREEFULLYTRAINED_OFFSET))(this);
	}

	::System::Boolean get_IsRelicFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DAFAB4384D6638B_GET_ISRELICFULLYTRAINED_OFFSET))(this);
	}
};
