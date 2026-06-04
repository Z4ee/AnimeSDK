#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseMainCharacterOnly; }

#define CLASS_2_49FBA1BD80F8C721_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA66D650)
#define CLASS_2_49FBA1BD80F8C721_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA66D690)
#define CLASS_2_49FBA1BD80F8C721_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA66D730)
#define CLASS_2_49FBA1BD80F8C721_TICK_OFFSET UNITYSDK_OFFSET(0xA66D780)
#define CLASS_2_49FBA1BD80F8C721__CTOR_OFFSET UNITYSDK_OFFSET(0xA66D640)

inline static constexpr unsigned int Class_2_49FBA1BD80F8C721_TypeDefinitionIndex = 49958;

class Class_2_49FBA1BD80F8C721 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseMainCharacterOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseMainCharacterOnly*))((::PBYTE)hIl2Cpp + CLASS_2_49FBA1BD80F8C721__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49FBA1BD80F8C721_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49FBA1BD80F8C721_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49FBA1BD80F8C721_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49FBA1BD80F8C721_TICK_OFFSET))(this, a1);
	}
};
