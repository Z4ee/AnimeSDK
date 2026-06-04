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

#define CLASS_2_59F2B0187B2F423C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF12CB0)
#define CLASS_2_59F2B0187B2F423C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAF12E10)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0xAF12F10)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_2AE1D22D8089DE35_OFFSET UNITYSDK_OFFSET(0xAF126D0)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_4AEE5A4C943256DD_OFFSET UNITYSDK_OFFSET(0xAF11DE0)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xAF11D50)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_8A6502AD56F70FAF_OFFSET UNITYSDK_OFFSET(0xAF123E0)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_96FFD6FC64D41C33_OFFSET UNITYSDK_OFFSET(0xAF13180)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_A6C0B798FD939210_OFFSET UNITYSDK_OFFSET(0xAF11980)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0xAF11FE0)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_B03BD337C608E98D_OFFSET UNITYSDK_OFFSET(0xAF12E90)
#define CLASS_2_59F2B0187B2F423C_METHOD_2_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0xAF12070)
#define CLASS_2_59F2B0187B2F423C_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAF12C50)
#define CLASS_2_59F2B0187B2F423C_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAF12B20)
#define CLASS_2_59F2B0187B2F423C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF115C0)
#define CLASS_2_59F2B0187B2F423C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF12DC0)
#define CLASS_2_59F2B0187B2F423C_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xAF12E20)
#define CLASS_2_59F2B0187B2F423C_TICK_OFFSET UNITYSDK_OFFSET(0xAF12360)
#define CLASS_2_59F2B0187B2F423C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF115A0)

inline static constexpr unsigned int Class_2_59F2B0187B2F423C_TypeDefinitionIndex = 49626;

class Class_2_59F2B0187B2F423C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayTimelinePrefab* Field_2_0; // 0x18
	::Class_1_F061A380F0650BCC* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::Class_1_004034A1FAAF468A* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x44

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

	::System::Void Method_2_B03BD337C608E98D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F2B0187B2F423C_METHOD_2_B03BD337C608E98D_OFFSET))(this);
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
