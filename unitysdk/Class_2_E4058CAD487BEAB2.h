#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
namespace RPG::GameCore { class GridFightShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E4058CAD487BEAB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AD0F40)
#define CLASS_2_E4058CAD487BEAB2_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x8AD1530)
#define CLASS_2_E4058CAD487BEAB2_METHOD_2_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0x8AD1120)
#define CLASS_2_E4058CAD487BEAB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8AD0FE0)
#define CLASS_2_E4058CAD487BEAB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8AD1350)
#define CLASS_2_E4058CAD487BEAB2_TICK_OFFSET UNITYSDK_OFFSET(0x8AD13B0)
#define CLASS_2_E4058CAD487BEAB2__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD0F30)

inline static constexpr unsigned int Class_2_E4058CAD487BEAB2_TypeDefinitionIndex = 43371;

class Class_2_E4058CAD487BEAB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GridFightShowGuideHintWithText* Field_2_1; // 0x20
	::Class_1_69FF5DE516C87A66* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowGuideHintWithText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowGuideHintWithText*))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C945585B4A8C17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_METHOD_2_8C945585B4A8C17B_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}
};
