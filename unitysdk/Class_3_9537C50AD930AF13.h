#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_Unlock_Trait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9537C50AD930AF13_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4400D0)
#define CLASS_3_9537C50AD930AF13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC43FFB0)
#define CLASS_3_9537C50AD930AF13_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC440080)
#define CLASS_3_9537C50AD930AF13_TICK_OFFSET UNITYSDK_OFFSET(0xC440020)
#define CLASS_3_9537C50AD930AF13__CTOR_OFFSET UNITYSDK_OFFSET(0xC43FF80)
#define CLASS_3_9537C50AD930AF13___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC440170)
#define CLASS_3_9537C50AD930AF13___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC440110)

inline static constexpr unsigned int Class_3_9537C50AD930AF13_TypeDefinitionIndex = 48906;

class Class_3_9537C50AD930AF13 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
