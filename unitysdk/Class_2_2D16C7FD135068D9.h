#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2D16C7FD135068D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7D5090)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_0B934AF65CEA173B_OFFSET UNITYSDK_OFFSET(0xB7D58A0)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_71915706CE77067A_OFFSET UNITYSDK_OFFSET(0xB7D5B40)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_99272A34A22F949E_OFFSET UNITYSDK_OFFSET(0xB7D5AC0)
#define CLASS_2_2D16C7FD135068D9_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB7D5A20)
#define CLASS_2_2D16C7FD135068D9_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB7D54E0)
#define CLASS_2_2D16C7FD135068D9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7D5170)
#define CLASS_2_2D16C7FD135068D9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7D5850)
#define CLASS_2_2D16C7FD135068D9_TICK_OFFSET UNITYSDK_OFFSET(0xB7D56E0)
#define CLASS_2_2D16C7FD135068D9__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D5000)

inline static constexpr unsigned int Class_2_2D16C7FD135068D9_TypeDefinitionIndex = 53745;

class Class_2_2D16C7FD135068D9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_5; // 0x18
	::System::String* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_2_2; // 0x30
	::RPG::GameCore::PlayOptionTalk* Field_2_0; // 0x38
	::System::Boolean Field_2_3; // 0x40

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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B934AF65CEA173B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_0B934AF65CEA173B_OFFSET))(this, a1);
	}

	::System::Void Method_2_99272A34A22F949E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_99272A34A22F949E_OFFSET))(this, a1);
	}

	::System::Void Method_2_71915706CE77067A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2D16C7FD135068D9_METHOD_2_71915706CE77067A_OFFSET))(this, a1);
	}
};
