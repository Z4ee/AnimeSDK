#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_4.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SelectorConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9E12F120BC98A1B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC11E880)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_0352744742F7C457_1_OFFSET UNITYSDK_OFFSET(0xC11F610)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_0352744742F7C457_OFFSET UNITYSDK_OFFSET(0xC11F710)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0xC11F280)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_437CD7B5ACC9E46A_OFFSET UNITYSDK_OFFSET(0xC11F810)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_C2A2B5F09DBF7509_OFFSET UNITYSDK_OFFSET(0xC11F8E0)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0xC11F9D0)
#define CLASS_3_9E12F120BC98A1B4_METHOD_3_F4E96B4DEA400C5A_OFFSET UNITYSDK_OFFSET(0xC11EA30)
#define CLASS_3_9E12F120BC98A1B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC11E9E0)
#define CLASS_3_9E12F120BC98A1B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC11F230)
#define CLASS_3_9E12F120BC98A1B4_TICK_OFFSET UNITYSDK_OFFSET(0xC11F560)
#define CLASS_3_9E12F120BC98A1B4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC11E830)
#define CLASS_3_9E12F120BC98A1B4__CTOR_OFFSET UNITYSDK_OFFSET(0xC11E7D0)

inline static constexpr unsigned int Class_3_9E12F120BC98A1B4_TypeDefinitionIndex = 54978;

class Class_3_9E12F120BC98A1B4 : public ::Class_2_A48F3719AA1CF200_4
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* ECMFFNPIHGD; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectorConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_5F51D4049EA87B7B*>* Method_3_437CD7B5ACC9E46A()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_437CD7B5ACC9E46A_OFFSET))(this);
	}

	::System::Void Method_3_C2A2B5F09DBF7509(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_C2A2B5F09DBF7509_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_F4E96B4DEA400C5A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_F4E96B4DEA400C5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0352744742F7C457()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_0352744742F7C457_OFFSET))(this);
	}

	::System::Boolean Method_3_0352744742F7C457_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_0352744742F7C457_1_OFFSET))(this);
	}

	::System::Void Method_3_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E12F120BC98A1B4_METHOD_3_3FAAA518D3F433CC_OFFSET))(this);
	}
};
