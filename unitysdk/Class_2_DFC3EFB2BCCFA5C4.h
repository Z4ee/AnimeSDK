#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropFastDeliverStartAim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DFC3EFB2BCCFA5C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158A2DD0)
#define CLASS_2_DFC3EFB2BCCFA5C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158A2C80)
#define CLASS_2_DFC3EFB2BCCFA5C4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158A2D80)
#define CLASS_2_DFC3EFB2BCCFA5C4_TICK_OFFSET UNITYSDK_OFFSET(0x158A2E30)
#define CLASS_2_DFC3EFB2BCCFA5C4__CTOR_OFFSET UNITYSDK_OFFSET(0x158A2C70)

inline static constexpr unsigned int Class_2_DFC3EFB2BCCFA5C4_TypeDefinitionIndex = 55744;

class Class_2_DFC3EFB2BCCFA5C4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PropFastDeliverStartAim* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverStartAim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverStartAim*))((::PBYTE)hIl2Cpp + CLASS_2_DFC3EFB2BCCFA5C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFC3EFB2BCCFA5C4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFC3EFB2BCCFA5C4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFC3EFB2BCCFA5C4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFC3EFB2BCCFA5C4_TICK_OFFSET))(this, a1);
	}
};
