#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace Entitas { class ISystem; }
namespace Entitas { class ITearDownSystem; }

#define CLASS_1_F040DC8774652AF2_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1793FCB0)
#define CLASS_1_F040DC8774652AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1793FBC0)

inline static constexpr unsigned int Class_1_F040DC8774652AF2_TypeDefinitionIndex = 76296;

class Class_1_F040DC8774652AF2 : public ::System::Object
{
public:
	::Entitas::ITearDownSystem* KCOCCOGPBJB; // 0x10
	::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18

	::System::Void _ctor(::Entitas::ISystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_1_F040DC8774652AF2__CTOR_OFFSET))(this, a1);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F040DC8774652AF2_TEARDOWN_OFFSET))(this);
	}
};
