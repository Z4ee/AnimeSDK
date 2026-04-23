#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ILBattleAvatarSkillConfigRow; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class String; }

#define CLASS_1_528D33334D24A8B9_METHOD_1_821D4346A7E0B2C4_OFFSET UNITYSDK_OFFSET(0x979A330)
#define CLASS_1_528D33334D24A8B9_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x979A2C0)
#define CLASS_1_528D33334D24A8B9_METHOD_1_9F25BB8F0AC58CBF_OFFSET UNITYSDK_OFFSET(0x979A640)
#define CLASS_1_528D33334D24A8B9_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x979A270)
#define CLASS_1_528D33334D24A8B9_METHOD_1_ACE6B9BC84CA2B23_OFFSET UNITYSDK_OFFSET(0x979A340)
#define CLASS_1_528D33334D24A8B9_METHOD_1_B3557FD743C2A9E7_OFFSET UNITYSDK_OFFSET(0x979A350)
#define CLASS_1_528D33334D24A8B9_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x979A320)
#define CLASS_1_528D33334D24A8B9__CTOR_OFFSET UNITYSDK_OFFSET(0x979A750)

inline static constexpr unsigned int Class_1_528D33334D24A8B9_TypeDefinitionIndex = 50077;

class Class_1_528D33334D24A8B9 : public ::System::Object
{
public:
	::RPG::GameCore::ILBattleAvatarSkillConfigRow* Field_1_0; // 0x10
	::RPG::GameCore::RtSkillConfig* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtSkillConfig* Method_1_821D4346A7E0B2C4()
	{
		return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9_METHOD_1_821D4346A7E0B2C4_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_ACE6B9BC84CA2B23()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9_METHOD_1_ACE6B9BC84CA2B23_OFFSET))(this);
	}

	::Class_1_528D33334D24A8B9* Method_1_B3557FD743C2A9E7(::RPG::GameCore::ILBattleAvatarSkillConfigRow* a1, ::RPG::GameCore::RtSkillConfig* a2, ::System::UInt32 a3)
	{
		return ((::Class_1_528D33334D24A8B9*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*, ::RPG::GameCore::RtSkillConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9_METHOD_1_B3557FD743C2A9E7_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_9F25BB8F0AC58CBF(::RPG::GameCore::RtSkillPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_528D33334D24A8B9_METHOD_1_9F25BB8F0AC58CBF_OFFSET))(this, a1);
	}
};
