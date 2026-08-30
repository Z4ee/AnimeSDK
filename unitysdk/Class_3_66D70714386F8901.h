#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_4.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ParallelSelectorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_66D70714386F8901_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B7E3E0)
#define CLASS_3_66D70714386F8901_METHOD_3_0352744742F7C457_1_OFFSET UNITYSDK_OFFSET(0x18B7E970)
#define CLASS_3_66D70714386F8901_METHOD_3_0352744742F7C457_OFFSET UNITYSDK_OFFSET(0x18B7EA70)
#define CLASS_3_66D70714386F8901_METHOD_3_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x18B7E5E0)
#define CLASS_3_66D70714386F8901_METHOD_3_9D115FD159B833A3_OFFSET UNITYSDK_OFFSET(0x18B7EB70)
#define CLASS_3_66D70714386F8901_METHOD_3_DAC33A0E424B712D_OFFSET UNITYSDK_OFFSET(0x18B7E1B0)
#define CLASS_3_66D70714386F8901_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x18B7F200)
#define CLASS_3_66D70714386F8901_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B7E540)
#define CLASS_3_66D70714386F8901_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B7E590)
#define CLASS_3_66D70714386F8901_TICK_OFFSET UNITYSDK_OFFSET(0x18B7E8C0)
#define CLASS_3_66D70714386F8901__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7E190)

inline static constexpr unsigned int Class_3_66D70714386F8901_TypeDefinitionIndex = 54976;

class Class_3_66D70714386F8901 : public ::Class_2_A48F3719AA1CF200_4
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* ECMFFNPIHGD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelSelectorConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_DAC33A0E424B712D(::RPG::GameCore::ParallelSelectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_METHOD_3_DAC33A0E424B712D_OFFSET))(this, a1);
	}

	::System::Void Method_3_9D115FD159B833A3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_METHOD_3_9D115FD159B833A3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0352744742F7C457()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_METHOD_3_0352744742F7C457_OFFSET))(this);
	}

	::System::Boolean Method_3_0352744742F7C457_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_METHOD_3_0352744742F7C457_1_OFFSET))(this);
	}

	::System::Void Method_3_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66D70714386F8901_METHOD_3_3FAAA518D3F433CC_OFFSET))(this);
	}
};
