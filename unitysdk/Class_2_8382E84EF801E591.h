#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_166;
class Class_1_151B93D9C4BBDCA4;
namespace Entitas { class IContext; }
namespace RPG::GameCore { class LittleGameProxyEntityConfig; }

#define CLASS_2_8382E84EF801E591_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96C7040)
#define CLASS_2_8382E84EF801E591_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x96C7110)
#define CLASS_2_8382E84EF801E591_GET_ENTITYCONFIG_OFFSET UNITYSDK_OFFSET(0x96C70D0)
#define CLASS_2_8382E84EF801E591_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x96C70B0)
#define CLASS_2_8382E84EF801E591_GET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x96C70F0)
#define CLASS_2_8382E84EF801E591_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x96C7090)
#define CLASS_2_8382E84EF801E591_METHOD_2_06167DE5F4A98B69_OFFSET UNITYSDK_OFFSET(0x96C6EF0)
#define CLASS_2_8382E84EF801E591_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0x96C6FA0)
#define CLASS_2_8382E84EF801E591_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x96C7120)
#define CLASS_2_8382E84EF801E591_SET_ENTITYCONFIG_OFFSET UNITYSDK_OFFSET(0x96C70E0)
#define CLASS_2_8382E84EF801E591_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x96C70C0)
#define CLASS_2_8382E84EF801E591_SET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x96C7100)
#define CLASS_2_8382E84EF801E591_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x96C70A0)
#define CLASS_2_8382E84EF801E591__CTOR_OFFSET UNITYSDK_OFFSET(0x96C7130)

inline static constexpr unsigned int Class_2_8382E84EF801E591_TypeDefinitionIndex = 52816;

class Class_2_8382E84EF801E591 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_151B93D9C4BBDCA4* _LittleGameInstance_k__BackingField; // 0x18
	::RPG::GameCore::LittleGameProxyEntityConfig* _EntityConfig_k__BackingField; // 0x20
	::Entitas::IContext* _Context_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_166* _LittleGameEntity_k__BackingField; // 0x30
	::System::UInt32 _EntityID_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_06167DE5F4A98B69(::Class_1_151B93D9C4BBDCA4* a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameProxyEntityConfig* a3, ::Class_0_16E4307DCC419505_166* a4, ::Entitas::IContext* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*, ::System::UInt32, ::RPG::GameCore::LittleGameProxyEntityConfig*, ::Class_0_16E4307DCC419505_166*, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_METHOD_2_06167DE5F4A98B69_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void set_LittleGameInstance(::Class_1_151B93D9C4BBDCA4* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_LITTLEGAMEINSTANCE_OFFSET))(this, value);
	}

	::System::UInt32 get_EntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_ENTITYID_OFFSET))(this);
	}

	::System::Void set_EntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_ENTITYID_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameProxyEntityConfig* get_EntityConfig()
	{
		return ((::RPG::GameCore::LittleGameProxyEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_ENTITYCONFIG_OFFSET))(this);
	}

	::System::Void set_EntityConfig(::RPG::GameCore::LittleGameProxyEntityConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameProxyEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_ENTITYCONFIG_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_166* get_LittleGameEntity()
	{
		return ((::Class_0_16E4307DCC419505_166*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_LITTLEGAMEENTITY_OFFSET))(this);
	}

	::System::Void set_LittleGameEntity(::Class_0_16E4307DCC419505_166* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_166*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_LITTLEGAMEENTITY_OFFSET))(this, value);
	}

	::Entitas::IContext* get_Context()
	{
		return ((::Entitas::IContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_GET_CONTEXT_OFFSET))(this);
	}

	::System::Void set_Context(::Entitas::IContext* value)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_8382E84EF801E591_SET_CONTEXT_OFFSET))(this, value);
	}
};
