#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9F1F16EC4B9BAE24___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151FD390)
#define CLASS_2_9F1F16EC4B9BAE24___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151FD3D0)
#define CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_0_OFFSET UNITYSDK_OFFSET(0x151FD3E0)
#define CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_1_OFFSET UNITYSDK_OFFSET(0x151FD400)
#define CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_2_OFFSET UNITYSDK_OFFSET(0x151FD420)

inline static constexpr unsigned int Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex = 52622;

class Class_2_9F1F16EC4B9BAE24___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>** StaticGet___9__6_2()
	{
		return (::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x558C0);
	}
	static ::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x558C8);
	}
	static ::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x558D0);
	}
	static ::Class_2_9F1F16EC4B9BAE24___c** StaticGet___9()
	{
		return (::Class_2_9F1F16EC4B9BAE24___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x558D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __GetInstancesFromGroup_b__6_0(::RPG::GameCore::LevelPropInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_0_OFFSET))(this, a1);
	}

	::System::UInt32 __GetInstancesFromGroup_b__6_1(::RPG::GameCore::LevelNPCInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_1_OFFSET))(this, a1);
	}

	::System::UInt32 __GetInstancesFromGroup_b__6_2(::RPG::GameCore::LevelMonsterInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_2_OFFSET))(this, a1);
	}
};
