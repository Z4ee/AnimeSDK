#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerSkillAbort; }
namespace System { class Object; }

#define CLASS_2_3EC73B12CDAE9A3A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160083C0)
#define CLASS_2_3EC73B12CDAE9A3A_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x16008730)
#define CLASS_2_3EC73B12CDAE9A3A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16008850)
#define CLASS_2_3EC73B12CDAE9A3A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16008570)
#define CLASS_2_3EC73B12CDAE9A3A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16008620)
#define CLASS_2_3EC73B12CDAE9A3A_TICK_OFFSET UNITYSDK_OFFSET(0x16008510)
#define CLASS_2_3EC73B12CDAE9A3A__CTOR_OFFSET UNITYSDK_OFFSET(0x16008330)

inline static constexpr unsigned int Class_2_3EC73B12CDAE9A3A_TypeDefinitionIndex = 53741;

class Class_2_3EC73B12CDAE9A3A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitPlayerSkillAbort* OFKGLJOAMLD; // 0x20
	::Class_3_07C3C4D2990C49EE* EMOELIFPFCC; // 0x28
	::System::Boolean MFGHMLJJNIG; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerSkillAbort* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerSkillAbort*))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
