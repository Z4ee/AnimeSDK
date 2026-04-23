#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_Enable_Interact; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6334D7D4A4FC7A34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A5F1E0)
#define CLASS_3_6334D7D4A4FC7A34_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A5F0A0)
#define CLASS_3_6334D7D4A4FC7A34_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9A5F170)
#define CLASS_3_6334D7D4A4FC7A34_TICK_OFFSET UNITYSDK_OFFSET(0x9A5F110)
#define CLASS_3_6334D7D4A4FC7A34__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5F070)
#define CLASS_3_6334D7D4A4FC7A34___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A5F280)
#define CLASS_3_6334D7D4A4FC7A34___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9A5F220)

inline static constexpr unsigned int Class_3_6334D7D4A4FC7A34_TypeDefinitionIndex = 48270;

class Class_3_6334D7D4A4FC7A34 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*))((::PBYTE)hIl2Cpp + CLASS_3_6334D7D4A4FC7A34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6334D7D4A4FC7A34_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6334D7D4A4FC7A34_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6334D7D4A4FC7A34_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6334D7D4A4FC7A34_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6334D7D4A4FC7A34___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6334D7D4A4FC7A34___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
