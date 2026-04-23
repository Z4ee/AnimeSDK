#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1F7B5F5E8BAE0D03;
class Class_1_EAB32D6999AE04E3;
class Class_2_E3332B678B8C5C07;
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class SharedValue; }
namespace RPG::GameCore { class StartSummonUnitGameplay; }
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_13760155862CEE6F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9775960)
#define CLASS_2_13760155862CEE6F_METHOD_2_0A62CFFE3FBE8BBA_OFFSET UNITYSDK_OFFSET(0x9777750)
#define CLASS_2_13760155862CEE6F_METHOD_2_1DBF254E15FA521D_OFFSET UNITYSDK_OFFSET(0x9775CB0)
#define CLASS_2_13760155862CEE6F_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x9777180)
#define CLASS_2_13760155862CEE6F_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9776440)
#define CLASS_2_13760155862CEE6F_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x9776390)
#define CLASS_2_13760155862CEE6F_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x9777320)
#define CLASS_2_13760155862CEE6F_METHOD_2_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0x97762B0)
#define CLASS_2_13760155862CEE6F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x97761F0)
#define CLASS_2_13760155862CEE6F_METHOD_2_A112B44B74475A57_OFFSET UNITYSDK_OFFSET(0x9777FF0)
#define CLASS_2_13760155862CEE6F_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x97775F0)
#define CLASS_2_13760155862CEE6F_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x9777130)
#define CLASS_2_13760155862CEE6F_METHOD_2_E0F3A7E0D78CF15F_OFFSET UNITYSDK_OFFSET(0x97764E0)
#define CLASS_2_13760155862CEE6F_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x9777700)
#define CLASS_2_13760155862CEE6F_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x97773E0)
#define CLASS_2_13760155862CEE6F_METHOD_2_EF4337C2149E8D3F_OFFSET UNITYSDK_OFFSET(0x9776D10)
#define CLASS_2_13760155862CEE6F_METHOD_2_EFD7F43DBA49AA00_OFFSET UNITYSDK_OFFSET(0x9777BE0)
#define CLASS_2_13760155862CEE6F_METHOD_2_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0x9777B70)
#define CLASS_2_13760155862CEE6F_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9777370)
#define CLASS_2_13760155862CEE6F_METHOD_2_F7139B0EA397B51B_OFFSET UNITYSDK_OFFSET(0x9777DF0)
#define CLASS_2_13760155862CEE6F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9775AD0)
#define CLASS_2_13760155862CEE6F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9775A00)
#define CLASS_2_13760155862CEE6F_TICK_OFFSET UNITYSDK_OFFSET(0x9775A60)
#define CLASS_2_13760155862CEE6F__CTOR_OFFSET UNITYSDK_OFFSET(0x97757F0)

inline static constexpr unsigned int Class_2_13760155862CEE6F_TypeDefinitionIndex = 54145;

class Class_2_13760155862CEE6F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_1F7B5F5E8BAE0D03* Field_2_4; // 0x18
	::RPG::GameCore::SummonUnitGameplayConfig* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_2_E3332B678B8C5C07* Field_2_8; // 0x30
	::RPG::GameCore::StartSummonUnitGameplay* Field_2_0; // 0x38
	::Class_1_EAB32D6999AE04E3* Field_2_3; // 0x40
	::RPG::GameCore::LevelGraphConfig* Field_2_7; // 0x48
	::System::Boolean Field_2_5; // 0x50
	::System::UInt32 Field_2_6; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartSummonUnitGameplay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartSummonUnitGameplay*))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_1DBF254E15FA521D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_1DBF254E15FA521D_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_EF4337C2149E8D3F(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Boolean a6)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_EF4337C2149E8D3F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_E0F3A7E0D78CF15F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_E0F3A7E0D78CF15F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_8F54650C0C7FD373(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_8F54650C0C7FD373_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_F5447CD65612575D_1_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphValueSource* Method_2_0A62CFFE3FBE8BBA()
	{
		return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_0A62CFFE3FBE8BBA_OFFSET))(this);
	}

	static ::System::Void Method_2_A112B44B74475A57(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_A112B44B74475A57_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_F7139B0EA397B51B(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_F7139B0EA397B51B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_EFD7F43DBA49AA00(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_EFD7F43DBA49AA00_OFFSET))(a1, a2, a3);
	}
};
