#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStartMarbleGame; }
namespace System { class Object; }

#define CLASS_2_F82B612A8F728E79_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA430D40)
#define CLASS_2_F82B612A8F728E79_METHOD_2_2A1DB0895CBA0AB6_OFFSET UNITYSDK_OFFSET(0xA430F80)
#define CLASS_2_F82B612A8F728E79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA430C40)
#define CLASS_2_F82B612A8F728E79_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA430CF0)
#define CLASS_2_F82B612A8F728E79_TICK_OFFSET UNITYSDK_OFFSET(0xA430E10)
#define CLASS_2_F82B612A8F728E79__CTOR_OFFSET UNITYSDK_OFFSET(0xA430BB0)

inline static constexpr unsigned int Class_2_F82B612A8F728E79_TypeDefinitionIndex = 43323;

class Class_2_F82B612A8F728E79 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x20
	::RPG::GameCore::WaitStartMarbleGame* Field_2_1; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStartMarbleGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStartMarbleGame*))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A1DB0895CBA0AB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_METHOD_2_2A1DB0895CBA0AB6_OFFSET))(this, a1);
	}
};
