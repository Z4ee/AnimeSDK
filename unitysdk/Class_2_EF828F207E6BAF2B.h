#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_2_A48F3719AA1CF200_5;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitCustomString; }

#define CLASS_2_EF828F207E6BAF2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA842D40)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xA842C60)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xA843090)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA842D90)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0xA8430E0)
#define CLASS_2_EF828F207E6BAF2B_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA842F40)
#define CLASS_2_EF828F207E6BAF2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA842E70)
#define CLASS_2_EF828F207E6BAF2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA842FE0)
#define CLASS_2_EF828F207E6BAF2B_TICK_OFFSET UNITYSDK_OFFSET(0xA843030)
#define CLASS_2_EF828F207E6BAF2B__CTOR_OFFSET UNITYSDK_OFFSET(0xA842C40)

inline static constexpr unsigned int Class_2_EF828F207E6BAF2B_TypeDefinitionIndex = 55013;

class Class_2_EF828F207E6BAF2B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::WaitCustomString* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31

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

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_EF343326A0C7462C(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_EF343326A0C7462C_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF828F207E6BAF2B_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}
};
