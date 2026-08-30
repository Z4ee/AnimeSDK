#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_07A210D994F284D8_6;
class Class_1_1C30CE192ABE4C54;
class Class_1_F2239EA7F93120BB;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParallelTaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5A519139824A431D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F6D020)
#define CLASS_2_5A519139824A431D_METHOD_2_372E41FA4A171DFD_OFFSET UNITYSDK_OFFSET(0x18F6E590)
#define CLASS_2_5A519139824A431D_METHOD_2_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x18F6D0E0)
#define CLASS_2_5A519139824A431D_METHOD_2_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x18F6EA90)
#define CLASS_2_5A519139824A431D_METHOD_2_A59C1BC1CD30E8D5_OFFSET UNITYSDK_OFFSET(0x18F6E990)
#define CLASS_2_5A519139824A431D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18F6EBC0)
#define CLASS_2_5A519139824A431D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F6D1D0)
#define CLASS_2_5A519139824A431D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F6E600)
#define CLASS_2_5A519139824A431D_TICK_OFFSET UNITYSDK_OFFSET(0x18F6E7B0)
#define CLASS_2_5A519139824A431D__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6CF20)
#define CLASS_2_5A519139824A431D___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET UNITYSDK_OFFSET(0x18F6EBD0)

inline static constexpr unsigned int Class_2_5A519139824A431D_TypeDefinitionIndex = 55947;

class Class_2_5A519139824A431D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_07A210D994F284D8_6* ONPOGINJBCB; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F2239EA7F93120BB*>* OOFAMBJDGIH; // 0x20
	::Class_1_1C30CE192ABE4C54* HGGIIDBDGKD; // 0x28
	::RPG::GameCore::TriggerParallelTaskListTemplate* OFKGLJOAMLD; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* BPGGBFAHLHM; // 0x40
	::RPG::GameCore::FixPoint JLCJJMNJPAH; // 0x48
	::RPG::GameCore::FixPoint NCMIDIHKLAO; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParallelTaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A59C1BC1CD30E8D5(::System::Single a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_A59C1BC1CD30E8D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_932BC234D35144E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_932BC234D35144E8_OFFSET))(this);
	}

	::System::Void Method_2_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_78C62398E94F0FB1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_372E41FA4A171DFD(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_372E41FA4A171DFD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_F2239EA7F93120BB* __RunTemplates_g___SortAndGetNextTemplate_5_0(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_1_F2239EA7F93120BB*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET))(this, a1);
	}
};
