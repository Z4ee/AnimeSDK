#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomPrepare; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_77323F7276FEFE74_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152C92B0)
#define CLASS_2_77323F7276FEFE74_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x152C9660)
#define CLASS_2_77323F7276FEFE74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152C9350)
#define CLASS_2_77323F7276FEFE74_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152C95A0)
#define CLASS_2_77323F7276FEFE74_TICK_OFFSET UNITYSDK_OFFSET(0x152C92F0)
#define CLASS_2_77323F7276FEFE74__CTOR_OFFSET UNITYSDK_OFFSET(0x152C92A0)

inline static constexpr unsigned int Class_2_77323F7276FEFE74_TypeDefinitionIndex = 58596;

class Class_2_77323F7276FEFE74 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare*))((::PBYTE)hIl2Cpp + CLASS_2_77323F7276FEFE74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77323F7276FEFE74_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_77323F7276FEFE74_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77323F7276FEFE74_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77323F7276FEFE74_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_77323F7276FEFE74_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}
};
