#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class ST_Main_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_84A2A1B7D74CC006_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12387BD0)
#define CLASS_3_84A2A1B7D74CC006_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12387C20)
#define CLASS_3_84A2A1B7D74CC006_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12387FC0)
#define CLASS_3_84A2A1B7D74CC006_TICK_OFFSET UNITYSDK_OFFSET(0x12388010)
#define CLASS_3_84A2A1B7D74CC006__CTOR_OFFSET UNITYSDK_OFFSET(0x12387B70)
#define CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123881B0)
#define CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12388200)

inline static constexpr unsigned int Class_3_84A2A1B7D74CC006_TypeDefinitionIndex = 48826;

class Class_3_84A2A1B7D74CC006 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_PlayFreeStyle*>
{
public:
	::RPG::GameCore::FreeStyleComponent* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlayFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
