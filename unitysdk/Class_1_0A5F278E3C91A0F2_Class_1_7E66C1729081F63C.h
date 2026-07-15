#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x18B79BF0)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0x18B79BB0)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_HASSTOPPED_OFFSET UNITYSDK_OFFSET(0x18B79B90)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_INTERACTION_OFFSET UNITYSDK_OFFSET(0x18B79BD0)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x18B79C00)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x18B79BE0)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18B79A60)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x18B79960)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_METHOD_1_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x18B79800)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_SET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0x18B79BC0)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_SET_HASSTOPPED_OFFSET UNITYSDK_OFFSET(0x18B79BA0)
#define CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B797E0)

inline static constexpr unsigned int Class_1_0A5F278E3C91A0F2_Class_1_7E66C1729081F63C_TypeDefinitionIndex = 65052;

class Class_1_0A5F278E3C91A0F2_Class_1_7E66C1729081F63C : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::TarotBookInteraction*>* _OnFinished_k__BackingField; // 0x10
	::RPG::GameCore::EntityManager* _Manager_k__BackingField; // 0x18
	::RPG::GameCore::LevelGraphComponent* _Component_k__BackingField; // 0x20
	::RPG::Client::TarotBookInteraction* _Interaction_k__BackingField; // 0x28
	::System::Boolean _HasStopped_k__BackingField; // 0x30
	::System::Boolean _HasFinished_k__BackingField; // 0x31

	::System::Void _ctor(::RPG::Client::TarotBookInteraction* a1, ::System::Action_1<::RPG::Client::TarotBookInteraction*>* a2, ::RPG::GameCore::LevelGraphComponent* a3, ::RPG::GameCore::EntityManager* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::System::Action_1<::RPG::Client::TarotBookInteraction*>*, ::RPG::GameCore::LevelGraphComponent*, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_HasStopped()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_HASSTOPPED_OFFSET))(this);
	}

	::System::Void set_HasStopped(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_SET_HASSTOPPED_OFFSET))(this, a1);
	}

	::System::Boolean get_HasFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_HASFINISHED_OFFSET))(this);
	}

	::System::Void set_HasFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_SET_HASFINISHED_OFFSET))(this, a1);
	}

	::RPG::Client::TarotBookInteraction* get_Interaction()
	{
		return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_INTERACTION_OFFSET))(this);
	}

	::System::Action_1<::RPG::Client::TarotBookInteraction*>* get_OnFinished()
	{
		return ((::System::Action_1<::RPG::Client::TarotBookInteraction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_ONFINISHED_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphComponent* get_Component()
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_COMPONENT_OFFSET))(this);
	}

	::RPG::GameCore::EntityManager* get_Manager()
	{
		return ((::RPG::GameCore::EntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_GET_MANAGER_OFFSET))(this);
	}

	::System::Void Method_1_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_METHOD_1_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_CLASS_1_7E66C1729081F63C_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}
};
