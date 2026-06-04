#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SaveMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_869F756181C0C066_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13989D80)
#define CLASS_2_869F756181C0C066_METHOD_2_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0x13989DD0)
#define CLASS_2_869F756181C0C066_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x13989F70)
#define CLASS_2_869F756181C0C066_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1398A160)
#define CLASS_2_869F756181C0C066_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13989E90)
#define CLASS_2_869F756181C0C066_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1398A030)
#define CLASS_2_869F756181C0C066_TICK_OFFSET UNITYSDK_OFFSET(0x1398A080)
#define CLASS_2_869F756181C0C066__CTOR_OFFSET UNITYSDK_OFFSET(0x13989D60)

inline static constexpr unsigned int Class_2_869F756181C0C066_TypeDefinitionIndex = 54655;

class Class_2_869F756181C0C066 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SaveMessage* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SaveMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SaveMessage*))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066_METHOD_2_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_869F756181C0C066_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
