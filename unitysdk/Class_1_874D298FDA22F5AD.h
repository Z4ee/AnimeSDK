#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_547;
class Class_1_74F00CDEEEAC4FCD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_874D298FDA22F5AD_GET_ACTIVEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11FF8510)
#define CLASS_1_874D298FDA22F5AD_METHOD_1_3C846407474D7238_OFFSET UNITYSDK_OFFSET(0x11FF8400)
#define CLASS_1_874D298FDA22F5AD_METHOD_1_46B038701B694F42_OFFSET UNITYSDK_OFFSET(0x11FF7FD0)
#define CLASS_1_874D298FDA22F5AD_METHOD_1_B4EA5393BA544425_OFFSET UNITYSDK_OFFSET(0x11FF8320)
#define CLASS_1_874D298FDA22F5AD_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x11FF7E00)
#define CLASS_1_874D298FDA22F5AD_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x11FF7EF0)
#define CLASS_1_874D298FDA22F5AD_SET_ACTIVEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11FF8520)
#define CLASS_1_874D298FDA22F5AD__CTOR_OFFSET UNITYSDK_OFFSET(0x11FF8530)

inline static constexpr unsigned int Class_1_874D298FDA22F5AD_TypeDefinitionIndex = 55625;

class Class_1_874D298FDA22F5AD : public ::System::Object
{
public:
	::Class_1_74F00CDEEEAC4FCD* _ActiveProcessor_k__BackingField; // 0x10
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_74F00CDEEEAC4FCD*>* OMPCPGELAME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_46B038701B694F42(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD_METHOD_1_46B038701B694F42_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_74F00CDEEEAC4FCD* Method_1_B4EA5393BA544425(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_74F00CDEEEAC4FCD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD_METHOD_1_B4EA5393BA544425_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C846407474D7238(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD_METHOD_1_3C846407474D7238_OFFSET))(this, a1);
	}

	::Class_1_74F00CDEEEAC4FCD* get_ActiveProcessor()
	{
		return ((::Class_1_74F00CDEEEAC4FCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD_GET_ACTIVEPROCESSOR_OFFSET))(this);
	}

	::System::Void set_ActiveProcessor(::Class_1_74F00CDEEEAC4FCD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_74F00CDEEEAC4FCD*))((::PBYTE)hIl2Cpp + CLASS_1_874D298FDA22F5AD_SET_ACTIVEPROCESSOR_OFFSET))(this, a1);
	}
};
