#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerSkillAbort; }
namespace System { class Object; }

#define CLASS_2_3EC73B12CDAE9A3A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11458FA0)
#define CLASS_2_3EC73B12CDAE9A3A_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x11459270)
#define CLASS_2_3EC73B12CDAE9A3A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11459340)
#define CLASS_2_3EC73B12CDAE9A3A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114590E0)
#define CLASS_2_3EC73B12CDAE9A3A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11459180)
#define CLASS_2_3EC73B12CDAE9A3A_TICK_OFFSET UNITYSDK_OFFSET(0x11459080)
#define CLASS_2_3EC73B12CDAE9A3A__CTOR_OFFSET UNITYSDK_OFFSET(0x11458F10)

inline static constexpr unsigned int Class_2_3EC73B12CDAE9A3A_TypeDefinitionIndex = 43314;

class Class_2_3EC73B12CDAE9A3A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x20
	::RPG::GameCore::WaitPlayerSkillAbort* Field_2_0; // 0x28
	::System::Boolean Field_2_2; // 0x30

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

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EC73B12CDAE9A3A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
