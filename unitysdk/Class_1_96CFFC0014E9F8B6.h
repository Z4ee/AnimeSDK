#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96CFFC0014E9F8B6_Struct_2_F7FD751D4D9BBF3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_96CFFC0014E9F8B6_Class_1_1AB4AA8D65FBA6B0;
class Class_2_A48F3719AA1CF200_7;
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

#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0xB22B1E0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0xB22B8D0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0xB22B890)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_064D654FC081CD4C_OFFSET UNITYSDK_OFFSET(0xB229C60)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_12193FC087E9BA96_OFFSET UNITYSDK_OFFSET(0xB22CEF0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_20538A16C034E4AE_OFFSET UNITYSDK_OFFSET(0xB2298B0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_21F82AFA61B7F220_OFFSET UNITYSDK_OFFSET(0xB22B4A0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_42B462697B2CAC06_OFFSET UNITYSDK_OFFSET(0xB22BA60)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_4E04224DDC736194_OFFSET UNITYSDK_OFFSET(0xB22B9E0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_5B6C39AB591A4771_OFFSET UNITYSDK_OFFSET(0xB22C8E0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_60E1F7F58CCF739F_1_OFFSET UNITYSDK_OFFSET(0xB22B070)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xB22A3E0)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_67BD82F362EFF958_OFFSET UNITYSDK_OFFSET(0xB22CE70)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_7D2D7343A5E17B1C_OFFSET UNITYSDK_OFFSET(0xB22A550)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_9243D8B6EA609B61_OFFSET UNITYSDK_OFFSET(0xB22B970)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_93741BE2A4B3009D_OFFSET UNITYSDK_OFFSET(0xB22C470)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_A0C72D30C04ECA48_OFFSET UNITYSDK_OFFSET(0xB22BB50)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_A806E9E4BCB3D901_OFFSET UNITYSDK_OFFSET(0xB204D10)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_AEF4D240E324190B_OFFSET UNITYSDK_OFFSET(0xB22B530)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_B55327F2B1D9F668_OFFSET UNITYSDK_OFFSET(0xB22B910)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_CF1B38F935916E3C_1_OFFSET UNITYSDK_OFFSET(0xB22B270)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_CF1B38F935916E3C_OFFSET UNITYSDK_OFFSET(0xB22B220)
#define CLASS_1_96CFFC0014E9F8B6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB22B1D0)
#define CLASS_1_96CFFC0014E9F8B6__CCTOR_OFFSET UNITYSDK_OFFSET(0xB22CF90)

inline static constexpr unsigned int Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex = 55817;

class Class_1_96CFFC0014E9F8B6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::LinkedList_1<::Class_1_96CFFC0014E9F8B6_Class_1_1AB4AA8D65FBA6B0*>** StaticGet_EBIIADAIEEM()
	{
		return (::System::Collections::Generic::LinkedList_1<::Class_1_96CFFC0014E9F8B6_Class_1_1AB4AA8D65FBA6B0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x179B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_96CFFC0014E9F8B6_Struct_2_F7FD751D4D9BBF3F>*>** StaticGet_HJJLJGIDDJH()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_96CFFC0014E9F8B6_Struct_2_F7FD751D4D9BBF3F>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x179B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_96CFFC0014E9F8B6_Class_1_1AB4AA8D65FBA6B0*>*>** StaticGet_PGGCIAIBDBJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_96CFFC0014E9F8B6_Class_1_1AB4AA8D65FBA6B0*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x179C0);
	}
	static ::System::Collections::Generic::LinkedList_1<::Class_1_96CFFC0014E9F8B6_Struct_2_F7FD751D4D9BBF3F>** StaticGet_MJCDOEENHAJ()
	{
		return (::System::Collections::Generic::LinkedList_1<::Class_1_96CFFC0014E9F8B6_Struct_2_F7FD751D4D9BBF3F>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x179C8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NJNPEJAFOBB()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x179D0);
	}
	static ::System::Boolean* StaticGet_IDNMMODPELO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x5830);
	}
	static ::System::Int32* StaticGet_PKFFGMDENKG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x5834);
	}
	static ::System::Int32* StaticGet_JOLAAHKOMNC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x5838);
	}
	static ::System::Int32* StaticGet_JOONLNACOFL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96CFFC0014E9F8B6_TypeDefinitionIndex)->GetStaticField(0x583C);
	}
	// static const ::System::Int32 DPEJNAPCAHN = 0x40; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_20538A16C034E4AE(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::StringHash a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_20538A16C034E4AE_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_96CFFC0014E9F8B6_Class_1_1AB4AA8D65FBA6B0* Method_1_064D654FC081CD4C(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::StringHash a3)
	{
		return ((::Class_1_96CFFC0014E9F8B6_Class_1_1AB4AA8D65FBA6B0*(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_064D654FC081CD4C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}

	static ::System::Boolean Method_1_7D2D7343A5E17B1C(::RPG::GameCore::PredicateConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PredicateConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_7D2D7343A5E17B1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_60E1F7F58CCF739F_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_60E1F7F58CCF739F_1_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	static ::System::Void Method_1_CF1B38F935916E3C(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_CF1B38F935916E3C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CF1B38F935916E3C_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_CF1B38F935916E3C_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A806E9E4BCB3D901(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_A806E9E4BCB3D901_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_21F82AFA61B7F220(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_21F82AFA61B7F220_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_B55327F2B1D9F668_OFFSET))(a1);
	}

	static ::System::Void Method_1_9243D8B6EA609B61(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_9243D8B6EA609B61_OFFSET))(a1, a2);
	}

	static ::Class_1_5F51D4049EA87B7B* Method_1_4E04224DDC736194(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_4E04224DDC736194_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Method_1_42B462697B2CAC06(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_7* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_7*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_42B462697B2CAC06_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_1_A0C72D30C04ECA48(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_7* a3)
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_7*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_A0C72D30C04ECA48_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_93741BE2A4B3009D(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1, ::Class_1_5F51D4049EA87B7B* a2, ::Class_2_A48F3719AA1CF200_7* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*, ::Class_1_5F51D4049EA87B7B*, ::Class_2_A48F3719AA1CF200_7*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_93741BE2A4B3009D_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::TaskState Method_1_5B6C39AB591A4771(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_5B6C39AB591A4771_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_67BD82F362EFF958(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_67BD82F362EFF958_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_12193FC087E9BA96(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicFloat* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicFloat*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_12193FC087E9BA96_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_AEF4D240E324190B(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96CFFC0014E9F8B6_METHOD_1_AEF4D240E324190B_OFFSET))(a1, a2, a3);
	}
};
