#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMapPoseSwitcherRemove; }
namespace System { class Object; }

#define CLASS_3_37B89F167DAF8381_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1399B040)
#define CLASS_3_37B89F167DAF8381_METHOD_3_58A71A76919D3ACA_OFFSET UNITYSDK_OFFSET(0x1399B610)
#define CLASS_3_37B89F167DAF8381_METHOD_3_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x1399B500)
#define CLASS_3_37B89F167DAF8381__CTOR_OFFSET UNITYSDK_OFFSET(0x1399AE20)
#define CLASS_3_37B89F167DAF8381__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1399B140)
#define CLASS_3_37B89F167DAF8381__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1399B380)
#define CLASS_3_37B89F167DAF8381__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1399B440)
#define CLASS_3_37B89F167DAF8381___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1399B7B0)
#define CLASS_3_37B89F167DAF8381___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1399B8B0)
#define CLASS_3_37B89F167DAF8381___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1399B8C0)
#define CLASS_3_37B89F167DAF8381___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1399B8D0)

inline static constexpr unsigned int Class_3_37B89F167DAF8381_TypeDefinitionIndex = 49536;

class Class_3_37B89F167DAF8381 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMapPoseSwitcherRemove*>
{
public:
	::RPG::PoolList_1<::System::UInt32>* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381_METHOD_3_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_58A71A76919D3ACA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381_METHOD_3_58A71A76919D3ACA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B89F167DAF8381___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
