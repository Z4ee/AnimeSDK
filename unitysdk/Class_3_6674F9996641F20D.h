#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupPropertyChange; }
namespace System { class String; }

#define CLASS_3_6674F9996641F20D_METHOD_3_FC8D60D6262B5356_OFFSET UNITYSDK_OFFSET(0x164F3AE0)
#define CLASS_3_6674F9996641F20D__CTOR_OFFSET UNITYSDK_OFFSET(0x164F38D0)
#define CLASS_3_6674F9996641F20D__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x164F3FC0)
#define CLASS_3_6674F9996641F20D__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x164F3B40)
#define CLASS_3_6674F9996641F20D__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x164F3DB0)

inline static constexpr unsigned int Class_3_6674F9996641F20D_TypeDefinitionIndex = 51046;

class Class_3_6674F9996641F20D : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupPropertyChange*>
{
public:
	::System::String* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupPropertyChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupPropertyChange*))((::PBYTE)hIl2Cpp + CLASS_3_6674F9996641F20D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FC8D60D6262B5356(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6674F9996641F20D_METHOD_3_FC8D60D6262B5356_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6674F9996641F20D__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6674F9996641F20D__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6674F9996641F20D__PREPAREDATA_OFFSET))(this);
	}
};
