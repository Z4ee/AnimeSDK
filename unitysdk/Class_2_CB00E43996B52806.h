#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CollectDataConditions; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CB00E43996B52806_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7DCB90)
#define CLASS_2_CB00E43996B52806_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xA7DDA10)
#define CLASS_2_CB00E43996B52806_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xA7DD5C0)
#define CLASS_2_CB00E43996B52806_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA7DDBD0)
#define CLASS_2_CB00E43996B52806_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xA7DDB50)
#define CLASS_2_CB00E43996B52806_METHOD_2_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0xA7DCEC0)
#define CLASS_2_CB00E43996B52806_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7DCE80)
#define CLASS_2_CB00E43996B52806_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7DCBE0)
#define CLASS_2_CB00E43996B52806_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7DDA70)
#define CLASS_2_CB00E43996B52806_TICK_OFFSET UNITYSDK_OFFSET(0xA7DDAF0)
#define CLASS_2_CB00E43996B52806__CTOR_OFFSET UNITYSDK_OFFSET(0xA7DCB80)

inline static constexpr unsigned int Class_2_CB00E43996B52806_TypeDefinitionIndex = 54228;

class Class_2_CB00E43996B52806 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CollectDataConditions* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectDataConditions* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectDataConditions*))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_C4EFD31239F98A71_OFFSET))(this);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_078D85152011B919_OFFSET))(this);
	}
};
