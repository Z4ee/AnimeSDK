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

#define CLASS_2_FECFCCBC83A5D230_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E38BD0)
#define CLASS_2_FECFCCBC83A5D230_METHOD_2_12621FA4C7C3BFC8_OFFSET UNITYSDK_OFFSET(0x15E39D60)
#define CLASS_2_FECFCCBC83A5D230_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15E3A2C0)
#define CLASS_2_FECFCCBC83A5D230_METHOD_2_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0x15E3A3B0)
#define CLASS_2_FECFCCBC83A5D230_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15E3A190)
#define CLASS_2_FECFCCBC83A5D230_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E38D70)
#define CLASS_2_FECFCCBC83A5D230_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E38C70)
#define CLASS_2_FECFCCBC83A5D230_TICK_OFFSET UNITYSDK_OFFSET(0x15E38D10)
#define CLASS_2_FECFCCBC83A5D230__CTOR_OFFSET UNITYSDK_OFFSET(0x15E38BC0)

inline static constexpr unsigned int Class_2_FECFCCBC83A5D230_TypeDefinitionIndex = 55751;

class Class_2_FECFCCBC83A5D230 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PropMoveTo* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::Class_2_37D832480CB327E1* Field_2_3; // 0x30
	::RPG::GameCore::TransformComponent* Field_2_4; // 0x38
	::UnityEngine::Vector3 Field_2_5; // 0x40
	::UnityEngine::Quaternion Field_2_6; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMoveTo*))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_METHOD_2_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12621FA4C7C3BFC8(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_METHOD_2_12621FA4C7C3BFC8_OFFSET))(this, a1, a2, a3);
	}
};
