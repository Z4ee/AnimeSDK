#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_90C3FAB661E5C263;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGraphDynamicValueChange; }

#define CLASS_3_443056AB4FE87D34_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x95D4B10)
#define CLASS_3_443056AB4FE87D34_METHOD_3_63C879B91070CD87_OFFSET UNITYSDK_OFFSET(0x95D4940)
#define CLASS_3_443056AB4FE87D34_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x95D4500)
#define CLASS_3_443056AB4FE87D34__CTOR_OFFSET UNITYSDK_OFFSET(0x95D4300)
#define CLASS_3_443056AB4FE87D34__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x95D48E0)
#define CLASS_3_443056AB4FE87D34__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x95D4560)
#define CLASS_3_443056AB4FE87D34__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x95D4720)
#define CLASS_3_443056AB4FE87D34___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x95D4BD0)
#define CLASS_3_443056AB4FE87D34___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x95D4C50)
#define CLASS_3_443056AB4FE87D34___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x95D4C30)
#define CLASS_3_443056AB4FE87D34___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x95D4C40)

inline static constexpr unsigned int Class_3_443056AB4FE87D34_TypeDefinitionIndex = 49301;

class Class_3_443056AB4FE87D34 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGraphDynamicValueChange*>
{
public:
	::Class_2_90C3FAB661E5C263* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGraphDynamicValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGraphDynamicValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34__PREPAREDATA_OFFSET))(this);
	}

	::System::Void Method_3_63C879B91070CD87(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34_METHOD_3_63C879B91070CD87_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_443056AB4FE87D34___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}
};
