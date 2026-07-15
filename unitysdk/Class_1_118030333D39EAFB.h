#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationType.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Object.h"

class Class_1_242BFB9DE152D766;
class Class_1_3AE7F314F70B83F2;
class Class_1_454820C600B58609;
class Class_1_DF769287778AC293;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_118030333D39EAFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146F9250)
#define CLASS_1_118030333D39EAFB_GET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x146FC8D0)
#define CLASS_1_118030333D39EAFB_GET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x146FC910)
#define CLASS_1_118030333D39EAFB_GET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x146FC8F0)
#define CLASS_1_118030333D39EAFB_METHOD_1_19C3311A7A653DD7_OFFSET UNITYSDK_OFFSET(0x146F9B90)
#define CLASS_1_118030333D39EAFB_METHOD_1_4D8FE774C4E32126_OFFSET UNITYSDK_OFFSET(0x146F9AD0)
#define CLASS_1_118030333D39EAFB_METHOD_1_58F8ABBE1AFB3135_OFFSET UNITYSDK_OFFSET(0x146F9300)
#define CLASS_1_118030333D39EAFB_METHOD_1_63CC7F472044A608_OFFSET UNITYSDK_OFFSET(0x146F96E0)
#define CLASS_1_118030333D39EAFB_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x146F9ED0)
#define CLASS_1_118030333D39EAFB_METHOD_1_85501DF13201FEC7_OFFSET UNITYSDK_OFFSET(0x146FA2A0)
#define CLASS_1_118030333D39EAFB_METHOD_1_87F5F69C9D6AE6DF_OFFSET UNITYSDK_OFFSET(0x146F9FE0)
#define CLASS_1_118030333D39EAFB_METHOD_1_8EB27D281ACA7277_OFFSET UNITYSDK_OFFSET(0x146FC790)
#define CLASS_1_118030333D39EAFB_METHOD_1_A408B25A0F96FFA9_OFFSET UNITYSDK_OFFSET(0x146FC6B0)
#define CLASS_1_118030333D39EAFB_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x146F92A0)
#define CLASS_1_118030333D39EAFB_METHOD_1_C2850027A5C7FEFD_OFFSET UNITYSDK_OFFSET(0x146FC4A0)
#define CLASS_1_118030333D39EAFB_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x146F9170)
#define CLASS_1_118030333D39EAFB_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x146F9F20)
#define CLASS_1_118030333D39EAFB_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x146F9A90)
#define CLASS_1_118030333D39EAFB_SET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x146FC8E0)
#define CLASS_1_118030333D39EAFB_SET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x146FC920)
#define CLASS_1_118030333D39EAFB_SET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x146FC900)
#define CLASS_1_118030333D39EAFB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x146F7B00)
#define CLASS_1_118030333D39EAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x146F7A40)

inline static constexpr unsigned int Class_1_118030333D39EAFB_TypeDefinitionIndex = 56376;

class Class_1_118030333D39EAFB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_1 = 0xC8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x258; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4B0; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Class_1_DF769287778AC293* Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _SnapshotHashList_k__BackingField; // 0x18
	::Il2CppArray<::Class_1_DF769287778AC293*>* _SnapshotList_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_242BFB9DE152D766*>* Field_1_11; // 0x28
	::RPG::GameCore::BattleLineupData* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* _OperationList_k__BackingField; // 0x38
	::System::UInt32 Field_1_14; // 0x40
	::System::UInt32 Field_1_15; // 0x44
	::System::Int32 Field_1_16; // 0x48
	::System::UInt32 Field_1_17; // 0x4C
	::System::UInt32 Field_1_18; // 0x50
	::System::UInt32 Field_1_19; // 0x54
	::System::UInt32 Field_1_20; // 0x58
	::System::UInt32 Field_1_21; // 0x5C
	::System::UInt32 Field_1_22; // 0x60
	::System::Int32 Field_1_23; // 0x64
	::System::UInt32 Field_1_24; // 0x68
	::System::Boolean Field_1_25; // 0x6C
	::System::Boolean Field_1_26; // 0x6D
	::System::Boolean Field_1_27; // 0x6E
	::System::Boolean Field_1_28; // 0x6F
	::System::UInt32 Field_1_29; // 0x70

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_3AE7F314F70B83F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2*))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58F8ABBE1AFB3135(::RPG::GameCore::TurnBasedGameMode* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::OperationType a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::OperationType, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_58F8ABBE1AFB3135_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_63CC7F472044A608(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_63CC7F472044A608_OFFSET))(this, a1);
	}

	::Class_1_454820C600B58609* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_454820C600B58609*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	static ::System::String* Method_1_4D8FE774C4E32126()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_4D8FE774C4E32126_OFFSET))();
	}

	static ::System::String* Method_1_19C3311A7A653DD7()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_19C3311A7A653DD7_OFFSET))();
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_87F5F69C9D6AE6DF(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_87F5F69C9D6AE6DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C2850027A5C7FEFD(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_C2850027A5C7FEFD_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_3AE7F314F70B83F2* Method_1_85501DF13201FEC7(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_1_3AE7F314F70B83F2*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_85501DF13201FEC7_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DF769287778AC293* Method_1_8EB27D281ACA7277(::System::Int32 a1)
	{
		return ((::Class_1_DF769287778AC293*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_8EB27D281ACA7277_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_A408B25A0F96FFA9()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_A408B25A0F96FFA9_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* get_OperationList()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_GET_OPERATIONLIST_OFFSET))(this);
	}

	::System::Void set_OperationList(::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_SET_OPERATIONLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_DF769287778AC293*>* get_SnapshotList()
	{
		return ((::Il2CppArray<::Class_1_DF769287778AC293*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_GET_SNAPSHOTLIST_OFFSET))(this);
	}

	::System::Void set_SnapshotList(::Il2CppArray<::Class_1_DF769287778AC293*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DF769287778AC293*>*))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_SET_SNAPSHOTLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SnapshotHashList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_GET_SNAPSHOTHASHLIST_OFFSET))(this);
	}

	::System::Void set_SnapshotHashList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_118030333D39EAFB_SET_SNAPSHOTHASHLIST_OFFSET))(this, a1);
	}
};
