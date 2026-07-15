#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupStateChange; }

#define CLASS_3_78F64AE5F1515E51_METHOD_3_4D26F58D36CA150E_OFFSET UNITYSDK_OFFSET(0x16FC08A0)
#define CLASS_3_78F64AE5F1515E51_METHOD_3_F49FB72206920B59_OFFSET UNITYSDK_OFFSET(0x16FC0800)
#define CLASS_3_78F64AE5F1515E51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16FC0390)
#define CLASS_3_78F64AE5F1515E51__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC0150)
#define CLASS_3_78F64AE5F1515E51__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x16FC0410)
#define CLASS_3_78F64AE5F1515E51__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16FC0580)
#define CLASS_3_78F64AE5F1515E51__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16FC06C0)

inline static constexpr unsigned int Class_3_78F64AE5F1515E51_TypeDefinitionIndex = 51047;

class Class_3_78F64AE5F1515E51 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupStateChange*>
{
public:
	::System::UInt32 Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_78F64AE5F1515E51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78F64AE5F1515E51_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78F64AE5F1515E51__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78F64AE5F1515E51__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78F64AE5F1515E51__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_F49FB72206920B59(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_78F64AE5F1515E51_METHOD_3_F49FB72206920B59_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4D26F58D36CA150E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_78F64AE5F1515E51_METHOD_3_4D26F58D36CA150E_OFFSET))(this, a1, a2);
	}
};
