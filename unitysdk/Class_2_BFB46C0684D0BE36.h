#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_BFB46C0684D0BE36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x121092A0)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0x12109330)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x12109100)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x12109390)
#define CLASS_2_BFB46C0684D0BE36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12108E50)
#define CLASS_2_BFB46C0684D0BE36_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x121091F0)
#define CLASS_2_BFB46C0684D0BE36_TICK_OFFSET UNITYSDK_OFFSET(0x12109240)
#define CLASS_2_BFB46C0684D0BE36__CTOR_OFFSET UNITYSDK_OFFSET(0x12108E40)

inline static constexpr unsigned int Class_2_BFB46C0684D0BE36_TypeDefinitionIndex = 53897;

class Class_2_BFB46C0684D0BE36 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueFinish* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueFinish*))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_29388402F1C16287(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_METHOD_2_29388402F1C16287_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_METHOD_2_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}
};
