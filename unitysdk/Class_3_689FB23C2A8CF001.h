#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AttachAvatarChange; }
namespace RPG::GameCore { class AvatarChangeTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_689FB23C2A8CF001_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A7F2F0)
#define CLASS_3_689FB23C2A8CF001_METHOD_3_79DFE051D7769B1A_OFFSET UNITYSDK_OFFSET(0x17A804E0)
#define CLASS_3_689FB23C2A8CF001_METHOD_3_98D7467AE0BEC3C1_OFFSET UNITYSDK_OFFSET(0x17A803C0)
#define CLASS_3_689FB23C2A8CF001_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A7F6C0)
#define CLASS_3_689FB23C2A8CF001__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7EE90)

inline static constexpr unsigned int Class_3_689FB23C2A8CF001_TypeDefinitionIndex = 52358;

class Class_3_689FB23C2A8CF001 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachAvatarChange*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::RPG::GameCore::AvatarChangeTemplate* Field_3_1; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_2; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_3_3; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_3_4; // 0x48
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_3_5; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_3_6; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_3_7; // 0x60
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_3_8; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachAvatarChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachAvatarChange*))((::PBYTE)hIl2Cpp + CLASS_3_689FB23C2A8CF001__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_689FB23C2A8CF001_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_689FB23C2A8CF001_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_98D7467AE0BEC3C1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_689FB23C2A8CF001_METHOD_3_98D7467AE0BEC3C1_OFFSET))(this, a1);
	}

	::System::Void Method_3_79DFE051D7769B1A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_689FB23C2A8CF001_METHOD_3_79DFE051D7769B1A_OFFSET))(this, a1);
	}
};
