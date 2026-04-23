#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceCurrentHeartDialNPC; }

#define CLASS_2_0C01C4DCA7FF5113_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A7CB90)
#define CLASS_2_0C01C4DCA7FF5113_METHOD_2_722DE18E0CFA1CB5_OFFSET UNITYSDK_OFFSET(0x12A7CE50)
#define CLASS_2_0C01C4DCA7FF5113_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A7CBD0)
#define CLASS_2_0C01C4DCA7FF5113_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A7D090)
#define CLASS_2_0C01C4DCA7FF5113_TICK_OFFSET UNITYSDK_OFFSET(0x12A7D0E0)
#define CLASS_2_0C01C4DCA7FF5113__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7CB80)

inline static constexpr unsigned int Class_2_0C01C4DCA7FF5113_TypeDefinitionIndex = 49239;

class Class_2_0C01C4DCA7FF5113 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TraceCurrentHeartDialNPC* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceCurrentHeartDialNPC*))((::PBYTE)hIl2Cpp + CLASS_2_0C01C4DCA7FF5113__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C01C4DCA7FF5113_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C01C4DCA7FF5113_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C01C4DCA7FF5113_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0C01C4DCA7FF5113_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_722DE18E0CFA1CB5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapNpcDef* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_0C01C4DCA7FF5113_METHOD_2_722DE18E0CFA1CB5_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
