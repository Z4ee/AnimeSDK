#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_37D832480CB327E1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropMoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_3E115EB5B8E48E03_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129A0480)
#define CLASS_2_3E115EB5B8E48E03_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x129A1BA0)
#define CLASS_2_3E115EB5B8E48E03_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0x129A1C80)
#define CLASS_2_3E115EB5B8E48E03_METHOD_2_EBE2C2E0D83478F7_OFFSET UNITYSDK_OFFSET(0x129A1570)
#define CLASS_2_3E115EB5B8E48E03_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x129A1A70)
#define CLASS_2_3E115EB5B8E48E03_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129A0620)
#define CLASS_2_3E115EB5B8E48E03_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x129A0520)
#define CLASS_2_3E115EB5B8E48E03_TICK_OFFSET UNITYSDK_OFFSET(0x129A05C0)
#define CLASS_2_3E115EB5B8E48E03__CTOR_OFFSET UNITYSDK_OFFSET(0x129A0470)

inline static constexpr unsigned int Class_2_3E115EB5B8E48E03_TypeDefinitionIndex = 53802;

class Class_2_3E115EB5B8E48E03 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_37D832480CB327E1* Field_2_3; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_4; // 0x20
	::RPG::GameCore::PropMoveTo* Field_2_0; // 0x28
	::RPG::GameCore::GameEntity* Field_2_2; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::UnityEngine::Vector3 Field_2_5; // 0x40
	::UnityEngine::Quaternion Field_2_6; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMoveTo*))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EBE2C2E0D83478F7(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3E115EB5B8E48E03_METHOD_2_EBE2C2E0D83478F7_OFFSET))(this, a1, a2, a3);
	}
};
