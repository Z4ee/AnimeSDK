#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_SetEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A372FA4C29F4FF51_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1164F710)
#define CLASS_3_A372FA4C29F4FF51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1164F430)
#define CLASS_3_A372FA4C29F4FF51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1164F6C0)
#define CLASS_3_A372FA4C29F4FF51_TICK_OFFSET UNITYSDK_OFFSET(0x1164F660)
#define CLASS_3_A372FA4C29F4FF51__CTOR_OFFSET UNITYSDK_OFFSET(0x1164F400)
#define CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1164F7B0)
#define CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1164F750)

inline static constexpr unsigned int Class_3_A372FA4C29F4FF51_TypeDefinitionIndex = 42314;

class Class_3_A372FA4C29F4FF51 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_SetEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
