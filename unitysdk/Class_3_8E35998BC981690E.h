#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"

class Class_3_A4B1C029ADA59FA1;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8E35998BC981690E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA044520)
#define CLASS_3_8E35998BC981690E__CTOR_OFFSET UNITYSDK_OFFSET(0xA0442F0)
#define CLASS_3_8E35998BC981690E__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA044570)
#define CLASS_3_8E35998BC981690E__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0445F0)
#define CLASS_3_8E35998BC981690E__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA044780)
#define CLASS_3_8E35998BC981690E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0448F0)
#define CLASS_3_8E35998BC981690E___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA044940)
#define CLASS_3_8E35998BC981690E___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0449C0)
#define CLASS_3_8E35998BC981690E___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0449D0)

inline static constexpr unsigned int Class_3_8E35998BC981690E_TypeDefinitionIndex = 48724;

class Class_3_8E35998BC981690E : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_3_A4B1C029ADA59FA1*>
{
public:
	::RPG::Client::FiveDimGameInstance* Field_3_0; // 0x68
	::Struct_2_9BF8902D61AE1796 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A4B1C029ADA59FA1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A4B1C029ADA59FA1*))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
