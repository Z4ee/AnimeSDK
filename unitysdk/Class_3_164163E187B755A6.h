#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AttachGlobalShield; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_164163E187B755A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5408E0)
#define CLASS_3_164163E187B755A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD540360)
#define CLASS_3_164163E187B755A6__CTOR_OFFSET UNITYSDK_OFFSET(0xD540270)

inline static constexpr unsigned int Class_3_164163E187B755A6_TypeDefinitionIndex = 55069;

class Class_3_164163E187B755A6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachGlobalShield*>
{
public:
	::Class_3_07C3C4D2990C49EE* CLJEOHHIOKK; // 0x28
	::Class_3_07C3C4D2990C49EE* PPCEGDLCPJH; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachGlobalShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachGlobalShield*))((::PBYTE)hIl2Cpp + CLASS_3_164163E187B755A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_164163E187B755A6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_164163E187B755A6_DISPOSE_OFFSET))(this);
	}
};
