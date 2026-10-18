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

#define CLASS_1_3C02425323B914AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165B8A50)
#define CLASS_1_3C02425323B914AE_GET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x165BC0B0)
#define CLASS_1_3C02425323B914AE_GET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x165BC0F0)
#define CLASS_1_3C02425323B914AE_GET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x165BC0D0)
#define CLASS_1_3C02425323B914AE_METHOD_1_19C3311A7A653DD7_OFFSET UNITYSDK_OFFSET(0x165B9390)
#define CLASS_1_3C02425323B914AE_METHOD_1_4D8FE774C4E32126_OFFSET UNITYSDK_OFFSET(0x165B92D0)
#define CLASS_1_3C02425323B914AE_METHOD_1_63CC7F472044A608_OFFSET UNITYSDK_OFFSET(0x165B8EE0)
#define CLASS_1_3C02425323B914AE_METHOD_1_6AC5CC1E194C672E_OFFSET UNITYSDK_OFFSET(0x165B8B00)
#define CLASS_1_3C02425323B914AE_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x165B96D0)
#define CLASS_1_3C02425323B914AE_METHOD_1_85501DF13201FEC7_OFFSET UNITYSDK_OFFSET(0x165B9AA0)
#define CLASS_1_3C02425323B914AE_METHOD_1_87F5F69C9D6AE6DF_OFFSET UNITYSDK_OFFSET(0x165B97E0)
#define CLASS_1_3C02425323B914AE_METHOD_1_8EB27D281ACA7277_OFFSET UNITYSDK_OFFSET(0x165BBF70)
#define CLASS_1_3C02425323B914AE_METHOD_1_A408B25A0F96FFA9_OFFSET UNITYSDK_OFFSET(0x165BBE90)
#define CLASS_1_3C02425323B914AE_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x165B8AA0)
#define CLASS_1_3C02425323B914AE_METHOD_1_C2850027A5C7FEFD_OFFSET UNITYSDK_OFFSET(0x165BBC80)
#define CLASS_1_3C02425323B914AE_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x165B8970)
#define CLASS_1_3C02425323B914AE_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x165B9720)
#define CLASS_1_3C02425323B914AE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x165B9290)
#define CLASS_1_3C02425323B914AE_SET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x165BC0C0)
#define CLASS_1_3C02425323B914AE_SET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x165BC100)
#define CLASS_1_3C02425323B914AE_SET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x165BC0E0)
#define CLASS_1_3C02425323B914AE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x165B7300)
#define CLASS_1_3C02425323B914AE__CTOR_OFFSET UNITYSDK_OFFSET(0x165B7240)

inline static constexpr unsigned int Class_1_3C02425323B914AE_TypeDefinitionIndex = 59010;

class Class_1_3C02425323B914AE : public ::System::Object
{
public:
	// static const ::System::Int32 BFGBPLIKBDH = 0x4; // 0x0
	// static const ::System::Int32 PGOJGJJODGJ = 0xC8; // 0x0
	// static const ::System::Int32 IIOIMBNIGAF = 0xC8; // 0x0
	// static const ::System::Int32 AAMDFIGCPHE = 0x2; // 0x0
	// static const ::System::Int32 GGDIAEKELMG = 0x258; // 0x0
	// static const ::System::Int32 APBBHNCDGDA = 0x3; // 0x0
	// static const ::System::Int32 BODGLNBDCMH = 0x4B0; // 0x0
	// static const ::System::Int32 GJDEDGFBBLD = 0x4; // 0x0
	::RPG::GameCore::BattleLineupData* PCIGECMCAJM; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _SnapshotHashList_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* _OperationList_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_242BFB9DE152D766*>* AAFJGBFJFHE; // 0x28
	::Class_1_DF769287778AC293* ENFNBBJHLEM; // 0x30
	::Il2CppArray<::Class_1_DF769287778AC293*>* _SnapshotList_k__BackingField; // 0x38
	::System::UInt32 HNEIIAGADGO; // 0x40
	::System::UInt32 DPDNOGAGALP; // 0x44
	::System::Int32 PFIPKLJOPLJ; // 0x48
	::System::UInt32 BBFPALEAHAE; // 0x4C
	::System::UInt32 ABNPHONMCEP; // 0x50
	::System::UInt32 CFOIPGKACMJ; // 0x54
	::System::UInt32 NJIOMOHBILM; // 0x58
	::System::UInt32 FIMNPJLNLEE; // 0x5C
	::System::Int32 PMIPHKEANNP; // 0x60
	::System::UInt32 BIIEFLDLGLL; // 0x64
	::System::Boolean LJPCGDPEGFO; // 0x68
	::System::Boolean IIHAKBBPLEK; // 0x69
	::System::Boolean NIMOCMOJGGJ; // 0x6A
	::System::Boolean DEBAOCJBBNB; // 0x6B
	::System::UInt32 BIDGBCELLJK; // 0x6C
	::System::UInt32 FFLDMJCEMDC; // 0x70

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_3AE7F314F70B83F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2*))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6AC5CC1E194C672E(::RPG::GameCore::TurnBasedGameMode* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::OperationType a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::OperationType, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_6AC5CC1E194C672E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_63CC7F472044A608(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_63CC7F472044A608_OFFSET))(this, a1);
	}

	::Class_1_454820C600B58609* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_454820C600B58609*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	static ::System::String* Method_1_4D8FE774C4E32126()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_4D8FE774C4E32126_OFFSET))();
	}

	static ::System::String* Method_1_19C3311A7A653DD7()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_19C3311A7A653DD7_OFFSET))();
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_87F5F69C9D6AE6DF(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_87F5F69C9D6AE6DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C2850027A5C7FEFD(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_C2850027A5C7FEFD_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_3AE7F314F70B83F2* Method_1_85501DF13201FEC7(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_1_3AE7F314F70B83F2*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_85501DF13201FEC7_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DF769287778AC293* Method_1_8EB27D281ACA7277(::System::Int32 a1)
	{
		return ((::Class_1_DF769287778AC293*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_8EB27D281ACA7277_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_A408B25A0F96FFA9()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_A408B25A0F96FFA9_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* get_OperationList()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_GET_OPERATIONLIST_OFFSET))(this);
	}

	::System::Void set_OperationList(::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_SET_OPERATIONLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_DF769287778AC293*>* get_SnapshotList()
	{
		return ((::Il2CppArray<::Class_1_DF769287778AC293*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_GET_SNAPSHOTLIST_OFFSET))(this);
	}

	::System::Void set_SnapshotList(::Il2CppArray<::Class_1_DF769287778AC293*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DF769287778AC293*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_SET_SNAPSHOTLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SnapshotHashList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_GET_SNAPSHOTHASHLIST_OFFSET))(this);
	}

	::System::Void set_SnapshotHashList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3C02425323B914AE_SET_SNAPSHOTHASHLIST_OFFSET))(this, a1);
	}
};
