#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FinishRogueAeonTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FE76F12E947DF3A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1351E900)
#define CLASS_2_FE76F12E947DF3A5_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1351EAB0)
#define CLASS_2_FE76F12E947DF3A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1351E940)
#define CLASS_2_FE76F12E947DF3A5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1351EA00)
#define CLASS_2_FE76F12E947DF3A5_TICK_OFFSET UNITYSDK_OFFSET(0x1351EA50)
#define CLASS_2_FE76F12E947DF3A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1351E8F0)

inline static constexpr unsigned int Class_2_FE76F12E947DF3A5_TypeDefinitionIndex = 58275;

class Class_2_FE76F12E947DF3A5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::FinishRogueAeonTalk* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishRogueAeonTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishRogueAeonTalk*))((::PBYTE)hIl2Cpp + CLASS_2_FE76F12E947DF3A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE76F12E947DF3A5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE76F12E947DF3A5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE76F12E947DF3A5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE76F12E947DF3A5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FE76F12E947DF3A5_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
