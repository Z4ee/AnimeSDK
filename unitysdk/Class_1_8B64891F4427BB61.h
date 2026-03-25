#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class FreeStyleMotionConfigRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B64891F4427BB61_METHOD_1_0AC45234854EA3CC_OFFSET UNITYSDK_OFFSET(0x1791EB40)
#define CLASS_1_8B64891F4427BB61_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1791F190)
#define CLASS_1_8B64891F4427BB61_METHOD_1_122AFF3AF77F05EF_OFFSET UNITYSDK_OFFSET(0x1791F1E0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_28A236845252715B_OFFSET UNITYSDK_OFFSET(0x1791E540)
#define CLASS_1_8B64891F4427BB61_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x1791F130)
#define CLASS_1_8B64891F4427BB61_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1791EE10)
#define CLASS_1_8B64891F4427BB61_METHOD_1_4DC78AB860E7A85C_OFFSET UNITYSDK_OFFSET(0x1791E5B0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_504F1A2F5A0739A0_OFFSET UNITYSDK_OFFSET(0x1791E630)
#define CLASS_1_8B64891F4427BB61_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1791F660)
#define CLASS_1_8B64891F4427BB61_METHOD_1_63ABC3141C1B9141_OFFSET UNITYSDK_OFFSET(0x1791E3E0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_70C60064131DD9A1_OFFSET UNITYSDK_OFFSET(0x1791F6A0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1791F6E0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_A0B0901AAC95EBF8_OFFSET UNITYSDK_OFFSET(0x1791E860)
#define CLASS_1_8B64891F4427BB61_METHOD_1_A329F2C653CDA5CD_OFFSET UNITYSDK_OFFSET(0x17920090)
#define CLASS_1_8B64891F4427BB61_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x1791EFB0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_C0D167048C142276_OFFSET UNITYSDK_OFFSET(0x1791EAB0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1791E7F0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1791EDD0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_F8F99501505A8B60_OFFSET UNITYSDK_OFFSET(0x1791F010)
#define CLASS_1_8B64891F4427BB61_METHOD_1_FC4A6D7F8EC2FFF2_OFFSET UNITYSDK_OFFSET(0x1791FF70)
#define CLASS_1_8B64891F4427BB61__CCTOR_OFFSET UNITYSDK_OFFSET(0x17920310)

inline static constexpr unsigned int Class_1_8B64891F4427BB61_TypeDefinitionIndex = 12141;

class Class_1_8B64891F4427BB61 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x22380);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x22388);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x22390);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x22398);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x223A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x223A8);
	}
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x223B0);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x223B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x223C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x223C8);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x8EC0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x8EC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_63ABC3141C1B9141()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_63ABC3141C1B9141_OFFSET))();
	}

	static ::System::Void Method_1_28A236845252715B(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_28A236845252715B_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>* Method_1_4DC78AB860E7A85C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_4DC78AB860E7A85C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*> Method_1_A0B0901AAC95EBF8()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_A0B0901AAC95EBF8_OFFSET))();
	}

	static ::RPG::GameCore::FreeStyleMotionConfigRow* Method_1_C0D167048C142276(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FreeStyleMotionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_C0D167048C142276_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_504F1A2F5A0739A0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_504F1A2F5A0739A0_OFFSET))();
	}

	static ::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_45AA2F5085C2C40D_OFFSET))();
	}

	static ::System::Void Method_1_F8F99501505A8B60(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::FreeStyleMotionConfigRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::FreeStyleMotionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_F8F99501505A8B60_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0AC45234854EA3CC(::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2 a1, ::RPG::GameCore::FreeStyleMotionConfigRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*&))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_0AC45234854EA3CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC983BB33E28F43E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_AC983BB33E28F43E_OFFSET))(a1);
	}

	static ::System::Void Method_1_332DCF37A42E3152(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_332DCF37A42E3152_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_122AFF3AF77F05EF(::RPG::GameCore::FreeStyleMotionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FreeStyleMotionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_122AFF3AF77F05EF_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_70C60064131DD9A1()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_70C60064131DD9A1_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_FC4A6D7F8EC2FFF2(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_FC4A6D7F8EC2FFF2_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_A329F2C653CDA5CD(::System::String* a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_A329F2C653CDA5CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_8F7825DAFFB9B517_OFFSET))();
	}
};
