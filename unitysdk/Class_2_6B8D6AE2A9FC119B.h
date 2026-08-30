#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_72FF3C03F0F06A80;
class Class_1_DB9575801298F699;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CreateSharedSummonUnit; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6B8D6AE2A9FC119B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0DC4A0)
#define CLASS_2_6B8D6AE2A9FC119B_METHOD_2_2EB64D7F3388406F_OFFSET UNITYSDK_OFFSET(0x1A0DDB90)
#define CLASS_2_6B8D6AE2A9FC119B_METHOD_2_84B92802FDAFF6C8_1_OFFSET UNITYSDK_OFFSET(0x1A0DE630)
#define CLASS_2_6B8D6AE2A9FC119B_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1A0DE440)
#define CLASS_2_6B8D6AE2A9FC119B_METHOD_2_9029BA80CA63A4CA_OFFSET UNITYSDK_OFFSET(0x1A0DD260)
#define CLASS_2_6B8D6AE2A9FC119B_METHOD_2_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0x1A0DC750)
#define CLASS_2_6B8D6AE2A9FC119B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0DE820)
#define CLASS_2_6B8D6AE2A9FC119B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0DCAC0)
#define CLASS_2_6B8D6AE2A9FC119B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A0DE240)
#define CLASS_2_6B8D6AE2A9FC119B_TICK_OFFSET UNITYSDK_OFFSET(0x1A0DE290)
#define CLASS_2_6B8D6AE2A9FC119B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DC2B0)

inline static constexpr unsigned int Class_2_6B8D6AE2A9FC119B_TypeDefinitionIndex = 58212;

class Class_2_6B8D6AE2A9FC119B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CAKGIICDAJF; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* FJJCPJNINDE; // 0x28
	::Class_3_07C3C4D2990C49EE* OODBJDPKKKF; // 0x30
	::RPG::GameCore::CreateSharedSummonUnit* OFKGLJOAMLD; // 0x38
	::Class_3_07C3C4D2990C49EE* HBCDNGJDPCE; // 0x40
	::Class_1_DB9575801298F699* EPGIOAEIACN; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateSharedSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateSharedSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_METHOD_2_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_METHOD_2_84B92802FDAFF6C8_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_2EB64D7F3388406F(::System::UInt32 a1, ::Class_1_72FF3C03F0F06A80* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::Class_1_72FF3C03F0F06A80*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_METHOD_2_2EB64D7F3388406F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_9029BA80CA63A4CA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_6B8D6AE2A9FC119B_METHOD_2_9029BA80CA63A4CA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
