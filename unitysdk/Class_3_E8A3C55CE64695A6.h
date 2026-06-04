#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMatchThreeBirdLocationChange; }
namespace System { class Object; }

#define CLASS_3_E8A3C55CE64695A6_METHOD_3_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0xAC60910)
#define CLASS_3_E8A3C55CE64695A6__CTOR_OFFSET UNITYSDK_OFFSET(0xAC605C0)
#define CLASS_3_E8A3C55CE64695A6__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC60790)
#define CLASS_3_E8A3C55CE64695A6__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC60850)
#define CLASS_3_E8A3C55CE64695A6___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC60A80)
#define CLASS_3_E8A3C55CE64695A6___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC60A90)

inline static constexpr unsigned int Class_3_E8A3C55CE64695A6_TypeDefinitionIndex = 49552;

class Class_3_E8A3C55CE64695A6 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMatchThreeBirdLocationChange*>
{
public:
	::System::UInt32 Field_3_0; // 0x68

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

	::System::Void Method_3_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E8A3C55CE64695A6_METHOD_3_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8A3C55CE64695A6___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8A3C55CE64695A6___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
