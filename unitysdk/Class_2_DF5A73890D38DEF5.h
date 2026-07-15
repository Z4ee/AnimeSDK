#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_5F4D64A4B97E38F9;
class Class_3_8B26808C73AFBC57;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DF5A73890D38DEF5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1937A9A0)
#define CLASS_2_DF5A73890D38DEF5_METHOD_2_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x1937A9E0)
#define CLASS_2_DF5A73890D38DEF5_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1937A760)
#define CLASS_2_DF5A73890D38DEF5_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1937AAB0)
#define CLASS_2_DF5A73890D38DEF5_METHOD_2_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x1937AB10)
#define CLASS_2_DF5A73890D38DEF5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1937A660)
#define CLASS_2_DF5A73890D38DEF5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1937A8D0)
#define CLASS_2_DF5A73890D38DEF5_TICK_OFFSET UNITYSDK_OFFSET(0x1937A920)
#define CLASS_2_DF5A73890D38DEF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1937A650)

inline static constexpr unsigned int Class_2_DF5A73890D38DEF5_TypeDefinitionIndex = 50422;

class Class_2_DF5A73890D38DEF5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::Class_3_8B26808C73AFBC57* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8B26808C73AFBC57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8B26808C73AFBC57*))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Boolean Method_2_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_METHOD_2_42C5BADE1C9EFC80_OFFSET))(this);
	}

	static ::System::Boolean Method_2_DE45EA3A177BC33B(::Class_1_5F4D64A4B97E38F9*& a1)
	{
		return ((::System::Boolean(*)(::Class_1_5F4D64A4B97E38F9*&))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_METHOD_2_DE45EA3A177BC33B_OFFSET))(a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
