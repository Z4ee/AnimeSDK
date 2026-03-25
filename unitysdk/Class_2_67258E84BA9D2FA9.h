#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AddFinishMissionData_ConsumeItem; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_67258E84BA9D2FA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A9F5B0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_064D6B5D4144D8E3_OFFSET UNITYSDK_OFFSET(0x10A9FF50)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x10A9FB30)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x10A9F790)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_50E72C38C8458E05_OFFSET UNITYSDK_OFFSET(0x10AA01D0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x10AA03F0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_81611B17CA80C7D4_OFFSET UNITYSDK_OFFSET(0x10A9FE80)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x10AA00E0)
#define CLASS_2_67258E84BA9D2FA9_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x10AA0270)
#define CLASS_2_67258E84BA9D2FA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A9F6B0)
#define CLASS_2_67258E84BA9D2FA9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A9FC60)
#define CLASS_2_67258E84BA9D2FA9_TICK_OFFSET UNITYSDK_OFFSET(0x10A9FD40)
#define CLASS_2_67258E84BA9D2FA9__CTOR_OFFSET UNITYSDK_OFFSET(0x10A9F4C0)

inline static constexpr unsigned int Class_2_67258E84BA9D2FA9_TypeDefinitionIndex = 42333;

class Class_2_67258E84BA9D2FA9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::SubMissionRow* Field_2_5; // 0x28
	::RPG::GameCore::AddFinishMissionData_ConsumeItem* Field_2_0; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x40

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

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67258E84BA9D2FA9_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
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
