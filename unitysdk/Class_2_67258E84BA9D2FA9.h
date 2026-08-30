#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddFinishMissionData_ConsumeItem; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_67258E84BA9D2FA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180D3560)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_064D6B5D4144D8E3_OFFSET UNITYSDK_OFFSET(0x180D3FD0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x180D3BA0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x180D3840)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_50E72C38C8458E05_OFFSET UNITYSDK_OFFSET(0x180D4250)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x180D44A0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_81611B17CA80C7D4_OFFSET UNITYSDK_OFFSET(0x180D3EF0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x180D4150)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x180D42F0)
#define CLASS_2_67258E84BA9D2FA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180D3750)
#define CLASS_2_67258E84BA9D2FA9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x180D3CD0)
#define CLASS_2_67258E84BA9D2FA9_TICK_OFFSET UNITYSDK_OFFSET(0x180D3DB0)
#define CLASS_2_67258E84BA9D2FA9__CTOR_OFFSET UNITYSDK_OFFSET(0x180D3470)

inline static constexpr unsigned int Class_2_67258E84BA9D2FA9_TypeDefinitionIndex = 52593;

class Class_2_67258E84BA9D2FA9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HKBOGHBKDCN; // 0x0
	// static const ::System::String* MHOLHFFKCMI; // 0x0
	::RPG::GameCore::AddFinishMissionData_ConsumeItem* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::SubMissionRow* EFLMIIAAEGP; // 0x20
	::Class_3_07C3C4D2990C49EE* IKNPCLDDCDI; // 0x28
	::Class_3_07C3C4D2990C49EE* JOABCNLPPGI; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::Class_3_07C3C4D2990C49EE* KPHGLEKEALH; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_ConsumeItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_ConsumeItem*))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_TICK_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* Method_2_81611B17CA80C7D4()
	{
		return ((::Il2CppArray<::RPG::GameCore::MissionItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_81611B17CA80C7D4_OFFSET))(this);
	}

	::System::Boolean Method_2_064D6B5D4144D8E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_064D6B5D4144D8E3_OFFSET))(this);
	}

	::System::Void Method_2_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_2_50E72C38C8458E05(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_50E72C38C8458E05_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
