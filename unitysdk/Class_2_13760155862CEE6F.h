#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_72FF3C03F0F06A80;
class Class_1_DB9575801298F699;
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

#define CLASS_2_13760155862CEE6F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABC98F0)
#define CLASS_2_13760155862CEE6F_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xABCB1F0)
#define CLASS_2_13760155862CEE6F_METHOD_2_2B82A6C640A9C940_OFFSET UNITYSDK_OFFSET(0xABCC160)
#define CLASS_2_13760155862CEE6F_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xABCA4B0)
#define CLASS_2_13760155862CEE6F_METHOD_2_3D57569EEAF613B6_OFFSET UNITYSDK_OFFSET(0xABC9C50)
#define CLASS_2_13760155862CEE6F_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xABCB460)
#define CLASS_2_13760155862CEE6F_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xABCB3A0)
#define CLASS_2_13760155862CEE6F_METHOD_2_8C1C9660B1FCE875_OFFSET UNITYSDK_OFFSET(0xABCB850)
#define CLASS_2_13760155862CEE6F_METHOD_2_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0xABCA310)
#define CLASS_2_13760155862CEE6F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xABCA230)
#define CLASS_2_13760155862CEE6F_METHOD_2_A07EA6C551ECC2CC_OFFSET UNITYSDK_OFFSET(0xABCBED0)
#define CLASS_2_13760155862CEE6F_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xABCB6F0)
#define CLASS_2_13760155862CEE6F_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xABCB1A0)
#define CLASS_2_13760155862CEE6F_METHOD_2_DB423A05B471042F_OFFSET UNITYSDK_OFFSET(0xABCBC30)
#define CLASS_2_13760155862CEE6F_METHOD_2_E0F3A7E0D78CF15F_OFFSET UNITYSDK_OFFSET(0xABCA550)
#define CLASS_2_13760155862CEE6F_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0xABCB800)
#define CLASS_2_13760155862CEE6F_METHOD_2_EF4337C2149E8D3F_OFFSET UNITYSDK_OFFSET(0xABCAD80)
#define CLASS_2_13760155862CEE6F_METHOD_2_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0xABCBBC0)
#define CLASS_2_13760155862CEE6F_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xABCB3F0)
#define CLASS_2_13760155862CEE6F_METHOD_2_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xABCA3F0)
#define CLASS_2_13760155862CEE6F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABC9A70)
#define CLASS_2_13760155862CEE6F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xABC99A0)
#define CLASS_2_13760155862CEE6F_TICK_OFFSET UNITYSDK_OFFSET(0xABC9A00)
#define CLASS_2_13760155862CEE6F__CTOR_OFFSET UNITYSDK_OFFSET(0xABC9790)

inline static constexpr unsigned int Class_2_13760155862CEE6F_TypeDefinitionIndex = 54871;

class Class_2_13760155862CEE6F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LevelGraphConfig* Field_2_0; // 0x18
	::Class_1_DB9575801298F699* Field_2_1; // 0x20
	::Class_1_72FF3C03F0F06A80* Field_2_2; // 0x28
	::Class_2_E3332B678B8C5C07* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::RPG::GameCore::StartSummonUnitGameplay* Field_2_5; // 0x40
	::RPG::GameCore::SummonUnitGameplayConfig* Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::System::UInt32 Field_2_8; // 0x54

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

	::System::Boolean Method_2_3D57569EEAF613B6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_3D57569EEAF613B6_OFFSET))(this);
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

	::System::Void Method_2_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
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

	::RPG::GameCore::LevelGraphValueSource* Method_2_8C1C9660B1FCE875()
	{
		return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_8C1C9660B1FCE875_OFFSET))(this);
	}

	static ::System::Void Method_2_2B82A6C640A9C940(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_2B82A6C640A9C940_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_A07EA6C551ECC2CC(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_A07EA6C551ECC2CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_DB423A05B471042F(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_13760155862CEE6F_METHOD_2_DB423A05B471042F_OFFSET))(a1, a2, a3);
	}
};
