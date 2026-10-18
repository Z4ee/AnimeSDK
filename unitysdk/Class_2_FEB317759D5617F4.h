#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayCollectionMorse; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FEB317759D5617F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBF92C0)
#define CLASS_2_FEB317759D5617F4_METHOD_2_3A37670C2827DA9B_OFFSET UNITYSDK_OFFSET(0xBBFA030)
#define CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBBFA130)
#define CLASS_2_FEB317759D5617F4_METHOD_2_6C8546A11BCE95F3_OFFSET UNITYSDK_OFFSET(0xBBF9E20)
#define CLASS_2_FEB317759D5617F4_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xBBF9AE0)
#define CLASS_2_FEB317759D5617F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBF9520)
#define CLASS_2_FEB317759D5617F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBF97A0)
#define CLASS_2_FEB317759D5617F4_TICK_OFFSET UNITYSDK_OFFSET(0xBBF97F0)
#define CLASS_2_FEB317759D5617F4__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF91D0)

inline static constexpr unsigned int Class_2_FEB317759D5617F4_TypeDefinitionIndex = 58265;

class Class_2_FEB317759D5617F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	// static const ::System::String* NOIGFGJJDLB; // 0x0
	::RPG::GameCore::PlayCollectionMorse* OFKGLJOAMLD; // 0x18
	::System::String* KFOFDNOJILO; // 0x20
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x28
	::Class_3_07C3C4D2990C49EE* GCHEMDKMPMO; // 0x30
	::RPG::GameCore::PlayNPCBubbleTalk* MEEENKPBHJK; // 0x38
	::Class_3_07C3C4D2990C49EE* DHLDAJPIPIN; // 0x40
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
	::System::String* JIJMEHFEANC; // 0x50
	::System::Boolean HLPAMMEMNGL; // 0x58
	::System::Boolean NHHALCBIMOF; // 0x59
	::System::Single LMEBAOAAOEI; // 0x5C
	::System::UInt32 ANEENHPKAIM; // 0x60
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

	::System::Void Method_2_6C8546A11BCE95F3(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_6C8546A11BCE95F3_OFFSET))(this, a1);
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
