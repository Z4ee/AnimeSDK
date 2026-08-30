#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupStateChange; }

#define CLASS_3_78F64AE5F1515E51_METHOD_3_4D26F58D36CA150E_OFFSET UNITYSDK_OFFSET(0x19BCC690)
#define CLASS_3_78F64AE5F1515E51_METHOD_3_F49FB72206920B59_OFFSET UNITYSDK_OFFSET(0x19BCC5F0)
#define CLASS_3_78F64AE5F1515E51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19BCC180)
#define CLASS_3_78F64AE5F1515E51__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCBF40)
#define CLASS_3_78F64AE5F1515E51__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x19BCC200)
#define CLASS_3_78F64AE5F1515E51__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19BCC370)
#define CLASS_3_78F64AE5F1515E51__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19BCC4B0)

inline static constexpr unsigned int Class_3_78F64AE5F1515E51_TypeDefinitionIndex = 53731;

class Class_3_78F64AE5F1515E51 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupStateChange*>
{
public:
	::System::UInt32 PEEFHNHDBMF; // 0x68

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
