#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationType.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D;
class Class_1_3AE7F314F70B83F2;
class Class_1_454820C600B58609;
class Class_1_DF769287778AC293;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CA3918258B4D86BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11844500)
#define CLASS_1_CA3918258B4D86BD_GET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x11847980)
#define CLASS_1_CA3918258B4D86BD_GET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x118479C0)
#define CLASS_1_CA3918258B4D86BD_GET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x118479A0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_0FF4F9B3D79BA862_OFFSET UNITYSDK_OFFSET(0x118475C0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_19C3311A7A653DD7_OFFSET UNITYSDK_OFFSET(0x11844DE0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_2FFD980031DD79AD_OFFSET UNITYSDK_OFFSET(0x11844910)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_4D8FE774C4E32126_OFFSET UNITYSDK_OFFSET(0x11844D20)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_64F6D09695090201_OFFSET UNITYSDK_OFFSET(0x118445B0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_76EAB59129769EE4_OFFSET UNITYSDK_OFFSET(0x118454D0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x118451D0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_8EB27D281ACA7277_OFFSET UNITYSDK_OFFSET(0x11847830)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_AACAAE40CC92884D_OFFSET UNITYSDK_OFFSET(0x118452E0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x11844550)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x11844420)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x11845220)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x11844CE0)
#define CLASS_1_CA3918258B4D86BD_METHOD_1_FE05ACC82ED396D0_OFFSET UNITYSDK_OFFSET(0x11847760)
#define CLASS_1_CA3918258B4D86BD_SET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x11847990)
#define CLASS_1_CA3918258B4D86BD_SET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x118479D0)
#define CLASS_1_CA3918258B4D86BD_SET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x118479B0)
#define CLASS_1_CA3918258B4D86BD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11842FC0)
#define CLASS_1_CA3918258B4D86BD__CTOR_OFFSET UNITYSDK_OFFSET(0x11842F00)

inline static constexpr unsigned int Class_1_CA3918258B4D86BD_TypeDefinitionIndex = 54416;

class Class_1_CA3918258B4D86BD : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xC8; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xC8; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x258; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x4B0; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x4; // 0x0
	::RPG::GameCore::BattleLineupData* Field_1_13; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _SnapshotHashList_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_355A2207C3B7A99D*>* Field_1_20; // 0x20
	::Il2CppArray<::Class_1_DF769287778AC293*>* _SnapshotList_k__BackingField; // 0x28
	::Class_1_DF769287778AC293* Field_1_22; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* _OperationList_k__BackingField; // 0x38
	::System::Int32 Field_1_21; // 0x40
	::System::UInt32 Field_1_2; // 0x44
	::System::UInt32 Field_1_14; // 0x48
	::System::UInt32 Field_1_4; // 0x4C
	::System::Int32 Field_1_7; // 0x50
	::System::UInt32 Field_1_11; // 0x54
	::System::UInt32 Field_1_5; // 0x58
	::System::UInt32 Field_1_6; // 0x5C
	::System::Boolean Field_1_18; // 0x60
	::System::Boolean Field_1_16; // 0x61
	::System::Boolean Field_1_15; // 0x62
	::System::Boolean Field_1_17; // 0x63
	::System::UInt32 Field_1_19; // 0x64
	::System::UInt32 Field_1_12; // 0x68
	::System::UInt32 Field_1_1; // 0x6C
	::System::UInt32 Field_1_3; // 0x70

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_3AE7F314F70B83F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2*))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_64F6D09695090201(::RPG::GameCore::TurnBasedGameMode* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::OperationType a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::OperationType, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_64F6D09695090201_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_2FFD980031DD79AD(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_2FFD980031DD79AD_OFFSET))(this, a1);
	}

	::Class_1_454820C600B58609* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_454820C600B58609*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	static ::System::String* Method_1_4D8FE774C4E32126()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_4D8FE774C4E32126_OFFSET))();
	}

	static ::System::String* Method_1_19C3311A7A653DD7()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_19C3311A7A653DD7_OFFSET))();
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_AACAAE40CC92884D(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_AACAAE40CC92884D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FF4F9B3D79BA862(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_0FF4F9B3D79BA862_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_3AE7F314F70B83F2* Method_1_76EAB59129769EE4(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_1_3AE7F314F70B83F2*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_76EAB59129769EE4_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DF769287778AC293* Method_1_8EB27D281ACA7277(::System::Int32 a1)
	{
		return ((::Class_1_DF769287778AC293*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_8EB27D281ACA7277_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_FE05ACC82ED396D0()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_FE05ACC82ED396D0_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* get_OperationList()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_GET_OPERATIONLIST_OFFSET))(this);
	}

	::System::Void set_OperationList(::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_SET_OPERATIONLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_1_DF769287778AC293*>* get_SnapshotList()
	{
		return ((::Il2CppArray<::Class_1_DF769287778AC293*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_GET_SNAPSHOTLIST_OFFSET))(this);
	}

	::System::Void set_SnapshotList(::Il2CppArray<::Class_1_DF769287778AC293*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DF769287778AC293*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_SET_SNAPSHOTLIST_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SnapshotHashList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_GET_SNAPSHOTHASHLIST_OFFSET))(this);
	}

	::System::Void set_SnapshotHashList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_CA3918258B4D86BD_SET_SNAPSHOTHASHLIST_OFFSET))(this, value);
	}
};
