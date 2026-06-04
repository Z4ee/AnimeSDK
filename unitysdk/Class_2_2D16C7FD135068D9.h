#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2D16C7FD135068D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1426EF00)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0x1426F7C0)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_71915706CE77067A_OFFSET UNITYSDK_OFFSET(0x1426FAC0)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x1426F9F0)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1426F930)
#define CLASS_2_2D16C7FD135068D9_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1426F3A0)
#define CLASS_2_2D16C7FD135068D9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1426F030)
#define CLASS_2_2D16C7FD135068D9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1426F770)
#define CLASS_2_2D16C7FD135068D9_TICK_OFFSET UNITYSDK_OFFSET(0x1426F5E0)
#define CLASS_2_2D16C7FD135068D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1426EE70)

inline static constexpr unsigned int Class_2_2D16C7FD135068D9_TypeDefinitionIndex = 54469;

class Class_2_2D16C7FD135068D9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayOptionTalk* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayOptionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayOptionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B934AF65CEA173B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_0B934AF65CEA173B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_71915706CE77067A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_71915706CE77067A_OFFSET))(this, a1);
	}
};
