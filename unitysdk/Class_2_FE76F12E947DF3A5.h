#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FinishRogueAeonTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FE76F12E947DF3A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BCCB50)
#define CLASS_2_FE76F12E947DF3A5_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10BCCCF0)
#define CLASS_2_FE76F12E947DF3A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BCCB90)
#define CLASS_2_FE76F12E947DF3A5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BCCC40)
#define CLASS_2_FE76F12E947DF3A5_TICK_OFFSET UNITYSDK_OFFSET(0x10BCCC90)
#define CLASS_2_FE76F12E947DF3A5__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCCB40)

inline static constexpr unsigned int Class_2_FE76F12E947DF3A5_TypeDefinitionIndex = 46895;

class Class_2_FE76F12E947DF3A5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::FinishRogueAeonTalk* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FE76F12E947DF3A5_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
