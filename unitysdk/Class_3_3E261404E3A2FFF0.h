#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationListenerBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionLoadingStateChange; }
namespace System { class Object; }

#define CLASS_3_3E261404E3A2FFF0_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x1836A710)
#define CLASS_3_3E261404E3A2FFF0_METHOD_3_68E1ED295509CE71_OFFSET UNITYSDK_OFFSET(0x1836A8F0)
#define CLASS_3_3E261404E3A2FFF0_METHOD_3_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x1836A830)
#define CLASS_3_3E261404E3A2FFF0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1836A6C0)
#define CLASS_3_3E261404E3A2FFF0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1836A7D0)
#define CLASS_3_3E261404E3A2FFF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1836A600)

inline static constexpr unsigned int Class_3_3E261404E3A2FFF0_TypeDefinitionIndex = 53266;

class Class_3_3E261404E3A2FFF0 : public ::RPG::GameCore::MapRotationListenerBase_1<::RPG::GameCore::WaitRotatableRegionLoadingStateChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_3E261404E3A2FFF0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E261404E3A2FFF0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E261404E3A2FFF0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E261404E3A2FFF0_METHOD_3_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_3_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E261404E3A2FFF0_METHOD_3_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_3_68E1ED295509CE71(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3E261404E3A2FFF0_METHOD_3_68E1ED295509CE71_OFFSET))(this, a1);
	}
};
