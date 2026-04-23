#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_2_DABB972BBA77AD76_Class_1_E233564BFC73E1CD;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class CaseContainerBase; }
namespace RPG::GameCore { class GenericSwitchCase; }
namespace RPG::GameCore { class SwitchRefBase; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DABB972BBA77AD76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97ED100)
#define CLASS_2_DABB972BBA77AD76_METHOD_2_3150676160817918_OFFSET UNITYSDK_OFFSET(0x97ED6D0)
#define CLASS_2_DABB972BBA77AD76_METHOD_2_CBBEE340330E4D97_OFFSET UNITYSDK_OFFSET(0x97EE5A0)
#define CLASS_2_DABB972BBA77AD76_METHOD_2_D47981CD6F0E1F50_OFFSET UNITYSDK_OFFSET(0x97EE7A0)
#define CLASS_2_DABB972BBA77AD76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97ED580)
#define CLASS_2_DABB972BBA77AD76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x97ED2F0)
#define CLASS_2_DABB972BBA77AD76_TICK_OFFSET UNITYSDK_OFFSET(0x97ED380)
#define CLASS_2_DABB972BBA77AD76__CTOR_OFFSET UNITYSDK_OFFSET(0x97ECF20)

inline static constexpr unsigned int Class_2_DABB972BBA77AD76_TypeDefinitionIndex = 48792;

class Class_2_DABB972BBA77AD76 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Struct_2_D3027B1CDFF61281 Field_2_2; // 0x30
	::RPG::GameCore::GenericSwitchCase* Field_2_1; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GenericSwitchCase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GenericSwitchCase*))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76_ONTASKRESET_OFFSET))(this);
	}

	::Class_2_DABB972BBA77AD76_Class_1_E233564BFC73E1CD* Method_2_3150676160817918(::RPG::GameCore::SwitchRefBase* a1)
	{
		return ((::Class_2_DABB972BBA77AD76_Class_1_E233564BFC73E1CD*(*)(::PVOID, ::RPG::GameCore::SwitchRefBase*))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76_METHOD_2_3150676160817918_OFFSET))(this, a1);
	}

	::Class_2_DABB972BBA77AD76_Class_1_E233564BFC73E1CD* Method_2_CBBEE340330E4D97(::RPG::GameCore::CaseContainerBase* a1)
	{
		return ((::Class_2_DABB972BBA77AD76_Class_1_E233564BFC73E1CD*(*)(::PVOID, ::RPG::GameCore::CaseContainerBase*))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76_METHOD_2_CBBEE340330E4D97_OFFSET))(this, a1);
	}

	::System::Void Method_2_D47981CD6F0E1F50(::Class_3_E21F6DE9B7FA4D05* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + CLASS_2_DABB972BBA77AD76_METHOD_2_D47981CD6F0E1F50_OFFSET))(this, a1);
	}
};
