#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowTransitionLoadingUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7BE4B69A2B8DAA34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D5BFE0)
#define CLASS_2_7BE4B69A2B8DAA34_METHOD_2_1650D7D6437FCD61_OFFSET UNITYSDK_OFFSET(0x8D5C210)
#define CLASS_2_7BE4B69A2B8DAA34_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D5C020)
#define CLASS_2_7BE4B69A2B8DAA34_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D5C160)
#define CLASS_2_7BE4B69A2B8DAA34_TICK_OFFSET UNITYSDK_OFFSET(0x8D5C1B0)
#define CLASS_2_7BE4B69A2B8DAA34__CTOR_OFFSET UNITYSDK_OFFSET(0x8D5BFD0)

inline static constexpr unsigned int Class_2_7BE4B69A2B8DAA34_TypeDefinitionIndex = 47378;

class Class_2_7BE4B69A2B8DAA34 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowTransitionLoadingUI* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTransitionLoadingUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTransitionLoadingUI*))((::PBYTE)hIl2Cpp + CLASS_2_7BE4B69A2B8DAA34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE4B69A2B8DAA34_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE4B69A2B8DAA34_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE4B69A2B8DAA34_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7BE4B69A2B8DAA34_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1650D7D6437FCD61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7BE4B69A2B8DAA34_METHOD_2_1650D7D6437FCD61_OFFSET))(this, a1);
	}
};
