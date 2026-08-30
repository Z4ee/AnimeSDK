#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMapPoseSwitcherRemove; }
namespace System { class Object; }

#define CLASS_3_A72A744CEEEE6BC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19149640)
#define CLASS_3_A72A744CEEEE6BC6_METHOD_3_58A71A76919D3ACA_OFFSET UNITYSDK_OFFSET(0x19149B00)
#define CLASS_3_A72A744CEEEE6BC6_METHOD_3_79C171A8034611D5_OFFSET UNITYSDK_OFFSET(0x19149A70)
#define CLASS_3_A72A744CEEEE6BC6__CTOR_OFFSET UNITYSDK_OFFSET(0x191493B0)
#define CLASS_3_A72A744CEEEE6BC6__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x191496B0)
#define CLASS_3_A72A744CEEEE6BC6__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x191498F0)
#define CLASS_3_A72A744CEEEE6BC6__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x191499B0)

inline static constexpr unsigned int Class_3_A72A744CEEEE6BC6_TypeDefinitionIndex = 53268;

class Class_3_A72A744CEEEE6BC6 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMapPoseSwitcherRemove*>
{
public:
	::RPG::PoolList_1<::System::UInt32>* HDBOBADLEML; // 0x68
	::System::UInt32 PEEFHNHDBMF; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*))((::PBYTE)hIl2Cpp + CLASS_3_A72A744CEEEE6BC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A72A744CEEEE6BC6_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A72A744CEEEE6BC6__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A72A744CEEEE6BC6__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A72A744CEEEE6BC6__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_79C171A8034611D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A72A744CEEEE6BC6_METHOD_3_79C171A8034611D5_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_58A71A76919D3ACA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A72A744CEEEE6BC6_METHOD_3_58A71A76919D3ACA_OFFSET))(this);
	}
};
