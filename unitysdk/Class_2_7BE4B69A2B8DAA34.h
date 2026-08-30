#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowTransitionLoadingUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7BE4B69A2B8DAA34_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA8AA90)
#define CLASS_2_7BE4B69A2B8DAA34_METHOD_2_5C715D615BCEF8BF_OFFSET UNITYSDK_OFFSET(0xBA8AD60)
#define CLASS_2_7BE4B69A2B8DAA34_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA8AAD0)
#define CLASS_2_7BE4B69A2B8DAA34_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA8ACB0)
#define CLASS_2_7BE4B69A2B8DAA34_TICK_OFFSET UNITYSDK_OFFSET(0xBA8AD00)
#define CLASS_2_7BE4B69A2B8DAA34__CTOR_OFFSET UNITYSDK_OFFSET(0xBA8AA80)

inline static constexpr unsigned int Class_2_7BE4B69A2B8DAA34_TypeDefinitionIndex = 58845;

class Class_2_7BE4B69A2B8DAA34 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowTransitionLoadingUI* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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

	::System::Void Method_2_5C715D615BCEF8BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7BE4B69A2B8DAA34_METHOD_2_5C715D615BCEF8BF_OFFSET))(this, a1);
	}
};
