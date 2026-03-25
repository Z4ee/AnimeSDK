#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class QuestProgressChangeListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C8A030A88FC1340F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10911F50)
#define CLASS_2_C8A030A88FC1340F_METHOD_2_1AE24536EC302522_OFFSET UNITYSDK_OFFSET(0x109121A0)
#define CLASS_2_C8A030A88FC1340F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10911ED0)
#define CLASS_2_C8A030A88FC1340F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10911CA0)
#define CLASS_2_C8A030A88FC1340F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10911E20)
#define CLASS_2_C8A030A88FC1340F_TICK_OFFSET UNITYSDK_OFFSET(0x10912030)
#define CLASS_2_C8A030A88FC1340F__CTOR_OFFSET UNITYSDK_OFFSET(0x10911C80)

inline static constexpr unsigned int Class_2_C8A030A88FC1340F_TypeDefinitionIndex = 47107;

class Class_2_C8A030A88FC1340F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::QuestProgressChangeListener* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QuestProgressChangeListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QuestProgressChangeListener*))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_1AE24536EC302522(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_METHOD_2_1AE24536EC302522_OFFSET))(this, a1);
	}
};
