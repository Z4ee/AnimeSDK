#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_90C3FAB661E5C263;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimContainerDynamicValueChange; }

#define CLASS_3_597B025373E86F6F_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12935F40)
#define CLASS_3_597B025373E86F6F_METHOD_3_7C1B988661980EFC_OFFSET UNITYSDK_OFFSET(0x12935D40)
#define CLASS_3_597B025373E86F6F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12935620)
#define CLASS_3_597B025373E86F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x129353F0)
#define CLASS_3_597B025373E86F6F__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x12935A80)
#define CLASS_3_597B025373E86F6F__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x129356A0)
#define CLASS_3_597B025373E86F6F__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12935890)
#define CLASS_3_597B025373E86F6F___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12936040)
#define CLASS_3_597B025373E86F6F___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x129360E0)
#define CLASS_3_597B025373E86F6F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x129360C0)
#define CLASS_3_597B025373E86F6F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x129360D0)

inline static constexpr unsigned int Class_3_597B025373E86F6F_TypeDefinitionIndex = 48785;

class Class_3_597B025373E86F6F : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*>
{
public:
	::Class_2_90C3FAB661E5C263* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__PREPAREDATA_OFFSET))(this);
	}

	::System::Void Method_3_7C1B988661980EFC(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F_METHOD_3_7C1B988661980EFC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}
};
