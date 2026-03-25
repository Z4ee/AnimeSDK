#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChessRogueDoorInteraction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_973720E9D17BF562_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118F1510)
#define CLASS_2_973720E9D17BF562_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x118F0F20)
#define CLASS_2_973720E9D17BF562_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x118F1260)
#define CLASS_2_973720E9D17BF562_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x118F10C0)
#define CLASS_2_973720E9D17BF562_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0x118F1620)
#define CLASS_2_973720E9D17BF562_METHOD_2_A7E8B52E9ABB8DB9_2_OFFSET UNITYSDK_OFFSET(0x118F1690)
#define CLASS_2_973720E9D17BF562_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x118F15B0)
#define CLASS_2_973720E9D17BF562_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118F0E10)
#define CLASS_2_973720E9D17BF562_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118F1400)
#define CLASS_2_973720E9D17BF562_TICK_OFFSET UNITYSDK_OFFSET(0x118F1550)
#define CLASS_2_973720E9D17BF562__CTOR_OFFSET UNITYSDK_OFFSET(0x118F0E00)

inline static constexpr unsigned int Class_2_973720E9D17BF562_TypeDefinitionIndex = 46793;

class Class_2_973720E9D17BF562 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ChessRogueDoorInteraction* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessRogueDoorInteraction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessRogueDoorInteraction*))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_973720E9D17BF562_METHOD_2_A7E8B52E9ABB8DB9_2_OFFSET))(this, a1, a2);
	}
};
