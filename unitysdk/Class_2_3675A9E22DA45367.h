#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_3675A9E22DA45367_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13ABAD90)
#define CLASS_2_3675A9E22DA45367_METHOD_2_0B1EDC1FC9E662DC_OFFSET UNITYSDK_OFFSET(0x13ABB200)
#define CLASS_2_3675A9E22DA45367_METHOD_2_62487804F7DB80E9_OFFSET UNITYSDK_OFFSET(0x13ABB8A0)
#define CLASS_2_3675A9E22DA45367_METHOD_2_B1E6B383797FA63D_OFFSET UNITYSDK_OFFSET(0x13ABB320)
#define CLASS_2_3675A9E22DA45367_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13ABAEA0)
#define CLASS_2_3675A9E22DA45367_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13ABB150)
#define CLASS_2_3675A9E22DA45367_TICK_OFFSET UNITYSDK_OFFSET(0x13ABB1A0)
#define CLASS_2_3675A9E22DA45367__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABAD80)

inline static constexpr unsigned int Class_2_3675A9E22DA45367_TypeDefinitionIndex = 54631;

class Class_2_3675A9E22DA45367 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RogueStart* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B1EDC1FC9E662DC(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367_METHOD_2_0B1EDC1FC9E662DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1E6B383797FA63D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367_METHOD_2_B1E6B383797FA63D_OFFSET))(this);
	}

	::System::Void Method_2_62487804F7DB80E9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3675A9E22DA45367_METHOD_2_62487804F7DB80E9_OFFSET))(this, a1, a2);
	}
};
