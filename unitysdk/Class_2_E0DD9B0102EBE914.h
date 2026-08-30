#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyTriggerMoveToNextMap; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E0DD9B0102EBE914_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13061050)
#define CLASS_2_E0DD9B0102EBE914_METHOD_2_5C715D615BCEF8BF_OFFSET UNITYSDK_OFFSET(0x13060F40)
#define CLASS_2_E0DD9B0102EBE914_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13060E10)
#define CLASS_2_E0DD9B0102EBE914_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13061000)
#define CLASS_2_E0DD9B0102EBE914_TICK_OFFSET UNITYSDK_OFFSET(0x13061090)
#define CLASS_2_E0DD9B0102EBE914__CTOR_OFFSET UNITYSDK_OFFSET(0x13060E00)

inline static constexpr unsigned int Class_2_E0DD9B0102EBE914_TypeDefinitionIndex = 58376;

class Class_2_E0DD9B0102EBE914 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::MonopolyTriggerMoveToNextMap* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_5C715D615BCEF8BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_METHOD_2_5C715D615BCEF8BF_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_TICK_OFFSET))(this, a1);
	}
};
