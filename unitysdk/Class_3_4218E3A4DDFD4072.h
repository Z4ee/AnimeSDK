#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_43018DB440EBECE9.h"
#include "unitysdk/Struct_2_263B64D8FC8C9763.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureLoopAttackDetect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4218E3A4DDFD4072_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C76DA0)
#define CLASS_3_4218E3A4DDFD4072_METHOD_3_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x15C78220)
#define CLASS_3_4218E3A4DDFD4072_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C78540)
#define CLASS_3_4218E3A4DDFD4072_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C787F0)
#define CLASS_3_4218E3A4DDFD4072_TICK_OFFSET UNITYSDK_OFFSET(0x15C77060)
#define CLASS_3_4218E3A4DDFD4072__CTOR_OFFSET UNITYSDK_OFFSET(0x15C76A40)

inline static constexpr unsigned int Class_3_4218E3A4DDFD4072_TypeDefinitionIndex = 58054;

class Class_3_4218E3A4DDFD4072 : public ::Class_2_43018DB440EBECE9
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* OMJCOBGEIEP; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GCDGJEKALDC; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* NNCDBFCODDD; // 0x50
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x58
	::RPG::GameCore::AdventureLoopAttackDetect* IGHAHBNLIJA; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* NBLDJLCLFOG; // 0x68
	::RPG::GameCore::GameEntity* OBNCKAFDFHI; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* IKMJKKALGLL; // 0x78
	::System::Collections::Generic::List_1<::Struct_2_263B64D8FC8C9763>* OCLEOFMMDBB; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* LAMENOCGAAH; // 0x88
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JDFHJIINFBC; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OONGJCPODEA; // 0x98
	::Class_3_07C3C4D2990C49EE* FHABNNPBEIO; // 0xA0
	::System::Single HBDJCFFDGDD; // 0xA8
	::System::Single DAIJFALCHGO; // 0xAC
	::System::Single GCCLLGPDKJM; // 0xB0
	::System::Single OMICMGNDHCF; // 0xB4

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureLoopAttackDetect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureLoopAttackDetect*))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_METHOD_3_F7BA13C72A6B3F58_OFFSET))(this);
	}
};
