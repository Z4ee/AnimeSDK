#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ElfRefreshData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_CEC31247A799F28A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118CAA50)
#define CLASS_2_CEC31247A799F28A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x118CAB30)
#define CLASS_2_CEC31247A799F28A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118CA950)
#define CLASS_2_CEC31247A799F28A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118CA8C0)
#define CLASS_2_CEC31247A799F28A_TICK_OFFSET UNITYSDK_OFFSET(0x118CAAD0)
#define CLASS_2_CEC31247A799F28A__CTOR_OFFSET UNITYSDK_OFFSET(0x118CA8B0)

inline static constexpr unsigned int Class_2_CEC31247A799F28A_TypeDefinitionIndex = 46869;

class Class_2_CEC31247A799F28A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ElfRefreshData* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfRefreshData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfRefreshData*))((::PBYTE)hIl2Cpp + CLASS_2_CEC31247A799F28A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC31247A799F28A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC31247A799F28A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC31247A799F28A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CEC31247A799F28A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CEC31247A799F28A_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
