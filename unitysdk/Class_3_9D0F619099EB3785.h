#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::Client { class WaitMatchThreeV2BirdLocationChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_9D0F619099EB3785_METHOD_3_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0x16326EE0)
#define CLASS_3_9D0F619099EB3785__CTOR_OFFSET UNITYSDK_OFFSET(0x16326B90)
#define CLASS_3_9D0F619099EB3785__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16326D60)
#define CLASS_3_9D0F619099EB3785__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16326E20)

inline static constexpr unsigned int Class_3_9D0F619099EB3785_TypeDefinitionIndex = 53290;

class Class_3_9D0F619099EB3785 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::Client::WaitMatchThreeV2BirdLocationChange*>
{
public:
	::System::UInt32 NFPAFAKKALP; // 0x68

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
