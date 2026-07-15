#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class PlanetFesAvatarMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_687A07818698E325_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152DD190)
#define CLASS_3_687A07818698E325__CTOR_OFFSET UNITYSDK_OFFSET(0x152DD160)

inline static constexpr unsigned int Class_3_687A07818698E325_TypeDefinitionIndex = 55675;

class Class_3_687A07818698E325 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::PlanetFesAvatarMoveTo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesAvatarMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesAvatarMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_687A07818698E325__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_687A07818698E325_ONTASKBEGIN_OFFSET))(this);
	}
};
