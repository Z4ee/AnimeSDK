#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_551;
class Class_0_16E4307DCC419505_564;
class Class_1_07A210D994F284D8_6;
class Class_1_1C30CE192ABE4C54;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F2239EA7F93120BB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19877B30)
#define CLASS_1_F2239EA7F93120BB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x198788D0)
#define CLASS_1_F2239EA7F93120BB_GET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0x198788A0)
#define CLASS_1_F2239EA7F93120BB_GET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x19878840)
#define CLASS_1_F2239EA7F93120BB_GET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19878820)
#define CLASS_1_F2239EA7F93120BB_GET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x19878880)
#define CLASS_1_F2239EA7F93120BB_GET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x19878860)
#define CLASS_1_F2239EA7F93120BB_GET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0x198788F0)
#define CLASS_1_F2239EA7F93120BB_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x198787B0)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_2D59151C189E7DE0_OFFSET UNITYSDK_OFFSET(0x19877700)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0x19878170)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_46049D0DD3BDCF94_OFFSET UNITYSDK_OFFSET(0x198780E0)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x198787D0)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_8BC0D11656DDA450_OFFSET UNITYSDK_OFFSET(0x19877C20)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_9068CDAEA4648E16_OFFSET UNITYSDK_OFFSET(0x198778A0)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x198783B0)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_D3633CE2CB97D446_OFFSET UNITYSDK_OFFSET(0x198776C0)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_E216815FF48056A7_OFFSET UNITYSDK_OFFSET(0x19877740)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_E70AE03EA677AEEA_OFFSET UNITYSDK_OFFSET(0x19878470)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x198788C0)
#define CLASS_1_F2239EA7F93120BB_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x19877680)
#define CLASS_1_F2239EA7F93120BB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x198788E0)
#define CLASS_1_F2239EA7F93120BB_SET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0x198788B0)
#define CLASS_1_F2239EA7F93120BB_SET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x19878850)
#define CLASS_1_F2239EA7F93120BB_SET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19878830)
#define CLASS_1_F2239EA7F93120BB_SET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x19878890)
#define CLASS_1_F2239EA7F93120BB_SET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x19878870)
#define CLASS_1_F2239EA7F93120BB_SET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0x19878900)
#define CLASS_1_F2239EA7F93120BB_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x198787C0)
#define CLASS_1_F2239EA7F93120BB__CTOR_OFFSET UNITYSDK_OFFSET(0x19877630)

inline static constexpr unsigned int Class_1_F2239EA7F93120BB_TypeDefinitionIndex = 55946;

class Class_1_F2239EA7F93120BB : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x10
	::RPG::GameCore::GameEntity* PLDMPCFJCJE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* BJIILHDACAA; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_1_1C30CE192ABE4C54* PNGPEKDABLL; // 0x30
	::Class_0_16E4307DCC419505_564* _ParentParallelTaskList_k__BackingField; // 0x38
	::Class_1_07A210D994F284D8_6* _ParallelRoot_k__BackingField; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* BPGGBFAHLHM; // 0x48
	::RPG::GameCore::ParallelConfigForTaskListTemplate* OFKGLJOAMLD; // 0x50
	::RPG::GameCore::FixPoint _TargetTimeStamp_k__BackingField; // 0x58
	::System::UInt32 _LastTickCount_k__BackingField; // 0x60
	::System::Int32 _Index_k__BackingField; // 0x64
	::RPG::GameCore::FixPoint _ParallelDelayTime_k__BackingField; // 0x68
	::System::Int32 _SubIndex_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _ParallelLocalTimeStamp_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::ParallelConfigForTaskListTemplate* a1, ::System::Int32 a2, ::Class_1_1C30CE192ABE4C54* a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a4, ::Class_3_07C3C4D2990C49EE* a5, ::System::Int32 a6, ::RPG::GameCore::GameEntity* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelConfigForTaskListTemplate*, ::System::Int32, ::Class_1_1C30CE192ABE4C54*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*, ::Class_3_07C3C4D2990C49EE*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_1_1C30CE192ABE4C54* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_1_D3633CE2CB97D446()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_D3633CE2CB97D446_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_2D59151C189E7DE0()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_2D59151C189E7DE0_OFFSET))(this);
	}

	::Class_3_07C3C4D2990C49EE* Method_1_E216815FF48056A7(::System::String* a1)
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_E216815FF48056A7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_551* Method_1_9068CDAEA4648E16()
	{
		return ((::Class_0_16E4307DCC419505_551*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_9068CDAEA4648E16_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8BC0D11656DDA450(::System::Single a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_8BC0D11656DDA450_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_564*))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}

	::System::Void Method_1_46049D0DD3BDCF94(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_46049D0DD3BDCF94_OFFSET))(this, a1);
	}

	::System::String* Method_1_E70AE03EA677AEEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_E70AE03EA677AEEA_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_TargetTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_TARGETTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TargetTimeStamp(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_TARGETTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_6AEE51845DFA6D71_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_ParallelLocalTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_PARALLELLOCALTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_ParallelLocalTimeStamp(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_PARALLELLOCALTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ParallelDelayTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_PARALLELDELAYTIME_OFFSET))(this);
	}

	::System::Void set_ParallelDelayTime(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_PARALLELDELAYTIME_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_564* get_ParentParallelTaskList()
	{
		return ((::Class_0_16E4307DCC419505_564*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_PARENTPARALLELTASKLIST_OFFSET))(this);
	}

	::System::Void set_ParentParallelTaskList(::Class_0_16E4307DCC419505_564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_564*))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_PARENTPARALLELTASKLIST_OFFSET))(this, a1);
	}

	::Class_1_07A210D994F284D8_6* get_ParallelRoot()
	{
		return ((::Class_1_07A210D994F284D8_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_PARALLELROOT_OFFSET))(this);
	}

	::System::Void set_ParallelRoot(::Class_1_07A210D994F284D8_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07A210D994F284D8_6*))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_PARALLELROOT_OFFSET))(this, a1);
	}

	::System::UInt32 get_LastTickCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_LASTTICKCOUNT_OFFSET))(this);
	}

	::System::Void set_LastTickCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_LASTTICKCOUNT_OFFSET))(this, a1);
	}

	::Class_3_07C3C4D2990C49EE* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_INDEX_OFFSET))(this, a1);
	}

	::System::Int32 get_SubIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_GET_SUBINDEX_OFFSET))(this);
	}

	::System::Void set_SubIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2239EA7F93120BB_SET_SUBINDEX_OFFSET))(this, a1);
	}
};
