#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_F061A380F0650BCC;
namespace RPG::GameCore { class PlayTimelinePrefab; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_59F2B0187B2F423C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2482C0)
#define CLASS_2_59F2B0187B2F423C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC248420)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0xC248590)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0xC2484A0)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_2AE1D22D8089DE35_OFFSET UNITYSDK_OFFSET(0xC247C80)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_4AEE5A4C943256DD_OFFSET UNITYSDK_OFFSET(0xC247400)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xC247370)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_8A6502AD56F70FAF_OFFSET UNITYSDK_OFFSET(0xC247A00)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_96FFD6FC64D41C33_OFFSET UNITYSDK_OFFSET(0xC248800)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_A6C0B798FD939210_OFFSET UNITYSDK_OFFSET(0xC246FB0)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0xC247600)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0xC247690)
#define CLASS_2_59F2B0187B2F423C_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC248260)
#define CLASS_2_59F2B0187B2F423C_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC248130)
#define CLASS_2_59F2B0187B2F423C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC246BF0)
#define CLASS_2_59F2B0187B2F423C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2483D0)
#define CLASS_2_59F2B0187B2F423C_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xC248430)
#define CLASS_2_59F2B0187B2F423C_TICK_OFFSET UNITYSDK_OFFSET(0xC247980)
#define CLASS_2_59F2B0187B2F423C__CTOR_OFFSET UNITYSDK_OFFSET(0xC246BD0)

inline static constexpr unsigned int Class_2_59F2B0187B2F423C_TypeDefinitionIndex = 53104;

class Class_2_59F2B0187B2F423C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_004034A1FAAF468A* CECMCLKCIFD; // 0x20
	::RPG::GameCore::PlayTimelinePrefab* OFKGLJOAMLD; // 0x28
	::Class_1_F061A380F0650BCC* CPIIOIPAAKK; // 0x30
	::Class_1_5F51D4049EA87B7B* CJHJNLGOJLA; // 0x38
	::System::Boolean OOEEIFJPGLB; // 0x40
	::System::Single NCEFBJLLLLD; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTimelinePrefab* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTimelinePrefab*))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_GET_FORCESKIP_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4AEE5A4C943256DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_4AEE5A4C943256DD_OFFSET))(this);
	}

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AE1D22D8089DE35(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_2AE1D22D8089DE35_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A6502AD56F70FAF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_8A6502AD56F70FAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_2_C3CD621FE895B79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_C3CD621FE895B79A_OFFSET))(this);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}

	::System::Void Method_2_96FFD6FC64D41C33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_96FFD6FC64D41C33_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6C0B798FD939210(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_A6C0B798FD939210_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}
};
