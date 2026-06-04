#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"

class Class_3_A4B1C029ADA59FA1;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5C01DB3813C27EF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB9D9C0)
#define CLASS_3_5C01DB3813C27EF2__CTOR_OFFSET UNITYSDK_OFFSET(0xAB9D720)
#define CLASS_3_5C01DB3813C27EF2__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xAB9DA20)
#define CLASS_3_5C01DB3813C27EF2__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB9DAA0)
#define CLASS_3_5C01DB3813C27EF2__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB9DC30)
#define CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB9DDB0)
#define CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xAB9DE10)
#define CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB9DE90)
#define CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB9DEA0)

inline static constexpr unsigned int Class_3_5C01DB3813C27EF2_TypeDefinitionIndex = 49389;

class Class_3_5C01DB3813C27EF2 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_3_A4B1C029ADA59FA1*>
{
public:
	::Struct_2_9BF8902D61AE1796 Field_3_0; // 0x68
	::RPG::Client::FiveDimGameInstance* Field_3_1; // 0xF8

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A4B1C029ADA59FA1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A4B1C029ADA59FA1*))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
