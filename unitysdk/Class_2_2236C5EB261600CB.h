#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E94A855EC595D175;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2236C5EB261600CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF10740)
#define CLASS_2_2236C5EB261600CB_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0xBF11170)
#define CLASS_2_2236C5EB261600CB_METHOD_2_582E9EA2229B8034_OFFSET UNITYSDK_OFFSET(0xBF11470)
#define CLASS_2_2236C5EB261600CB_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xBF113A0)
#define CLASS_2_2236C5EB261600CB_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBF112E0)
#define CLASS_2_2236C5EB261600CB_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBF10CB0)
#define CLASS_2_2236C5EB261600CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF10870)
#define CLASS_2_2236C5EB261600CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF11120)
#define CLASS_2_2236C5EB261600CB_TICK_OFFSET UNITYSDK_OFFSET(0xBF10F20)
#define CLASS_2_2236C5EB261600CB__CTOR_OFFSET UNITYSDK_OFFSET(0xBF106A0)

inline static constexpr unsigned int Class_2_2236C5EB261600CB_TypeDefinitionIndex = 58266;

class Class_2_2236C5EB261600CB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E94A855EC595D175* OFKGLJOAMLD; // 0x18
	::System::String* NCCEFIDOIHM; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x38
	::System::Boolean BKPCHGDNEFH; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E94A855EC595D175* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E94A855EC595D175*))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B934AF65CEA173B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_METHOD_2_0B934AF65CEA173B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_582E9EA2229B8034(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_METHOD_2_582E9EA2229B8034_OFFSET))(this, a1);
	}
};
