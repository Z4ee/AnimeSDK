#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMatchThreeBirdLocationChange; }
namespace System { class Object; }

#define CLASS_3_E8A3C55CE64695A6_METHOD_3_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0x16861930)
#define CLASS_3_E8A3C55CE64695A6__CTOR_OFFSET UNITYSDK_OFFSET(0x168615E0)
#define CLASS_3_E8A3C55CE64695A6__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x168617B0)
#define CLASS_3_E8A3C55CE64695A6__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16861870)

inline static constexpr unsigned int Class_3_E8A3C55CE64695A6_TypeDefinitionIndex = 53287;

class Class_3_E8A3C55CE64695A6 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMatchThreeBirdLocationChange*>
{
public:
	::System::UInt32 NFPAFAKKALP; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMatchThreeBirdLocationChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*))((::PBYTE)hIl2Cpp + CLASS_3_E8A3C55CE64695A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8A3C55CE64695A6__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8A3C55CE64695A6__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_0A604A5B360F30A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E8A3C55CE64695A6_METHOD_3_0A604A5B360F30A7_OFFSET))(this, a1);
	}
};
