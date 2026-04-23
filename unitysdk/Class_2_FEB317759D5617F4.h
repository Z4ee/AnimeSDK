#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayCollectionMorse; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FEB317759D5617F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95499B0)
#define CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x954A720)
#define CLASS_2_FEB317759D5617F4_METHOD_2_761453C1386E7BBC_OFFSET UNITYSDK_OFFSET(0x954A420)
#define CLASS_2_FEB317759D5617F4_METHOD_2_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0x954A620)
#define CLASS_2_FEB317759D5617F4_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x954A090)
#define CLASS_2_FEB317759D5617F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9549B00)
#define CLASS_2_FEB317759D5617F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9549D50)
#define CLASS_2_FEB317759D5617F4_TICK_OFFSET UNITYSDK_OFFSET(0x9549DA0)
#define CLASS_2_FEB317759D5617F4__CTOR_OFFSET UNITYSDK_OFFSET(0x95498C0)

inline static constexpr unsigned int Class_2_FEB317759D5617F4_TypeDefinitionIndex = 53736;

class Class_2_FEB317759D5617F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::System::String* Field_2_11; // 0x18
	::RPG::GameCore::PlayCollectionMorse* Field_2_2; // 0x20
	::RPG::GameCore::PlayNPCBubbleTalk* Field_2_4; // 0x28
	::System::String* Field_2_10; // 0x30
	::RPG::GameCore::GameEntity* Field_2_6; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_15; // 0x40
	::RPG::GameCore::TaskContext* Field_2_3; // 0x48
	::Class_3_E21F6DE9B7FA4D05* Field_2_16; // 0x50
	::System::Single Field_2_7; // 0x58
	::System::Single Field_2_9; // 0x5C
	::System::Boolean Field_2_12; // 0x60
	::System::Boolean Field_2_13; // 0x61
	::System::UInt32 Field_2_14; // 0x64
	::System::UInt32 Field_2_5; // 0x68
	::System::Single Field_2_8; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayCollectionMorse* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayCollectionMorse*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_761453C1386E7BBC(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_761453C1386E7BBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1596F65A2679075(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_A1596F65A2679075_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
