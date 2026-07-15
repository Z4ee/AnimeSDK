#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::Client { class WaitMatchThreeV2BirdLocationChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_9D0F619099EB3785_METHOD_3_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0x158614C0)
#define CLASS_3_9D0F619099EB3785__CTOR_OFFSET UNITYSDK_OFFSET(0x15861170)
#define CLASS_3_9D0F619099EB3785__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15861340)
#define CLASS_3_9D0F619099EB3785__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15861400)

inline static constexpr unsigned int Class_3_9D0F619099EB3785_TypeDefinitionIndex = 50609;

class Class_3_9D0F619099EB3785 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::Client::WaitMatchThreeV2BirdLocationChange*>
{
public:
	::System::UInt32 Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitMatchThreeV2BirdLocationChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_0A604A5B360F30A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785_METHOD_3_0A604A5B360F30A7_OFFSET))(this, a1);
	}
};
