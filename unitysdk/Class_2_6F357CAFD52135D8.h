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

#define CLASS_2_6F357CAFD52135D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E97A80)
#define CLASS_2_6F357CAFD52135D8_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15E97BE0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0x15E97D50)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x15E97C60)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_2AE1D22D8089DE35_OFFSET UNITYSDK_OFFSET(0x15E97440)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_4AEE5A4C943256DD_OFFSET UNITYSDK_OFFSET(0x15E96BC0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_76D245A8D1331E57_OFFSET UNITYSDK_OFFSET(0x15E96760)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x15E96B30)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_8A6502AD56F70FAF_OFFSET UNITYSDK_OFFSET(0x15E971C0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_96FFD6FC64D41C33_OFFSET UNITYSDK_OFFSET(0x15E97FC0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0x15E96DC0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0x15E96E50)
#define CLASS_2_6F357CAFD52135D8_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15E97A20)
#define CLASS_2_6F357CAFD52135D8_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15E978F0)
#define CLASS_2_6F357CAFD52135D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E963A0)
#define CLASS_2_6F357CAFD52135D8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E97B90)
#define CLASS_2_6F357CAFD52135D8_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x15E97BF0)
#define CLASS_2_6F357CAFD52135D8_TICK_OFFSET UNITYSDK_OFFSET(0x15E97140)
#define CLASS_2_6F357CAFD52135D8__CTOR_OFFSET UNITYSDK_OFFSET(0x15E96380)

inline static constexpr unsigned int Class_2_6F357CAFD52135D8_TypeDefinitionIndex = 50680;

class Class_2_6F357CAFD52135D8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayTimelinePrefab* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_F061A380F0650BCC* Field_2_2; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x30
	::Class_1_004034A1FAAF468A* Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x44

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

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AE1D22D8089DE35(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_2AE1D22D8089DE35_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A6502AD56F70FAF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_8A6502AD56F70FAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_2_C3CD621FE895B79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_C3CD621FE895B79A_OFFSET))(this);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
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
