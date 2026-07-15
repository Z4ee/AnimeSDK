#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

class Class_1_CA0BB69AF30EB725;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_A5A3241DAFF15702_METHOD_1_5AAFE54BF173ECC2_OFFSET UNITYSDK_OFFSET(0x163393D0)
#define CLASS_1_A5A3241DAFF15702_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x163392F0)
#define CLASS_1_A5A3241DAFF15702_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x16339380)
#define CLASS_1_A5A3241DAFF15702__CTOR_OFFSET UNITYSDK_OFFSET(0x163396C0)

inline static constexpr unsigned int Class_1_A5A3241DAFF15702_TypeDefinitionIndex = 51653;

class Class_1_A5A3241DAFF15702 : public ::System::Object
{
public:
	::Class_1_CA0BB69AF30EB725* Field_1_0; // 0x10
	::RPG::GameCore::GameWorld* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A3241DAFF15702__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_A5A3241DAFF15702_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A3241DAFF15702_ONPLUGINUNINIT_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_5AAFE54BF173ECC2(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::RtLifeBindingConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::RtLifeBindingConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A5A3241DAFF15702_METHOD_1_5AAFE54BF173ECC2_OFFSET))(this, a1, a2, a3);
	}
};
