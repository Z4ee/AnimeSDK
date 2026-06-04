#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_2_A1FA75B808D035A4_Class_1_E233564BFC73E1CD;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CaseContainerBase; }
namespace RPG::GameCore { class GenericSwitchCase; }
namespace RPG::GameCore { class SwitchRefBase; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A1FA75B808D035A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB518B30)
#define CLASS_2_A1FA75B808D035A4_METHOD_2_3C3DBE9767120C04_OFFSET UNITYSDK_OFFSET(0xB5190E0)
#define CLASS_2_A1FA75B808D035A4_METHOD_2_D47981CD6F0E1F50_OFFSET UNITYSDK_OFFSET(0xB51A120)
#define CLASS_2_A1FA75B808D035A4_METHOD_2_DEC4802AD4582BBA_OFFSET UNITYSDK_OFFSET(0xB519EF0)
#define CLASS_2_A1FA75B808D035A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB518F90)
#define CLASS_2_A1FA75B808D035A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB518D00)
#define CLASS_2_A1FA75B808D035A4_TICK_OFFSET UNITYSDK_OFFSET(0xB518D90)
#define CLASS_2_A1FA75B808D035A4__CTOR_OFFSET UNITYSDK_OFFSET(0xB518900)

inline static constexpr unsigned int Class_2_A1FA75B808D035A4_TypeDefinitionIndex = 49458;

class Class_2_A1FA75B808D035A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GenericSwitchCase* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Struct_2_D3027B1CDFF61281 Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GenericSwitchCase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GenericSwitchCase*))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_ONTASKRESET_OFFSET))(this);
	}

	::Class_2_A1FA75B808D035A4_Class_1_E233564BFC73E1CD* Method_2_3C3DBE9767120C04(::RPG::GameCore::SwitchRefBase* a1)
	{
		return ((::Class_2_A1FA75B808D035A4_Class_1_E233564BFC73E1CD*(*)(::PVOID, ::RPG::GameCore::SwitchRefBase*))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_METHOD_2_3C3DBE9767120C04_OFFSET))(this, a1);
	}

	::Class_2_A1FA75B808D035A4_Class_1_E233564BFC73E1CD* Method_2_DEC4802AD4582BBA(::RPG::GameCore::CaseContainerBase* a1)
	{
		return ((::Class_2_A1FA75B808D035A4_Class_1_E233564BFC73E1CD*(*)(::PVOID, ::RPG::GameCore::CaseContainerBase*))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_METHOD_2_DEC4802AD4582BBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_D47981CD6F0E1F50(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_METHOD_2_D47981CD6F0E1F50_OFFSET))(this, a1);
	}
};
