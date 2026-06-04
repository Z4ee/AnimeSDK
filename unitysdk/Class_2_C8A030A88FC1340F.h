#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class QuestProgressChangeListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C8A030A88FC1340F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB003D80)
#define CLASS_2_C8A030A88FC1340F_METHOD_2_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0xB003F60)
#define CLASS_2_C8A030A88FC1340F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB003CD0)
#define CLASS_2_C8A030A88FC1340F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB003AB0)
#define CLASS_2_C8A030A88FC1340F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB003C80)
#define CLASS_2_C8A030A88FC1340F_TICK_OFFSET UNITYSDK_OFFSET(0xB003DF0)
#define CLASS_2_C8A030A88FC1340F__CTOR_OFFSET UNITYSDK_OFFSET(0xB003A90)

inline static constexpr unsigned int Class_2_C8A030A88FC1340F_TypeDefinitionIndex = 54564;

class Class_2_C8A030A88FC1340F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::QuestProgressChangeListener* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x34

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

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_0986B6F765C6D4BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8A030A88FC1340F_METHOD_2_0986B6F765C6D4BF_OFFSET))(this, a1);
	}
};
