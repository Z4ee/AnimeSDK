#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6E6B33B2A8A49AE3_Struct_2_F7FD751D4D9BBF3F.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_2_A48F3719AA1CF200_5;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x143CA930)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x143CACA0)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x143CAC60)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_08A033CDDE1D7C48_OFFSET UNITYSDK_OFFSET(0x143BF500)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_12193FC087E9BA96_OFFSET UNITYSDK_OFFSET(0x143CB910)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_42B462697B2CAC06_OFFSET UNITYSDK_OFFSET(0x143CADB0)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_4E04224DDC736194_OFFSET UNITYSDK_OFFSET(0x143CA740)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_67BD82F362EFF958_OFFSET UNITYSDK_OFFSET(0x143CB890)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_78DEE2B917F86815_OFFSET UNITYSDK_OFFSET(0x143CABD0)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_7D2D7343A5E17B1C_OFFSET UNITYSDK_OFFSET(0x143C9E30)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_9243D8B6EA609B61_OFFSET UNITYSDK_OFFSET(0x143CAD40)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_A760239C1A55F8F8_OFFSET UNITYSDK_OFFSET(0x143CB530)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_B55327F2B1D9F668_OFFSET UNITYSDK_OFFSET(0x143CACE0)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D283E963BEE39BB3_1_OFFSET UNITYSDK_OFFSET(0x143CA9C0)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D283E963BEE39BB3_OFFSET UNITYSDK_OFFSET(0x143CA970)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D3423CC2A44F3625_OFFSET UNITYSDK_OFFSET(0x143C3840)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D96D12026F99DEF9_OFFSET UNITYSDK_OFFSET(0x143CAE90)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_E29FC0C720DDC552_OFFSET UNITYSDK_OFFSET(0x143CAA10)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x143CA7C0)
#define CLASS_1_6E6B33B2A8A49AE3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x143CA920)
#define CLASS_1_6E6B33B2A8A49AE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x143CB9B0)

inline static constexpr unsigned int Class_1_6E6B33B2A8A49AE3_TypeDefinitionIndex = 52134;

class Class_1_6E6B33B2A8A49AE3 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E6B33B2A8A49AE3_TypeDefinitionIndex)->GetStaticField(0x35450);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_6E6B33B2A8A49AE3_Struct_2_F7FD751D4D9BBF3F>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_6E6B33B2A8A49AE3_Struct_2_F7FD751D4D9BBF3F>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E6B33B2A8A49AE3_TypeDefinitionIndex)->GetStaticField(0x35458);
	}
	static ::System::Collections::Generic::LinkedList_1<::Class_1_6E6B33B2A8A49AE3_Struct_2_F7FD751D4D9BBF3F>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::LinkedList_1<::Class_1_6E6B33B2A8A49AE3_Struct_2_F7FD751D4D9BBF3F>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E6B33B2A8A49AE3_TypeDefinitionIndex)->GetStaticField(0x35460);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E6B33B2A8A49AE3_TypeDefinitionIndex)->GetStaticField(0xA840);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E6B33B2A8A49AE3_TypeDefinitionIndex)->GetStaticField(0xA844);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_7D2D7343A5E17B1C(::RPG::GameCore::PredicateConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PredicateConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_7D2D7343A5E17B1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	static ::System::Void Method_1_D283E963BEE39BB3(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D283E963BEE39BB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D283E963BEE39BB3_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D283E963BEE39BB3_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3423CC2A44F3625(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D3423CC2A44F3625_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78DEE2B917F86815(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_78DEE2B917F86815_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_B55327F2B1D9F668_OFFSET))(a1);
	}

	static ::System::Void Method_1_9243D8B6EA609B61(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_9243D8B6EA609B61_OFFSET))(a1, a2);
	}

	static ::Class_1_5F51D4049EA87B7B* Method_1_4E04224DDC736194(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_4E04224DDC736194_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Method_1_42B462697B2CAC06(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_5* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_42B462697B2CAC06_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_1_D96D12026F99DEF9(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_5* a3)
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_D96D12026F99DEF9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A760239C1A55F8F8(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1, ::Class_1_5F51D4049EA87B7B* a2, ::Class_2_A48F3719AA1CF200_5* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*, ::Class_1_5F51D4049EA87B7B*, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_A760239C1A55F8F8_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::TaskState Method_1_08A033CDDE1D7C48(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_08A033CDDE1D7C48_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_67BD82F362EFF958(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_67BD82F362EFF958_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_12193FC087E9BA96(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicFloat* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicFloat*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_12193FC087E9BA96_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_E29FC0C720DDC552(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E6B33B2A8A49AE3_METHOD_1_E29FC0C720DDC552_OFFSET))(a1, a2);
	}
};
