#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReturnToLoginPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E90B1FA7145C1F87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13848D70)
#define CLASS_2_E90B1FA7145C1F87_METHOD_2_5FBAD89A54D9F070_1_OFFSET UNITYSDK_OFFSET(0x13848DC0)
#define CLASS_2_E90B1FA7145C1F87_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x13848F10)
#define CLASS_2_E90B1FA7145C1F87_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x13848FD0)
#define CLASS_2_E90B1FA7145C1F87_METHOD_2_BF89C115E2404429_OFFSET UNITYSDK_OFFSET(0x13849100)
#define CLASS_2_E90B1FA7145C1F87_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13848E80)
#define CLASS_2_E90B1FA7145C1F87_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13849050)
#define CLASS_2_E90B1FA7145C1F87_TICK_OFFSET UNITYSDK_OFFSET(0x138490A0)
#define CLASS_2_E90B1FA7145C1F87__CTOR_OFFSET UNITYSDK_OFFSET(0x13848D60)

inline static constexpr unsigned int Class_2_E90B1FA7145C1F87_TypeDefinitionIndex = 49732;

class Class_2_E90B1FA7145C1F87 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ReturnToLoginPage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReturnToLoginPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReturnToLoginPage*))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_METHOD_2_5FBAD89A54D9F070_1_OFFSET))(this);
	}

	::System::Void Method_2_BF89C115E2404429(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_METHOD_2_BF89C115E2404429_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90B1FA7145C1F87_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}
};
