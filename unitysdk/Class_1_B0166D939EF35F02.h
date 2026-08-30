#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B0166D939EF35F02_Struct_2_F7FD751D4D9BBF3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0;
class Class_2_A48F3719AA1CF200_4;
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

#define CLASS_1_B0166D939EF35F02_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x16933920)
#define CLASS_1_B0166D939EF35F02_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x16933E20)
#define CLASS_1_B0166D939EF35F02_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x16933DE0)
#define CLASS_1_B0166D939EF35F02_METHOD_1_064D654FC081CD4C_OFFSET UNITYSDK_OFFSET(0x169323B0)
#define CLASS_1_B0166D939EF35F02_METHOD_1_12193FC087E9BA96_OFFSET UNITYSDK_OFFSET(0x16934E30)
#define CLASS_1_B0166D939EF35F02_METHOD_1_20538A16C034E4AE_OFFSET UNITYSDK_OFFSET(0x16932000)
#define CLASS_1_B0166D939EF35F02_METHOD_1_42B462697B2CAC06_OFFSET UNITYSDK_OFFSET(0x16933F30)
#define CLASS_1_B0166D939EF35F02_METHOD_1_4E04224DDC736194_OFFSET UNITYSDK_OFFSET(0x1690E220)
#define CLASS_1_B0166D939EF35F02_METHOD_1_5B6C39AB591A4771_OFFSET UNITYSDK_OFFSET(0x16921670)
#define CLASS_1_B0166D939EF35F02_METHOD_1_5EA7991264B725AA_OFFSET UNITYSDK_OFFSET(0x16933A00)
#define CLASS_1_B0166D939EF35F02_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x169337B0)
#define CLASS_1_B0166D939EF35F02_METHOD_1_67BD82F362EFF958_OFFSET UNITYSDK_OFFSET(0x16934DB0)
#define CLASS_1_B0166D939EF35F02_METHOD_1_78DEE2B917F86815_OFFSET UNITYSDK_OFFSET(0x16933D50)
#define CLASS_1_B0166D939EF35F02_METHOD_1_7D2D7343A5E17B1C_OFFSET UNITYSDK_OFFSET(0x16932C90)
#define CLASS_1_B0166D939EF35F02_METHOD_1_9243D8B6EA609B61_OFFSET UNITYSDK_OFFSET(0x16933EC0)
#define CLASS_1_B0166D939EF35F02_METHOD_1_93741BE2A4B3009D_OFFSET UNITYSDK_OFFSET(0x16934940)
#define CLASS_1_B0166D939EF35F02_METHOD_1_A0C72D30C04ECA48_OFFSET UNITYSDK_OFFSET(0x16934020)
#define CLASS_1_B0166D939EF35F02_METHOD_1_B55327F2B1D9F668_OFFSET UNITYSDK_OFFSET(0x16933E60)
#define CLASS_1_B0166D939EF35F02_METHOD_1_D283E963BEE39BB3_1_OFFSET UNITYSDK_OFFSET(0x169339B0)
#define CLASS_1_B0166D939EF35F02_METHOD_1_D283E963BEE39BB3_OFFSET UNITYSDK_OFFSET(0x16933960)
#define CLASS_1_B0166D939EF35F02_METHOD_1_D3423CC2A44F3625_OFFSET UNITYSDK_OFFSET(0x1690E630)
#define CLASS_1_B0166D939EF35F02_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16932B30)
#define CLASS_1_B0166D939EF35F02_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16933910)
#define CLASS_1_B0166D939EF35F02__CCTOR_OFFSET UNITYSDK_OFFSET(0x16934ED0)

inline static constexpr unsigned int Class_1_B0166D939EF35F02_TypeDefinitionIndex = 56005;

class Class_1_B0166D939EF35F02 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NJNPEJAFOBB()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x61400);
	}
	static ::System::Collections::Generic::LinkedList_1<::Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0*>** StaticGet_EBIIADAIEEM()
	{
		return (::System::Collections::Generic::LinkedList_1<::Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x61408);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0*>*>** StaticGet_PGGCIAIBDBJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x61410);
	}
	static ::System::Collections::Generic::LinkedList_1<::Class_1_B0166D939EF35F02_Struct_2_F7FD751D4D9BBF3F>** StaticGet_MJCDOEENHAJ()
	{
		return (::System::Collections::Generic::LinkedList_1<::Class_1_B0166D939EF35F02_Struct_2_F7FD751D4D9BBF3F>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x61418);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_B0166D939EF35F02_Struct_2_F7FD751D4D9BBF3F>*>** StaticGet_HJJLJGIDDJH()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_B0166D939EF35F02_Struct_2_F7FD751D4D9BBF3F>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x61420);
	}
	static ::System::Int32* StaticGet_JOONLNACOFL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x14080);
	}
	static ::System::Int32* StaticGet_PKFFGMDENKG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x14084);
	}
	static ::System::Boolean* StaticGet_IDNMMODPELO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x14088);
	}
	static ::System::Int32* StaticGet_JOLAAHKOMNC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0166D939EF35F02_TypeDefinitionIndex)->GetStaticField(0x1408C);
	}
	// static const ::System::Int32 DPEJNAPCAHN = 0x40; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_20538A16C034E4AE(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::StringHash a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_20538A16C034E4AE_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0* Method_1_064D654FC081CD4C(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::StringHash a3)
	{
		return ((::Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0*(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_064D654FC081CD4C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Boolean Method_1_7D2D7343A5E17B1C(::RPG::GameCore::PredicateConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PredicateConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_7D2D7343A5E17B1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	static ::System::Void Method_1_D283E963BEE39BB3(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_D283E963BEE39BB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D283E963BEE39BB3_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_D283E963BEE39BB3_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D3423CC2A44F3625(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_D3423CC2A44F3625_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78DEE2B917F86815(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_78DEE2B917F86815_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_B55327F2B1D9F668_OFFSET))(a1);
	}

	static ::System::Void Method_1_9243D8B6EA609B61(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_9243D8B6EA609B61_OFFSET))(a1, a2);
	}

	static ::Class_1_5F51D4049EA87B7B* Method_1_4E04224DDC736194(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_4E04224DDC736194_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Method_1_42B462697B2CAC06(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_4* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_42B462697B2CAC06_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_1_A0C72D30C04ECA48(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_4* a3)
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_A0C72D30C04ECA48_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_93741BE2A4B3009D(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1, ::Class_1_5F51D4049EA87B7B* a2, ::Class_2_A48F3719AA1CF200_4* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*, ::Class_1_5F51D4049EA87B7B*, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_93741BE2A4B3009D_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::TaskState Method_1_5B6C39AB591A4771(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_5B6C39AB591A4771_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_67BD82F362EFF958(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_67BD82F362EFF958_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_12193FC087E9BA96(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicFloat* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicFloat*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_12193FC087E9BA96_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_5EA7991264B725AA(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_METHOD_1_5EA7991264B725AA_OFFSET))(a1, a2);
	}
};
