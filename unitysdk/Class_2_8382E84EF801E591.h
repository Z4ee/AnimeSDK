#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_172;
class Class_1_151B93D9C4BBDCA4;
namespace Entitas { class IContext; }
namespace RPG::GameCore { class LittleGameProxyEntityConfig; }

#define CLASS_2_8382E84EF801E591_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B85550)
#define CLASS_2_8382E84EF801E591_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x13B85620)
#define CLASS_2_8382E84EF801E591_GET_ENTITYCONFIG_OFFSET UNITYSDK_OFFSET(0x13B855E0)
#define CLASS_2_8382E84EF801E591_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x13B855C0)
#define CLASS_2_8382E84EF801E591_GET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x13B85600)
#define CLASS_2_8382E84EF801E591_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13B855A0)
#define CLASS_2_8382E84EF801E591_METHOD_2_06167DE5F4A98B69_OFFSET UNITYSDK_OFFSET(0x13B85400)
#define CLASS_2_8382E84EF801E591_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0x13B854B0)
#define CLASS_2_8382E84EF801E591_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x13B85630)
#define CLASS_2_8382E84EF801E591_SET_ENTITYCONFIG_OFFSET UNITYSDK_OFFSET(0x13B855F0)
#define CLASS_2_8382E84EF801E591_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x13B855D0)
#define CLASS_2_8382E84EF801E591_SET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x13B85610)
#define CLASS_2_8382E84EF801E591_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13B855B0)
#define CLASS_2_8382E84EF801E591__CTOR_OFFSET UNITYSDK_OFFSET(0x13B85640)

inline static constexpr unsigned int Class_2_8382E84EF801E591_TypeDefinitionIndex = 53522;

class Class_2_8382E84EF801E591 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_151B93D9C4BBDCA4* _LittleGameInstance_k__BackingField; // 0x18
	::RPG::GameCore::LittleGameProxyEntityConfig* _EntityConfig_k__BackingField; // 0x20
	::Entitas::IContext* _Context_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_172* _LittleGameEntity_k__BackingField; // 0x30
	::System::UInt32 _EntityID_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_06167DE5F4A98B69(::Class_1_151B93D9C4BBDCA4* a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameProxyEntityConfig* a3, ::Class_0_16E4307DCC419505_172* a4, ::Entitas::IContext* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*, ::System::UInt32, ::RPG::GameCore::LittleGameProxyEntityConfig*, ::Class_0_16E4307DCC419505_172*, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_METHOD_2_06167DE5F4A98B69_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void OnWillBeDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_ONWILLBEDESTROY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_DISPOSE_OFFSET))(this);
	}

	::Class_1_151B93D9C4BBDCA4* get_LittleGameInstance()
	{
		return ((::Class_1_151B93D9C4BBDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_LittleGameInstance(::Class_1_151B93D9C4BBDCA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_LITTLEGAMEINSTANCE_OFFSET))(this, a1);
	}

	::System::UInt32 get_EntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_ENTITYID_OFFSET))(this);
	}

	::System::Void set_EntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_ENTITYID_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameProxyEntityConfig* get_EntityConfig()
	{
		return ((::RPG::GameCore::LittleGameProxyEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_ENTITYCONFIG_OFFSET))(this);
	}

	::System::Void set_EntityConfig(::RPG::GameCore::LittleGameProxyEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameProxyEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_ENTITYCONFIG_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_172* get_LittleGameEntity()
	{
		return ((::Class_0_16E4307DCC419505_172*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_LITTLEGAMEENTITY_OFFSET))(this);
	}

	::System::Void set_LittleGameEntity(::Class_0_16E4307DCC419505_172* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_172*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_LITTLEGAMEENTITY_OFFSET))(this, a1);
	}

	::Entitas::IContext* get_Context()
	{
		return ((::Entitas::IContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_CONTEXT_OFFSET))(this);
	}

	::System::Void set_Context(::Entitas::IContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_CONTEXT_OFFSET))(this, a1);
	}
};
