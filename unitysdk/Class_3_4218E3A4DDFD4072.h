#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0A12E545170318AA.h"
#include "unitysdk/Struct_2_263B64D8FC8C9763.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdventureLoopAttackDetect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4218E3A4DDFD4072_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108D92A0)
#define CLASS_3_4218E3A4DDFD4072_METHOD_3_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x108DA4A0)
#define CLASS_3_4218E3A4DDFD4072_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x108DA820)
#define CLASS_3_4218E3A4DDFD4072_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x108DAAF0)
#define CLASS_3_4218E3A4DDFD4072_TICK_OFFSET UNITYSDK_OFFSET(0x108D9540)
#define CLASS_3_4218E3A4DDFD4072__CTOR_OFFSET UNITYSDK_OFFSET(0x108D8F50)
#define CLASS_3_4218E3A4DDFD4072___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108DAC00)

inline static constexpr unsigned int Class_3_4218E3A4DDFD4072_TypeDefinitionIndex = 46685;

class Class_3_4218E3A4DDFD4072 : public ::Class_2_0A12E545170318AA
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_3; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_15; // 0x48
	::RPG::GameCore::TaskContext* Field_3_0; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_6; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_263B64D8FC8C9763>* Field_3_4; // 0x60
	::Class_3_5775A4FEC79026BC* Field_3_13; // 0x68
	::RPG::GameCore::GameEntity* Field_3_10; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_7; // 0x78
	::RPG::GameCore::AdventureLoopAttackDetect* Field_3_1; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_5; // 0x88
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_2; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_8; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_9; // 0xA0
	::System::Single Field_3_14; // 0xA8
	::System::Single Field_3_12; // 0xAC
	::System::Single Field_3_16; // 0xB0
	::System::Single Field_3_11; // 0xB4

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

	::System::Void Method_3_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_METHOD_3_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
