#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMapRotationEnergyStateChange; }
namespace System { class Object; }

#define CLASS_3_BF5CC73653AF0A19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F563D0)
#define CLASS_3_BF5CC73653AF0A19_METHOD_3_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0x8F56640)
#define CLASS_3_BF5CC73653AF0A19__CTOR_OFFSET UNITYSDK_OFFSET(0x8F561C0)
#define CLASS_3_BF5CC73653AF0A19__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8F56460)
#define CLASS_3_BF5CC73653AF0A19__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8F56520)
#define CLASS_3_BF5CC73653AF0A19__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8F565B0)
#define CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F56810)
#define CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8F56820)
#define CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8F56830)
#define CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8F56840)

inline static constexpr unsigned int Class_3_BF5CC73653AF0A19_TypeDefinitionIndex = 48869;

class Class_3_BF5CC73653AF0A19 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMapRotationEnergyStateChange*>
{
public:
	::RPG::PoolHashSet_1<::RPG::GameCore::MapRotationEnergyState>* Field_3_0; // 0x68
	::RPG::PoolHashSet_1<::RPG::GameCore::MapRotationEnergyState>* Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMapRotationEnergyStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMapRotationEnergyStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19_METHOD_3_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF5CC73653AF0A19___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
