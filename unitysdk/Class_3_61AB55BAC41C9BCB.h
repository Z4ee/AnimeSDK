#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_LookAt; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_3_61AB55BAC41C9BCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC404FE0)
#define CLASS_3_61AB55BAC41C9BCB_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC404F30)
#define CLASS_3_61AB55BAC41C9BCB_METHOD_3_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0xC4050B0)
#define CLASS_3_61AB55BAC41C9BCB_METHOD_3_A6C726B778E061BA_OFFSET UNITYSDK_OFFSET(0xC404890)
#define CLASS_3_61AB55BAC41C9BCB_METHOD_3_F2B4258B6CEFF677_OFFSET UNITYSDK_OFFSET(0xC404B40)
#define CLASS_3_61AB55BAC41C9BCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC404520)
#define CLASS_3_61AB55BAC41C9BCB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC404F90)
#define CLASS_3_61AB55BAC41C9BCB_TICK_OFFSET UNITYSDK_OFFSET(0xC404E40)
#define CLASS_3_61AB55BAC41C9BCB__CTOR_OFFSET UNITYSDK_OFFSET(0xC404460)

inline static constexpr unsigned int Class_3_61AB55BAC41C9BCB_TypeDefinitionIndex = 52569;

class Class_3_61AB55BAC41C9BCB : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_LookAt*>
{
public:
	::UnityEngine::Transform* NHNJKCPPLBA; // 0x28
	::UnityEngine::Transform* EBCMELBHDEJ; // 0x30
	::System::Single BPMNMDJIPLE; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_LookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_LookAt*))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_F2B4258B6CEFF677(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_METHOD_3_F2B4258B6CEFF677_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_A6C726B778E061BA()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_METHOD_3_A6C726B778E061BA_OFFSET))(this);
	}

	::System::Void Method_3_926A87EF7B2C87F9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_61AB55BAC41C9BCB_METHOD_3_926A87EF7B2C87F9_OFFSET))(this, a1);
	}
};
