#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CollectDataConditions; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CB00E43996B52806_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBABFEB0)
#define CLASS_2_CB00E43996B52806_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xBAC0B00)
#define CLASS_2_CB00E43996B52806_METHOD_2_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0xBAC01E0)
#define CLASS_2_CB00E43996B52806_METHOD_2_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0xBAC0710)
#define CLASS_2_CB00E43996B52806_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBAC0CC0)
#define CLASS_2_CB00E43996B52806_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xBAC0C40)
#define CLASS_2_CB00E43996B52806_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBAC01A0)
#define CLASS_2_CB00E43996B52806_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBABFF00)
#define CLASS_2_CB00E43996B52806_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAC0B60)
#define CLASS_2_CB00E43996B52806_TICK_OFFSET UNITYSDK_OFFSET(0xBAC0BE0)
#define CLASS_2_CB00E43996B52806__CTOR_OFFSET UNITYSDK_OFFSET(0xBABFEA0)

inline static constexpr unsigned int Class_2_CB00E43996B52806_TypeDefinitionIndex = 53515;

class Class_2_CB00E43996B52806 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CollectDataConditions* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
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

	::System::Void Method_2_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_46E030E6F5465A66_OFFSET))(this);
	}

	::System::Void Method_2_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB00E43996B52806_METHOD_2_4B16404ED490414F_OFFSET))(this);
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
