#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PerformanceSkipPackRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D01B508815E742DB_METHOD_1_19894139BD3115FC_OFFSET UNITYSDK_OFFSET(0x16E12880)
#define CLASS_1_D01B508815E742DB_METHOD_1_2414C3F883A9A70B_OFFSET UNITYSDK_OFFSET(0x16E12700)
#define CLASS_1_D01B508815E742DB_METHOD_1_2CDC86570E88A55C_OFFSET UNITYSDK_OFFSET(0x16E128D0)
#define CLASS_1_D01B508815E742DB_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x16E12820)
#define CLASS_1_D01B508815E742DB_METHOD_1_3E03D9CFCE6C7F3B_OFFSET UNITYSDK_OFFSET(0x16E11F30)
#define CLASS_1_D01B508815E742DB_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x16E12500)
#define CLASS_1_D01B508815E742DB_METHOD_1_504F1A2F5A0739A0_OFFSET UNITYSDK_OFFSET(0x16E11D00)
#define CLASS_1_D01B508815E742DB_METHOD_1_63ABC3141C1B9141_OFFSET UNITYSDK_OFFSET(0x16E11AB0)
#define CLASS_1_D01B508815E742DB_METHOD_1_70900A0EFE631B7A_OFFSET UNITYSDK_OFFSET(0x16E12210)
#define CLASS_1_D01B508815E742DB_METHOD_1_776098588B7D864F_OFFSET UNITYSDK_OFFSET(0x16E11C80)
#define CLASS_1_D01B508815E742DB_METHOD_1_9E97FA0589F9172C_OFFSET UNITYSDK_OFFSET(0x16E11C10)
#define CLASS_1_D01B508815E742DB_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x16E126A0)
#define CLASS_1_D01B508815E742DB_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x16E11EC0)
#define CLASS_1_D01B508815E742DB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16E124C0)
#define CLASS_1_D01B508815E742DB_METHOD_1_F57E7C50CB056D19_OFFSET UNITYSDK_OFFSET(0x16E12180)
#define CLASS_1_D01B508815E742DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E12D50)

inline static constexpr unsigned int Class_1_D01B508815E742DB_TypeDefinitionIndex = 13162;

class Class_1_D01B508815E742DB : public ::System::Object
{
public:
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x186A0);
	}
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x186A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x186B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x186B8);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x186C0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x186C8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x186D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x6FA0);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01B508815E742DB_TypeDefinitionIndex)->GetStaticField(0x6FA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_63ABC3141C1B9141()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_63ABC3141C1B9141_OFFSET))();
	}

	static ::System::Void Method_1_9E97FA0589F9172C(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_9E97FA0589F9172C_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>* Method_1_776098588B7D864F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_776098588B7D864F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*> Method_1_3E03D9CFCE6C7F3B()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_3E03D9CFCE6C7F3B_OFFSET))();
	}

	static ::RPG::GameCore::PerformanceSkipPackRow* Method_1_F57E7C50CB056D19(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PerformanceSkipPackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_F57E7C50CB056D19_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_504F1A2F5A0739A0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_504F1A2F5A0739A0_OFFSET))();
	}

	static ::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_45AA2F5085C2C40D_OFFSET))();
	}

	static ::System::Void Method_1_2414C3F883A9A70B(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceSkipPackRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceSkipPackRow*))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_2414C3F883A9A70B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_70900A0EFE631B7A(::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5 a1, ::RPG::GameCore::PerformanceSkipPackRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_D01B508815E742DB_Struct_2_2CAFACC24B6FD90A_5, ::RPG::GameCore::PerformanceSkipPackRow*&))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_70900A0EFE631B7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC983BB33E28F43E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_AC983BB33E28F43E_OFFSET))(a1);
	}

	static ::System::Void Method_1_332DCF37A42E3152(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_332DCF37A42E3152_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_19894139BD3115FC(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_19894139BD3115FC_OFFSET))(a1);
	}

	static ::System::Void Method_1_2CDC86570E88A55C(::RPG::GameCore::PerformanceSkipPackRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PerformanceSkipPackRow*))((::PBYTE)hIl2Cpp + CLASS_1_D01B508815E742DB_METHOD_1_2CDC86570E88A55C_OFFSET))(a1);
	}
};
