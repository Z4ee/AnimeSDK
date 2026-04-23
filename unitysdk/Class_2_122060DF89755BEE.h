#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DeferCreateTrialPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_122060DF89755BEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BC7410)
#define CLASS_2_122060DF89755BEE_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x11BC74F0)
#define CLASS_2_122060DF89755BEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BC7450)
#define CLASS_2_122060DF89755BEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BC7DC0)
#define CLASS_2_122060DF89755BEE_TICK_OFFSET UNITYSDK_OFFSET(0x11BC7E10)
#define CLASS_2_122060DF89755BEE__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC7400)

inline static constexpr unsigned int Class_2_122060DF89755BEE_TypeDefinitionIndex = 50727;

class Class_2_122060DF89755BEE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DeferCreateTrialPlayer* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeferCreateTrialPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeferCreateTrialPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_122060DF89755BEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_122060DF89755BEE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_122060DF89755BEE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_122060DF89755BEE_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_122060DF89755BEE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_122060DF89755BEE_TICK_OFFSET))(this, a1);
	}
};
