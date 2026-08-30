#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyShowPlayerBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7524BFDCB3BFB312_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EEB180)
#define CLASS_2_7524BFDCB3BFB312_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16EEB340)
#define CLASS_2_7524BFDCB3BFB312_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EEAF50)
#define CLASS_2_7524BFDCB3BFB312_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EEB0F0)
#define CLASS_2_7524BFDCB3BFB312_TICK_OFFSET UNITYSDK_OFFSET(0x16EEB210)
#define CLASS_2_7524BFDCB3BFB312__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEAF40)

inline static constexpr unsigned int Class_2_7524BFDCB3BFB312_TypeDefinitionIndex = 58370;

class Class_2_7524BFDCB3BFB312 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single ACKMEJMBELK; // 0x0
	::RPG::GameCore::MonopolyShowPlayerBubbleTalk* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Single LLNIGIGFCEA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_7524BFDCB3BFB312__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7524BFDCB3BFB312_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7524BFDCB3BFB312_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7524BFDCB3BFB312_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7524BFDCB3BFB312_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7524BFDCB3BFB312_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
