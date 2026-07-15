#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FFD6FEDD2A6D8D46;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2236C5EB261600CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14E60EE0)
#define CLASS_2_2236C5EB261600CB_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x14E61C10)
#define CLASS_2_2236C5EB261600CB_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0x14E61910)
#define CLASS_2_2236C5EB261600CB_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x14E61B40)
#define CLASS_2_2236C5EB261600CB_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x14E61A80)
#define CLASS_2_2236C5EB261600CB_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x14E61450)
#define CLASS_2_2236C5EB261600CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14E61010)
#define CLASS_2_2236C5EB261600CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14E618C0)
#define CLASS_2_2236C5EB261600CB_TICK_OFFSET UNITYSDK_OFFSET(0x14E616C0)
#define CLASS_2_2236C5EB261600CB__CTOR_OFFSET UNITYSDK_OFFSET(0x14E60E50)

inline static constexpr unsigned int Class_2_2236C5EB261600CB_TypeDefinitionIndex = 55684;

class Class_2_2236C5EB261600CB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::Class_3_FFD6FEDD2A6D8D46* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FFD6FEDD2A6D8D46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FFD6FEDD2A6D8D46*))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2236C5EB261600CB_METHOD_2_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}
};
