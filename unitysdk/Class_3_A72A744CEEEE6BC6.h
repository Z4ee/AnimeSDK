#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMapPoseSwitcherRemove; }
namespace System { class Object; }

#define CLASS_3_A72A744CEEEE6BC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183D2BA0)
#define CLASS_3_A72A744CEEEE6BC6_METHOD_3_58A71A76919D3ACA_OFFSET UNITYSDK_OFFSET(0x183D3060)
#define CLASS_3_A72A744CEEEE6BC6_METHOD_3_79C171A8034611D5_OFFSET UNITYSDK_OFFSET(0x183D2FD0)
#define CLASS_3_A72A744CEEEE6BC6__CTOR_OFFSET UNITYSDK_OFFSET(0x183D2910)
#define CLASS_3_A72A744CEEEE6BC6__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x183D2C10)
#define CLASS_3_A72A744CEEEE6BC6__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x183D2E50)
#define CLASS_3_A72A744CEEEE6BC6__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x183D2F10)

inline static constexpr unsigned int Class_3_A72A744CEEEE6BC6_TypeDefinitionIndex = 50590;

class Class_3_A72A744CEEEE6BC6 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMapPoseSwitcherRemove*>
{
public:
	::RPG::PoolList_1<::System::UInt32>* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

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
