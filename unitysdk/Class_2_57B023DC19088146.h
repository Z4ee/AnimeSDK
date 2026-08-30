#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CollectionStopBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_57B023DC19088146_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD1C230)
#define CLASS_2_57B023DC19088146_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCD1C270)
#define CLASS_2_57B023DC19088146_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCD1C4B0)
#define CLASS_2_57B023DC19088146_TICK_OFFSET UNITYSDK_OFFSET(0xCD1C500)
#define CLASS_2_57B023DC19088146__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1C220)

inline static constexpr unsigned int Class_2_57B023DC19088146_TypeDefinitionIndex = 58185;

class Class_2_57B023DC19088146 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	// static const ::System::String* NOIGFGJJDLB; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CollectionStopBubbleTalk* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectionStopBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectionStopBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_57B023DC19088146__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57B023DC19088146_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57B023DC19088146_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57B023DC19088146_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57B023DC19088146_TICK_OFFSET))(this, a1);
	}
};
