#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunEnableBulletTime; }

#define CLASS_3_CA0281A0F489BA68_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1255CC60)
#define CLASS_3_CA0281A0F489BA68__CTOR_OFFSET UNITYSDK_OFFSET(0x1255CC30)

inline static constexpr unsigned int Class_3_CA0281A0F489BA68_TypeDefinitionIndex = 54359;

class Class_3_CA0281A0F489BA68 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroGunEnableBulletTime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunEnableBulletTime*))((::PBYTE)hIl2Cpp + CLASS_3_CA0281A0F489BA68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA0281A0F489BA68_ONTASKBEGIN_OFFSET))(this);
	}
};
