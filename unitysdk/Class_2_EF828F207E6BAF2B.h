#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_2_A48F3719AA1CF200_4;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitCustomString; }

#define CLASS_2_EF828F207E6BAF2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBB70F0)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xBBB7010)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_2CF9E14253AFCB8E_OFFSET UNITYSDK_OFFSET(0xBBB7490)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xBBB7440)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xBBB7140)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0xBBB7290)
#define CLASS_2_EF828F207E6BAF2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB7220)
#define CLASS_2_EF828F207E6BAF2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBB7390)
#define CLASS_2_EF828F207E6BAF2B_TICK_OFFSET UNITYSDK_OFFSET(0xBBB73E0)
#define CLASS_2_EF828F207E6BAF2B__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB6FF0)

inline static constexpr unsigned int Class_2_EF828F207E6BAF2B_TypeDefinitionIndex = 59028;

class Class_2_EF828F207E6BAF2B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* JLMAKNFAEBH; // 0x18
	::RPG::GameCore::WaitCustomString* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Boolean NCDPNHDBKKG; // 0x30
	::System::Boolean GGJECIOIBCJ; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitCustomString*))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_2CF9E14253AFCB8E(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_2CF9E14253AFCB8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}
};
