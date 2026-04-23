#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_9E5975D2F490638C;
namespace RPG::GameCore { class PlayTimelinePrefab; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_6F357CAFD52135D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B2E750)
#define CLASS_2_6F357CAFD52135D8_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x11B2E880)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x11B2E980)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_2AE1D22D8089DE35_OFFSET UNITYSDK_OFFSET(0x11B2E1D0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11B2DB30)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11B2DBC0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_4AEE5A4C943256DD_OFFSET UNITYSDK_OFFSET(0x11B2D930)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_726354DCE97130D8_OFFSET UNITYSDK_OFFSET(0x11B2E900)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_76D245A8D1331E57_OFFSET UNITYSDK_OFFSET(0x11B2D4A0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x11B2D8A0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_8A6502AD56F70FAF_OFFSET UNITYSDK_OFFSET(0x11B2DEE0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_96FFD6FC64D41C33_OFFSET UNITYSDK_OFFSET(0x11B2EBD0)
#define CLASS_2_6F357CAFD52135D8_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x11B2E6F0)
#define CLASS_2_6F357CAFD52135D8_ONSKIP_OFFSET UNITYSDK_OFFSET(0x11B2E600)
#define CLASS_2_6F357CAFD52135D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B2D100)
#define CLASS_2_6F357CAFD52135D8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B2E830)
#define CLASS_2_6F357CAFD52135D8_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x11B2E890)
#define CLASS_2_6F357CAFD52135D8_TICK_OFFSET UNITYSDK_OFFSET(0x11B2DE60)
#define CLASS_2_6F357CAFD52135D8__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2D0E0)

inline static constexpr unsigned int Class_2_6F357CAFD52135D8_TypeDefinitionIndex = 48960;

class Class_2_6F357CAFD52135D8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x20
	::Class_1_9E5975D2F490638C* Field_2_5; // 0x28
	::RPG::GameCore::PlayTimelinePrefab* Field_2_1; // 0x30
	::Class_1_004034A1FAAF468A* Field_2_3; // 0x38
	::System::Single Field_2_6; // 0x40
	::System::Boolean Field_2_4; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTimelinePrefab* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTimelinePrefab*))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_GET_FORCESKIP_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4AEE5A4C943256DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_4AEE5A4C943256DD_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AE1D22D8089DE35(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_2AE1D22D8089DE35_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A6502AD56F70FAF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_8A6502AD56F70FAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_726354DCE97130D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_726354DCE97130D8_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_96FFD6FC64D41C33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_96FFD6FC64D41C33_OFFSET))(this, a1);
	}

	::System::Void Method_2_76D245A8D1331E57(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_76D245A8D1331E57_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}
};
