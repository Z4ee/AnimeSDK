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

#define CLASS_2_6F357CAFD52135D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1640FC70)
#define CLASS_2_6F357CAFD52135D8_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1640FDD0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0x198DBB30)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x198DB750)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1640F260)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_76D245A8D1331E57_OFFSET UNITYSDK_OFFSET(0x198DBFC0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x198DBF30)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_96FFD6FC64D41C33_OFFSET UNITYSDK_OFFSET(0x198DBDA0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0x1640F3D0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_BBF4A547D7671F86_OFFSET UNITYSDK_OFFSET(0x1640F6C0)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0x198DB840)
#define CLASS_2_6F357CAFD52135D8_METHOD_2_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x1640F4E0)
#define CLASS_2_6F357CAFD52135D8_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1640FC10)
#define CLASS_2_6F357CAFD52135D8_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1640FAE0)
#define CLASS_2_6F357CAFD52135D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1640EF40)
#define CLASS_2_6F357CAFD52135D8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1640FD80)
#define CLASS_2_6F357CAFD52135D8_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1640FDE0)
#define CLASS_2_6F357CAFD52135D8_TICK_OFFSET UNITYSDK_OFFSET(0x1640F460)
#define CLASS_2_6F357CAFD52135D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1640EF20)

inline static constexpr unsigned int Class_2_6F357CAFD52135D8_TypeDefinitionIndex = 53362;

class Class_2_6F357CAFD52135D8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_F061A380F0650BCC* CPIIOIPAAKK; // 0x18
	::Class_1_5F51D4049EA87B7B* CJHJNLGOJLA; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::PlayTimelinePrefab* OFKGLJOAMLD; // 0x30
	::Class_1_004034A1FAAF468A* CECMCLKCIFD; // 0x38
	::System::Boolean OOEEIFJPGLB; // 0x40
	::System::Single NCEFBJLLLLD; // 0x44

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

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBF4A547D7671F86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_BBF4A547D7671F86_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3ADA5CA2C064E44(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F357CAFD52135D8_METHOD_2_E3ADA5CA2C064E44_OFFSET))(this, a1);
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
