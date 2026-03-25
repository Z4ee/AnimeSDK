#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_390;
class Class_0_16E4307DCC419505_401;
class Class_1_07A210D994F284D8_3;
class Class_1_2CAAA2FDF9170110;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E6272F143FEEC786_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108C4440)
#define CLASS_1_E6272F143FEEC786_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x108C5280)
#define CLASS_1_E6272F143FEEC786_GET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0x108C5250)
#define CLASS_1_E6272F143FEEC786_GET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x108C51F0)
#define CLASS_1_E6272F143FEEC786_GET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x108C51D0)
#define CLASS_1_E6272F143FEEC786_GET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x108C5230)
#define CLASS_1_E6272F143FEEC786_GET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x108C5210)
#define CLASS_1_E6272F143FEEC786_GET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0x108C52A0)
#define CLASS_1_E6272F143FEEC786_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x108C5130)
#define CLASS_1_E6272F143FEEC786_METHOD_1_21BEB169F4ABE055_OFFSET UNITYSDK_OFFSET(0x108C44E0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_2D59151C189E7DE0_OFFSET UNITYSDK_OFFSET(0x108C4020)
#define CLASS_1_E6272F143FEEC786_METHOD_1_60400D29DFCCFBA3_OFFSET UNITYSDK_OFFSET(0x108C4D90)
#define CLASS_1_E6272F143FEEC786_METHOD_1_9068CDAEA4648E16_OFFSET UNITYSDK_OFFSET(0x108C41C0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x108C4CD0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_C5DEEC529DF2B053_OFFSET UNITYSDK_OFFSET(0x108C4B10)
#define CLASS_1_E6272F143FEEC786_METHOD_1_D3633CE2CB97D446_OFFSET UNITYSDK_OFFSET(0x108C3FE0)
#define CLASS_1_E6272F143FEEC786_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x108C4A90)
#define CLASS_1_E6272F143FEEC786_METHOD_1_E216815FF48056A7_OFFSET UNITYSDK_OFFSET(0x108C4060)
#define CLASS_1_E6272F143FEEC786_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x108C5150)
#define CLASS_1_E6272F143FEEC786_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x108C5270)
#define CLASS_1_E6272F143FEEC786_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x108C3FA0)
#define CLASS_1_E6272F143FEEC786_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x108C5290)
#define CLASS_1_E6272F143FEEC786_SET_LASTTICKCOUNT_OFFSET UNITYSDK_OFFSET(0x108C5260)
#define CLASS_1_E6272F143FEEC786_SET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x108C5200)
#define CLASS_1_E6272F143FEEC786_SET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x108C51E0)
#define CLASS_1_E6272F143FEEC786_SET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x108C5240)
#define CLASS_1_E6272F143FEEC786_SET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x108C5220)
#define CLASS_1_E6272F143FEEC786_SET_SUBINDEX_OFFSET UNITYSDK_OFFSET(0x108C52B0)
#define CLASS_1_E6272F143FEEC786_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x108C5140)
#define CLASS_1_E6272F143FEEC786__CTOR_OFFSET UNITYSDK_OFFSET(0x108C3F40)

inline static constexpr unsigned int Class_1_E6272F143FEEC786_TypeDefinitionIndex = 44665;

class Class_1_E6272F143FEEC786 : public ::System::Object
{
public:
	::Class_1_2CAAA2FDF9170110* Field_1_8; // 0x10
	::Class_1_07A210D994F284D8_3* _ParallelRoot_k__BackingField; // 0x18
	::RPG::GameCore::GameEntity* Field_1_12; // 0x20
	::RPG::GameCore::ParallelConfigForTaskListTemplate* Field_1_11; // 0x28
	::Class_3_5775A4FEC79026BC* Field_1_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* Field_1_13; // 0x38
	::RPG::GameCore::TaskContext* Field_1_14; // 0x40
	::Class_0_16E4307DCC419505_401* _ParentParallelTaskList_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_1_9; // 0x50
	::RPG::GameCore::FixPoint _ParallelLocalTimeStamp_k__BackingField; // 0x58
	::System::Int32 _Index_k__BackingField; // 0x60
	::System::UInt32 _LastTickCount_k__BackingField; // 0x64
	::RPG::GameCore::FixPoint _ParallelDelayTime_k__BackingField; // 0x68
	::System::Int32 _SubIndex_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _TargetTimeStamp_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::ParallelConfigForTaskListTemplate* a1, ::System::Int32 a2, ::Class_1_2CAAA2FDF9170110* a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a4, ::Class_3_5775A4FEC79026BC* a5, ::System::Int32 a6, ::RPG::GameCore::GameEntity* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelConfigForTaskListTemplate*, ::System::Int32, ::Class_1_2CAAA2FDF9170110*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*, ::Class_3_5775A4FEC79026BC*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_1_2CAAA2FDF9170110* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_1_D3633CE2CB97D446()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_D3633CE2CB97D446_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_2D59151C189E7DE0()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_2D59151C189E7DE0_OFFSET))(this);
	}

	::Class_3_5775A4FEC79026BC* Method_1_E216815FF48056A7(::System::String* a1)
	{
		return ((::Class_3_5775A4FEC79026BC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_E216815FF48056A7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_390* Method_1_9068CDAEA4648E16()
	{
		return ((::Class_0_16E4307DCC419505_390*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_9068CDAEA4648E16_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_21BEB169F4ABE055(::System::Single a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_21BEB169F4ABE055_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Void Method_1_C5DEEC529DF2B053(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_C5DEEC529DF2B053_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::String* Method_1_60400D29DFCCFBA3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_60400D29DFCCFBA3_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_TargetTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_TARGETTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TargetTimeStamp(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_TARGETTIMESTAMP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_ParallelLocalTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARALLELLOCALTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_ParallelLocalTimeStamp(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARALLELLOCALTIMESTAMP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_ParallelDelayTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARALLELDELAYTIME_OFFSET))(this);
	}

	::System::Void set_ParallelDelayTime(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARALLELDELAYTIME_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_401* get_ParentParallelTaskList()
	{
		return ((::Class_0_16E4307DCC419505_401*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARENTPARALLELTASKLIST_OFFSET))(this);
	}

	::System::Void set_ParentParallelTaskList(::Class_0_16E4307DCC419505_401* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARENTPARALLELTASKLIST_OFFSET))(this, value);
	}

	::Class_1_07A210D994F284D8_3* get_ParallelRoot()
	{
		return ((::Class_1_07A210D994F284D8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_PARALLELROOT_OFFSET))(this);
	}

	::System::Void set_ParallelRoot(::Class_1_07A210D994F284D8_3* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07A210D994F284D8_3*))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_PARALLELROOT_OFFSET))(this, value);
	}

	::System::UInt32 get_LastTickCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_LASTTICKCOUNT_OFFSET))(this);
	}

	::System::Void set_LastTickCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_LASTTICKCOUNT_OFFSET))(this, value);
	}

	::Class_3_5775A4FEC79026BC* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_5775A4FEC79026BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_INDEX_OFFSET))(this, value);
	}

	::System::Int32 get_SubIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_GET_SUBINDEX_OFFSET))(this);
	}

	::System::Void set_SubIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6272F143FEEC786_SET_SUBINDEX_OFFSET))(this, value);
	}
};
