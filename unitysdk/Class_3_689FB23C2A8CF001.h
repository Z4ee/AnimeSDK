#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AttachAvatarChange; }
namespace RPG::GameCore { class AvatarChangeTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_689FB23C2A8CF001_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4623C0)
#define CLASS_3_689FB23C2A8CF001_METHOD_3_79DFE051D7769B1A_OFFSET UNITYSDK_OFFSET(0xB4635A0)
#define CLASS_3_689FB23C2A8CF001_METHOD_3_98D7467AE0BEC3C1_OFFSET UNITYSDK_OFFSET(0xB463480)
#define CLASS_3_689FB23C2A8CF001_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB462790)
#define CLASS_3_689FB23C2A8CF001__CTOR_OFFSET UNITYSDK_OFFSET(0xB461F60)

inline static constexpr unsigned int Class_3_689FB23C2A8CF001_TypeDefinitionIndex = 55048;

class Class_3_689FB23C2A8CF001 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachAvatarChange*>
{
public:
	::Class_3_07C3C4D2990C49EE* KBLLLKLEIOD; // 0x28
	::Class_3_07C3C4D2990C49EE* IOIINLJHFHH; // 0x30
	::Class_3_07C3C4D2990C49EE* FEINADIKCAB; // 0x38
	::System::Action_1<::RPG::GameCore::GameEntity*>* CLOMEGLHGOE; // 0x40
	::Class_3_07C3C4D2990C49EE* IEEKLAMGHKI; // 0x48
	::Class_3_07C3C4D2990C49EE* OMBIIGIJFIA; // 0x50
	::System::Action_1<::RPG::GameCore::GameEntity*>* LLHCINBIBMJ; // 0x58
	::Class_3_07C3C4D2990C49EE* FGKOGMMBNFG; // 0x60
	::RPG::GameCore::AvatarChangeTemplate* JILGFHGMAAC; // 0x68

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
