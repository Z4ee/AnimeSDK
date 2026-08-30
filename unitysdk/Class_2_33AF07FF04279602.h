#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveAssistAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_33AF07FF04279602_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E5CEF0)
#define CLASS_2_33AF07FF04279602_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E5CF40)
#define CLASS_2_33AF07FF04279602_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E5CFE0)
#define CLASS_2_33AF07FF04279602_TICK_OFFSET UNITYSDK_OFFSET(0x18E5D030)
#define CLASS_2_33AF07FF04279602__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5CEE0)

inline static constexpr unsigned int Class_2_33AF07FF04279602_TypeDefinitionIndex = 58534;

class Class_2_33AF07FF04279602 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveAssistAvatar* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAssistAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAssistAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_33AF07FF04279602__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AF07FF04279602_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AF07FF04279602_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AF07FF04279602_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33AF07FF04279602_TICK_OFFSET))(this, a1);
	}
};
