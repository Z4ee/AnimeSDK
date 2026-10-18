#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A6B631037AD23C88___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4D1BE0)
#define CLASS_1_A6B631037AD23C88___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D1C10)
#define CLASS_1_A6B631037AD23C88___C__GETBLOCKGAMEPLAYSUBMISSIONIDS_B__8_0_OFFSET UNITYSDK_OFFSET(0xB4D1C20)
#define CLASS_1_A6B631037AD23C88___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETINTEGRATIONBARDIVISIONLEVELUPRULE_B__10_0_OFFSET UNITYSDK_OFFSET(0xB4D1C80)
#define CLASS_1_A6B631037AD23C88___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETRESIDENTQUESTIDS_B__14_0_OFFSET UNITYSDK_OFFSET(0xB4D1CE0)

inline static constexpr unsigned int Class_1_A6B631037AD23C88___c_TypeDefinitionIndex = 80100;

class Class_1_A6B631037AD23C88___c : public ::System::Object
{
public:
	static ::Class_1_A6B631037AD23C88___c** StaticGet___9()
	{
		return (::Class_1_A6B631037AD23C88___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6B631037AD23C88___c_TypeDefinitionIndex)->GetStaticField(0x5AE60);
	}
	static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Int32>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6B631037AD23C88___c_TypeDefinitionIndex)->GetStaticField(0x5AE68);
	}
	static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6B631037AD23C88___c_TypeDefinitionIndex)->GetStaticField(0x5AE70);
	}
	static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6B631037AD23C88___c_TypeDefinitionIndex)->GetStaticField(0x5AE78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6B631037AD23C88___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B631037AD23C88___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetBlockGameplaySubMissionIDs_b__8_0(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_A6B631037AD23C88___C__GETBLOCKGAMEPLAYSUBMISSIONIDS_B__8_0_OFFSET))(this, a1);
	}

	::System::Int32 _RPG_Client_MechCraft_IMechCraftConstantConfigRepository_GetIntegrationBarDivisionLevelUpRule_b__10_0(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_A6B631037AD23C88___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETINTEGRATIONBARDIVISIONLEVELUPRULE_B__10_0_OFFSET))(this, a1);
	}

	::System::UInt32 _RPG_Client_MechCraft_IMechCraftConstantConfigRepository_GetResidentQuestIDs_b__14_0(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_A6B631037AD23C88___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETRESIDENTQUESTIDS_B__14_0_OFFSET))(this, a1);
	}
};
