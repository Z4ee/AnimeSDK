#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPhotoGraphResult; }
namespace System { class Object; }

#define CLASS_2_07679197BCAF6F4B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11184950)
#define CLASS_2_07679197BCAF6F4B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11184BB0)
#define CLASS_2_07679197BCAF6F4B_METHOD_2_BD72FB836207A117_OFFSET UNITYSDK_OFFSET(0x11184D90)
#define CLASS_2_07679197BCAF6F4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11184C40)
#define CLASS_2_07679197BCAF6F4B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11184CC0)
#define CLASS_2_07679197BCAF6F4B_TICK_OFFSET UNITYSDK_OFFSET(0x11184A30)
#define CLASS_2_07679197BCAF6F4B__CTOR_OFFSET UNITYSDK_OFFSET(0x11184860)

inline static constexpr unsigned int Class_2_07679197BCAF6F4B_TypeDefinitionIndex = 43313;

class Class_2_07679197BCAF6F4B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x20
	::RPG::GameCore::WaitPhotoGraphResult* Field_2_0; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::System::Boolean Field_2_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPhotoGraphResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPhotoGraphResult*))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_BD72FB836207A117(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_METHOD_2_BD72FB836207A117_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
