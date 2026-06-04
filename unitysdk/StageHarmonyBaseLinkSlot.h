#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class StageHarmonyDemodulator;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define STAGEHARMONYBASELINKSLOT_METHOD_1_BD8CC0653430F458_OFFSET UNITYSDK_OFFSET(0xD096410)
#define STAGEHARMONYBASELINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xD095390)

inline static constexpr unsigned int StageHarmonyBaseLinkSlot_TypeDefinitionIndex = 44829;

class StageHarmonyBaseLinkSlot : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::StageHarmonyDemodulator*>* Demodulators; // 0x10
	::StageHarmonyDemodulator* Demodulator; // 0x18
	::UnityEngine::Object* hostObject; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYBASELINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BD8CC0653430F458(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + STAGEHARMONYBASELINKSLOT_METHOD_1_BD8CC0653430F458_OFFSET))(this, a1);
	}
};
