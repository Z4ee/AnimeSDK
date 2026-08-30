#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_4;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTransferFinishedEvent; }
namespace System { class Object; }

#define CLASS_2_0BD092E48844D80D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD26F470)
#define CLASS_2_0BD092E48844D80D_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xD26F590)
#define CLASS_2_0BD092E48844D80D_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xD26F700)
#define CLASS_2_0BD092E48844D80D_METHOD_2_9EA94CCB24F79E91_OFFSET UNITYSDK_OFFSET(0xD26F750)
#define CLASS_2_0BD092E48844D80D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD26F540)
#define CLASS_2_0BD092E48844D80D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD26F650)
#define CLASS_2_0BD092E48844D80D_TICK_OFFSET UNITYSDK_OFFSET(0xD26F6A0)
#define CLASS_2_0BD092E48844D80D__CTOR_OFFSET UNITYSDK_OFFSET(0xD26F460)

inline static constexpr unsigned int Class_2_0BD092E48844D80D_TypeDefinitionIndex = 59080;

class Class_2_0BD092E48844D80D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitTransferFinishedEvent* OFKGLJOAMLD; // 0x20
	::Class_1_5F51D4049EA87B7B* JLMAKNFAEBH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTransferFinishedEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTransferFinishedEvent*))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_9EA94CCB24F79E91(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_METHOD_2_9EA94CCB24F79E91_OFFSET))(this, a1);
	}
};
