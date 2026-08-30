#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_AAA001666D98C5E0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187FDE40)
#define CLASS_2_AAA001666D98C5E0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187FDE70)
#define CLASS_2_AAA001666D98C5E0___C___GETINSTANCESFROMGROUP_B__5_0_OFFSET UNITYSDK_OFFSET(0x187FDE80)
#define CLASS_2_AAA001666D98C5E0___C___GETINSTANCESFROMGROUP_B__5_1_OFFSET UNITYSDK_OFFSET(0x187FDEA0)
#define CLASS_2_AAA001666D98C5E0___C___GETINSTANCESFROMGROUP_B__5_2_OFFSET UNITYSDK_OFFSET(0x187FDEC0)

inline static constexpr unsigned int Class_2_AAA001666D98C5E0___c_TypeDefinitionIndex = 52620;

class Class_2_AAA001666D98C5E0___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AAA001666D98C5E0___c_TypeDefinitionIndex)->GetStaticField(0x3A310);
	}
	static ::Class_2_AAA001666D98C5E0___c** StaticGet___9()
	{
		return (::Class_2_AAA001666D98C5E0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AAA001666D98C5E0___c_TypeDefinitionIndex)->GetStaticField(0x3A318);
	}
	static ::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>** StaticGet___9__5_2()
	{
		return (::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AAA001666D98C5E0___c_TypeDefinitionIndex)->GetStaticField(0x3A320);
	}
	static ::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AAA001666D98C5E0___c_TypeDefinitionIndex)->GetStaticField(0x3A328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __GetInstancesFromGroup_b__5_0(::RPG::GameCore::LevelPropInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0___C___GETINSTANCESFROMGROUP_B__5_0_OFFSET))(this, a1);
	}

	::System::UInt32 __GetInstancesFromGroup_b__5_1(::RPG::GameCore::LevelNPCInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0___C___GETINSTANCESFROMGROUP_B__5_1_OFFSET))(this, a1);
	}

	::System::UInt32 __GetInstancesFromGroup_b__5_2(::RPG::GameCore::LevelMonsterInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0___C___GETINSTANCESFROMGROUP_B__5_2_OFFSET))(this, a1);
	}
};
