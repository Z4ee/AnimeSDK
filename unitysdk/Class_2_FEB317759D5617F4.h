#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayCollectionMorse; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FEB317759D5617F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD1EF90)
#define CLASS_2_FEB317759D5617F4_METHOD_2_3A37670C2827DA9B_OFFSET UNITYSDK_OFFSET(0xBD1FCF0)
#define CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBD1FDF0)
#define CLASS_2_FEB317759D5617F4_METHOD_2_6C8546A11BCE95F3_OFFSET UNITYSDK_OFFSET(0xBD1FAE0)
#define CLASS_2_FEB317759D5617F4_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xBD1F7A0)
#define CLASS_2_FEB317759D5617F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD1F1F0)
#define CLASS_2_FEB317759D5617F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD1F460)
#define CLASS_2_FEB317759D5617F4_TICK_OFFSET UNITYSDK_OFFSET(0xBD1F4B0)
#define CLASS_2_FEB317759D5617F4__CTOR_OFFSET UNITYSDK_OFFSET(0xBD1EEA0)

inline static constexpr unsigned int Class_2_FEB317759D5617F4_TypeDefinitionIndex = 58414;

class Class_2_FEB317759D5617F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	// static const ::System::String* NOIGFGJJDLB; // 0x0
	::System::String* JIJMEHFEANC; // 0x18
	::Class_3_07C3C4D2990C49EE* DHLDAJPIPIN; // 0x20
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x28
	::Class_3_07C3C4D2990C49EE* GCHEMDKMPMO; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::String* KFOFDNOJILO; // 0x40
	::RPG::GameCore::PlayNPCBubbleTalk* MEEENKPBHJK; // 0x48
	::RPG::GameCore::PlayCollectionMorse* OFKGLJOAMLD; // 0x50
	::System::UInt32 ANEENHPKAIM; // 0x58
	::System::Single LMEBAOAAOEI; // 0x5C
	::System::Boolean NHHALCBIMOF; // 0x60
	::System::Boolean HLPAMMEMNGL; // 0x61
	::System::UInt32 LFECLIALKFB; // 0x64
	::System::Single HBDJCFFDGDD; // 0x68
	::System::Single PGMIOKKLHIE; // 0x6C

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

	::System::Void Method_2_6C8546A11BCE95F3(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_6C8546A11BCE95F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A37670C2827DA9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_3A37670C2827DA9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
