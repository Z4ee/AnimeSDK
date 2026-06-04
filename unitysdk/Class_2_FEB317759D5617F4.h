#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayCollectionMorse; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FEB317759D5617F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9CF1D0)
#define CLASS_2_FEB317759D5617F4_METHOD_2_3A37670C2827DA9B_OFFSET UNITYSDK_OFFSET(0xA9CFE90)
#define CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA9CFF90)
#define CLASS_2_FEB317759D5617F4_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xA9CF910)
#define CLASS_2_FEB317759D5617F4_METHOD_2_6C8546A11BCE95F3_OFFSET UNITYSDK_OFFSET(0xA9CFC80)
#define CLASS_2_FEB317759D5617F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9CF360)
#define CLASS_2_FEB317759D5617F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9CF5D0)
#define CLASS_2_FEB317759D5617F4_TICK_OFFSET UNITYSDK_OFFSET(0xA9CF620)
#define CLASS_2_FEB317759D5617F4__CTOR_OFFSET UNITYSDK_OFFSET(0xA9CF0E0)

inline static constexpr unsigned int Class_2_FEB317759D5617F4_TypeDefinitionIndex = 54460;

class Class_2_FEB317759D5617F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::RPG::GameCore::GameEntity* Field_2_5; // 0x30
	::RPG::GameCore::PlayNPCBubbleTalk* Field_2_6; // 0x38
	::RPG::GameCore::PlayCollectionMorse* Field_2_7; // 0x40
	::System::String* Field_2_8; // 0x48
	::RPG::GameCore::TaskContext* Field_2_9; // 0x50
	::System::UInt32 Field_2_10; // 0x58
	::System::UInt32 Field_2_11; // 0x5C
	::System::Single Field_2_12; // 0x60
	::System::Boolean Field_2_13; // 0x64
	::System::Boolean Field_2_14; // 0x65
	::System::Single Field_2_15; // 0x68
	::System::Single Field_2_16; // 0x6C

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

	::System::Void Method_2_6C8546A11BCE95F3(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_6C8546A11BCE95F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A37670C2827DA9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_3A37670C2827DA9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
