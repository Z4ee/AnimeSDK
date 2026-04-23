#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PerformanceEndBlackText; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BBFA65C1D9BB1158_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x90BF410)
#define CLASS_3_BBFA65C1D9BB1158_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x90BF4B0)
#define CLASS_3_BBFA65C1D9BB1158_ONSKIP_OFFSET UNITYSDK_OFFSET(0x90BF540)
#define CLASS_3_BBFA65C1D9BB1158_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90BF420)
#define CLASS_3_BBFA65C1D9BB1158__CTOR_OFFSET UNITYSDK_OFFSET(0x90BF3E0)

inline static constexpr unsigned int Class_3_BBFA65C1D9BB1158_TypeDefinitionIndex = 48944;

class Class_3_BBFA65C1D9BB1158 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PerformanceEndBlackText*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceEndBlackText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceEndBlackText*))((::PBYTE)hIl2Cpp + CLASS_3_BBFA65C1D9BB1158__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBFA65C1D9BB1158_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBFA65C1D9BB1158_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBFA65C1D9BB1158_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBFA65C1D9BB1158_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
