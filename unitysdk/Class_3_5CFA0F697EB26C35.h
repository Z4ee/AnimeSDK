#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothPreviewUpdate; }
namespace System { class Object; }

#define CLASS_3_5CFA0F697EB26C35_METHOD_3_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0x115282B0)
#define CLASS_3_5CFA0F697EB26C35__CTOR_OFFSET UNITYSDK_OFFSET(0x11528070)
#define CLASS_3_5CFA0F697EB26C35__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x115281D0)
#define CLASS_3_5CFA0F697EB26C35__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11528240)
#define CLASS_3_5CFA0F697EB26C35___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11528470)
#define CLASS_3_5CFA0F697EB26C35___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x115284E0)

inline static constexpr unsigned int Class_3_5CFA0F697EB26C35_TypeDefinitionIndex = 47590;

class Class_3_5CFA0F697EB26C35 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_5CFA0F697EB26C35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CFA0F697EB26C35__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CFA0F697EB26C35__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5CFA0F697EB26C35_METHOD_3_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CFA0F697EB26C35___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CFA0F697EB26C35___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
