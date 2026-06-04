#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_Wait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8BA3ABAFCB7BD6A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1365A650)
#define CLASS_3_8BA3ABAFCB7BD6A2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1365A6A0)
#define CLASS_3_8BA3ABAFCB7BD6A2_TICK_OFFSET UNITYSDK_OFFSET(0x1365A6F0)
#define CLASS_3_8BA3ABAFCB7BD6A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1365A610)
#define CLASS_3_8BA3ABAFCB7BD6A2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1365A770)

inline static constexpr unsigned int Class_3_8BA3ABAFCB7BD6A2_TypeDefinitionIndex = 48833;

class Class_3_8BA3ABAFCB7BD6A2 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Wait*>
{
public:
	::System::Single Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Wait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Wait*))((::PBYTE)hIl2Cpp + CLASS_3_8BA3ABAFCB7BD6A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BA3ABAFCB7BD6A2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BA3ABAFCB7BD6A2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8BA3ABAFCB7BD6A2_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8BA3ABAFCB7BD6A2___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
