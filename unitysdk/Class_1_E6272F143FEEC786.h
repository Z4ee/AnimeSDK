#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_491;
class Class_0_16E4307DCC419505_503;
class Class_1_07A210D994F284D8_3;
class Class_1_1C30CE192ABE4C54;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E6272F143FEEC786_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAE3F70)
#define CLASS_1_E6272F143FEEC786_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xAAE4C10)
#define CLASS_1_E6272F143FEEC786_GET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0xAAE4BE0)
#define CLASS_1_E6272F143FEEC786_GET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0xAAE4B80)
#define CLASS_1_E6272F143FEEC786_GET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAE4B60)
#define CLASS_1_E6272F143FEEC786_GET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0xAAE4BC0)
#define CLASS_1_E6272F143FEEC786_GET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0xAAE4BA0)
#define CLASS_1_E6272F143FEEC786_GET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0xAAE4C30)
#define CLASS_1_E6272F143FEEC786_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAE4AF0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_2D59151C189E7DE0_OFFSET UNITYSDK_OFFSET(0xAAE3B40)
#define CLASS_1_E6272F143FEEC786_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0xAAE4540)
#define CLASS_1_E6272F143FEEC786_METHOD_1_46049D0DD3BDCF94_OFFSET UNITYSDK_OFFSET(0xAAE44B0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0xAAE4B10)
#define CLASS_1_E6272F143FEEC786_METHOD_1_8BC0D11656DDA450_OFFSET UNITYSDK_OFFSET(0xAAE4000)
#define CLASS_1_E6272F143FEEC786_METHOD_1_9068CDAEA4648E16_OFFSET UNITYSDK_OFFSET(0xAAE3CE0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0xAAE46D0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_D3633CE2CB97D446_OFFSET UNITYSDK_OFFSET(0xAAE3B00)
#define CLASS_1_E6272F143FEEC786_METHOD_1_E216815FF48056A7_OFFSET UNITYSDK_OFFSET(0xAAE3B80)
#define CLASS_1_E6272F143FEEC786_METHOD_1_E70AE03EA677AEEA_OFFSET UNITYSDK_OFFSET(0xAAE4790)
#define CLASS_1_E6272F143FEEC786_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0xAAE4C00)
#define CLASS_1_E6272F143FEEC786_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xAAE3AC0)
#define CLASS_1_E6272F143FEEC786_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xAAE4C20)
#define CLASS_1_E6272F143FEEC786_SET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0xAAE4BF0)
#define CLASS_1_E6272F143FEEC786_SET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0xAAE4B90)
#define CLASS_1_E6272F143FEEC786_SET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAE4B70)
#define CLASS_1_E6272F143FEEC786_SET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0xAAE4BD0)
#define CLASS_1_E6272F143FEEC786_SET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0xAAE4BB0)
#define CLASS_1_E6272F143FEEC786_SET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0xAAE4C40)
#define CLASS_1_E6272F143FEEC786_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAE4B00)
#define CLASS_1_E6272F143FEEC786__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE3A60)

inline static constexpr unsigned int Class_1_E6272F143FEEC786_TypeDefinitionIndex = 52075;

class Class_1_E6272F143FEEC786 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_1_2; // 0x20
	::Class_1_07A210D994F284D8_3* _ParallelRoot_k__BackingField; // 0x28
	::Class_1_1C30CE192ABE4C54* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_503* _ParentParallelTaskList_k__BackingField; // 0x38
	::RPG::GameCore::ParallelConfigForTaskListTemplate* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* Field_1_7; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_1_8; // 0x50
	::RPG::GameCore::FixPoint _ParallelLocalTimeStamp_k__BackingField; // 0x58
	::System::Int32 _Index_k__BackingField; // 0x60
	::System::UInt32 _LastTickCount_k__BackingField; // 0x64
	::System::Int32 _SubIndex_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _ParallelDelayTime_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _TargetTimeStamp_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::ParallelConfigForTaskListTemplate* a1, ::System::Int32 a2, ::Class_1_1C30CE192ABE4C54* a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a4, ::Class_3_07C3C4D2990C49EE* a5, ::System::Int32 a6, ::RPG::GameCore::GameEntity* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelConfigForTaskListTemplate*, ::System::Int32, ::Class_1_1C30CE192ABE4C54*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*, ::Class_3_07C3C4D2990C49EE*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_1_1C30CE192ABE4C54* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_1_D3633CE2CB97D446()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_D3633CE2CB97D446_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_2D59151C189E7DE0()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_2D59151C189E7DE0_OFFSET))(this);
	}

	::Class_3_07C3C4D2990C49EE* Method_1_E216815FF48056A7(::System::String* a1)
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_E216815FF48056A7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_491* Method_1_9068CDAEA4648E16()
	{
		return ((::Class_0_16E4307DCC419505_491*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_9068CDAEA4648E16_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8BC0D11656DDA450(::System::Single a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_8BC0D11656DDA450_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_503* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}

	::System::Void Method_1_46049D0DD3BDCF94(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_46049D0DD3BDCF94_OFFSET))(this, a1);
	}

	::System::String* Method_1_E70AE03EA677AEEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_E70AE03EA677AEEA_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_TargetTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_TARGETTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TargetTimeStamp(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_TARGETTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_6AEE51845DFA6D71_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_ParallelLocalTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARALLELLOCALTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_ParallelLocalTimeStamp(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARALLELLOCALTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ParallelDelayTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARALLELDELAYTIME_OFFSET))(this);
	}

	::System::Void set_ParallelDelayTime(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARALLELDELAYTIME_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_503* get_ParentParallelTaskList()
	{
		return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARENTPARALLELTASKLIST_OFFSET))(this);
	}

	::System::Void set_ParentParallelTaskList(::Class_0_16E4307DCC419505_503* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARENTPARALLELTASKLIST_OFFSET))(this, a1);
	}

	::Class_1_07A210D994F284D8_3* get_ParallelRoot()
	{
		return ((::Class_1_07A210D994F284D8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARALLELROOT_OFFSET))(this);
	}

	::System::Void set_ParallelRoot(::Class_1_07A210D994F284D8_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07A210D994F284D8_3*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARALLELROOT_OFFSET))(this, a1);
	}

	::System::UInt32 get_LastTickCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_LASTTICKCOUNT_OFFSET))(this);
	}

	::System::Void set_LastTickCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_LASTTICKCOUNT_OFFSET))(this, a1);
	}

	::Class_3_07C3C4D2990C49EE* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_INDEX_OFFSET))(this, a1);
	}

	::System::Int32 get_SubIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_SUBINDEX_OFFSET))(this);
	}

	::System::Void set_SubIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_SUBINDEX_OFFSET))(this, a1);
	}
};
