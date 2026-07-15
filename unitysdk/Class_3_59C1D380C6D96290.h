#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothPreviewUpdate; }
namespace System { class Object; }

#define CLASS_3_59C1D380C6D96290_METHOD_3_E94EA76DD62C72A9_OFFSET UNITYSDK_OFFSET(0x17A8DF70)
#define CLASS_3_59C1D380C6D96290__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8DCC0)
#define CLASS_3_59C1D380C6D96290__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17A8DE30)
#define CLASS_3_59C1D380C6D96290__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17A8DED0)

inline static constexpr unsigned int Class_3_59C1D380C6D96290_TypeDefinitionIndex = 56288;

class Class_3_59C1D380C6D96290 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_59C1D380C6D96290__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59C1D380C6D96290__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59C1D380C6D96290__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_E94EA76DD62C72A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_59C1D380C6D96290_METHOD_3_E94EA76DD62C72A9_OFFSET))(this, a1);
	}
};
