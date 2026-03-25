#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_BFB46C0684D0BE36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8828EF0)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0x8828F80)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x8828D50)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x8828FE0)
#define CLASS_2_BFB46C0684D0BE36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8828B20)
#define CLASS_2_BFB46C0684D0BE36_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8828E40)
#define CLASS_2_BFB46C0684D0BE36_TICK_OFFSET UNITYSDK_OFFSET(0x8828E90)
#define CLASS_2_BFB46C0684D0BE36__CTOR_OFFSET UNITYSDK_OFFSET(0x8828B10)

inline static constexpr unsigned int Class_2_BFB46C0684D0BE36_TypeDefinitionIndex = 47165;

class Class_2_BFB46C0684D0BE36 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RogueFinish* Field_2_0; // 0x20

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
