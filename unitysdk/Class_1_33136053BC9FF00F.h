#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PreAvatarType.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_21;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define CLASS_1_33136053BC9FF00F_GET_RELEASETYPE_OFFSET UNITYSDK_OFFSET(0xB63C910)
#define CLASS_1_33136053BC9FF00F_GET_SCHEDULEACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB63C930)
#define CLASS_1_33136053BC9FF00F_METHOD_1_4E99164CCBED7594_OFFSET UNITYSDK_OFFSET(0xB63C950)
#define CLASS_1_33136053BC9FF00F_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xB63C9B0)
#define CLASS_1_33136053BC9FF00F_SET_RELEASETYPE_OFFSET UNITYSDK_OFFSET(0xB63C920)
#define CLASS_1_33136053BC9FF00F_SET_SCHEDULEACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB63C940)
#define CLASS_1_33136053BC9FF00F__CTOR_OFFSET UNITYSDK_OFFSET(0xB63CA50)

inline static constexpr unsigned int Class_1_33136053BC9FF00F_TypeDefinitionIndex = 66721;

class Class_1_33136053BC9FF00F : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* KBFHJNEEOOL; // 0x10
	::System::String* CAKAJFGJGPE; // 0x18
	::System::String* IMGPNLCKNHE; // 0x20
	::System::String* DOPEILKFLGI; // 0x28
	::System::String* DKLNOJHPHDF; // 0x30
	::System::UInt32 PMIEAEGJNMJ; // 0x38
	::System::UInt32 MEFDNHMPHOH; // 0x3C
	::System::UInt32 FEKHEHMPDHC; // 0x40
	::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x44
	::System::UInt32 GGEIJACCPCK; // 0x48
	::RPG::GameCore::AvatarBaseType GCIDABGHIHN; // 0x4C
	::System::UInt32 _ScheduleActivityModuleID_k__BackingField; // 0x50
	::System::UInt32 KDKMALLNING; // 0x54
	::RPG::GameCore::PreAvatarType _ReleaseType_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33136053BC9FF00F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::PreAvatarType get_ReleaseType()
	{
		return ((::RPG::GameCore::PreAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33136053BC9FF00F_GET_RELEASETYPE_OFFSET))(this);
	}

	::System::Void set_ReleaseType(::RPG::GameCore::PreAvatarType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_33136053BC9FF00F_SET_RELEASETYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_ScheduleActivityModuleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33136053BC9FF00F_GET_SCHEDULEACTIVITYMODULEID_OFFSET))(this);
	}

	::System::Void set_ScheduleActivityModuleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_33136053BC9FF00F_SET_SCHEDULEACTIVITYMODULEID_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E99164CCBED7594(::System::UInt32 a1, ::RPG::GameCore::PreAvatarType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PreAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_33136053BC9FF00F_METHOD_1_4E99164CCBED7594_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_21DCD4640D389503_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + CLASS_1_33136053BC9FF00F_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}
};
