#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_24193089A4D2255F;
class Class_3_39C661CA69986817;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B582BC0A5BC956FE_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA39DA80)
#define CLASS_3_B582BC0A5BC956FE_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA39DB60)
#define CLASS_3_B582BC0A5BC956FE_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA39E600)
#define CLASS_3_B582BC0A5BC956FE_1_TICK_OFFSET UNITYSDK_OFFSET(0xA39E650)
#define CLASS_3_B582BC0A5BC956FE_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA39D9F0)
#define CLASS_3_B582BC0A5BC956FE_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA39E6B0)
#define CLASS_3_B582BC0A5BC956FE_1___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA39E6C0)
#define CLASS_3_B582BC0A5BC956FE_1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA39E710)

inline static constexpr unsigned int Class_3_B582BC0A5BC956FE_1_TypeDefinitionIndex = 50342;

class Class_3_B582BC0A5BC956FE_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_39C661CA69986817*>
{
public:
	::System::Collections::Generic::List_1<::Class_2_24193089A4D2255F*>* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::Class_2_24193089A4D2255F*>* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_39C661CA69986817* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_39C661CA69986817*))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
