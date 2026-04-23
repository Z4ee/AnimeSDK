#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9F1F16EC4B9BAE24___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9323540)
#define CLASS_2_9F1F16EC4B9BAE24___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9323580)
#define CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_0_OFFSET UNITYSDK_OFFSET(0x9323590)
#define CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_1_OFFSET UNITYSDK_OFFSET(0x93235B0)
#define CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_2_OFFSET UNITYSDK_OFFSET(0x93235D0)

inline static constexpr unsigned int Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex = 48322;

class Class_2_9F1F16EC4B9BAE24___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x6A960);
	}
	static ::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x6A968);
	}
	static ::Class_2_9F1F16EC4B9BAE24___c** StaticGet___9()
	{
		return (::Class_2_9F1F16EC4B9BAE24___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x6A970);
	}
	static ::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>** StaticGet___9__6_2()
	{
		return (::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9F1F16EC4B9BAE24___c_TypeDefinitionIndex)->GetStaticField(0x6A978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __GetInstancesFromGroup_b__6_0(::RPG::GameCore::LevelPropInfo* p)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_0_OFFSET))(this, p);
	}

	::System::UInt32 __GetInstancesFromGroup_b__6_1(::RPG::GameCore::LevelNPCInfo* p)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_1_OFFSET))(this, p);
	}

	::System::UInt32 __GetInstancesFromGroup_b__6_2(::RPG::GameCore::LevelMonsterInfo* p)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24___C___GETINSTANCESFROMGROUP_B__6_2_OFFSET))(this, p);
	}
};
