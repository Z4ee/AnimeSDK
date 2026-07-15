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

#define CLASS_1_8B64891F4427BB61_METHOD_1_0AC45234854EA3CC_OFFSET UNITYSDK_OFFSET(0x1ACE20E0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1ACE2700)
#define CLASS_1_8B64891F4427BB61_METHOD_1_122AFF3AF77F05EF_OFFSET UNITYSDK_OFFSET(0x1ACE2750)
#define CLASS_1_8B64891F4427BB61_METHOD_1_28A236845252715B_OFFSET UNITYSDK_OFFSET(0x1ACE1AF0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x1ACE26A0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_4DC78AB860E7A85C_OFFSET UNITYSDK_OFFSET(0x1ACE1B60)
#define CLASS_1_8B64891F4427BB61_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1ACE2BD0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_70C60064131DD9A1_OFFSET UNITYSDK_OFFSET(0x1ACE2C20)
#define CLASS_1_8B64891F4427BB61_METHOD_1_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0x1ACE1BE0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1ACE2C60)
#define CLASS_1_8B64891F4427BB61_METHOD_1_A09A55886BD7EC21_OFFSET UNITYSDK_OFFSET(0x1ACE3740)
#define CLASS_1_8B64891F4427BB61_METHOD_1_A0B0901AAC95EBF8_OFFSET UNITYSDK_OFFSET(0x1ACE1E00)
#define CLASS_1_8B64891F4427BB61_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x1ACE2530)
#define CLASS_1_8B64891F4427BB61_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1ACE23A0)
#define CLASS_1_8B64891F4427BB61_METHOD_1_C0D167048C142276_OFFSET UNITYSDK_OFFSET(0x1ACE2050)
#define CLASS_1_8B64891F4427BB61_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1ACE1D90)
#define CLASS_1_8B64891F4427BB61_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ACE2360)
#define CLASS_1_8B64891F4427BB61_METHOD_1_F8F99501505A8B60_OFFSET UNITYSDK_OFFSET(0x1ACE2590)
#define CLASS_1_8B64891F4427BB61_METHOD_1_F9F10FCFCC9487E7_OFFSET UNITYSDK_OFFSET(0x1ACE1A40)
#define CLASS_1_8B64891F4427BB61_METHOD_1_FCD576F52A8A23E7_OFFSET UNITYSDK_OFFSET(0x1ACE3890)
#define CLASS_1_8B64891F4427BB61__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACE3C20)

inline static constexpr unsigned int Class_1_8B64891F4427BB61_TypeDefinitionIndex = 12802;

class Class_1_8B64891F4427BB61 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DC0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DC8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DD8);
	}
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DE8);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DF0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36DF8);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>** StaticGet_Field_1_8()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_8B64891F4427BB61_Struct_2_2CAFACC24B6FD90A_2, ::RPG::GameCore::FreeStyleMotionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36E00);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x36E08);
	}
	static ::System::Boolean* StaticGet_Field_1_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x9270);
	}
	static ::System::Boolean* StaticGet_Field_1_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B64891F4427BB61_TypeDefinitionIndex)->GetStaticField(0x9271);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_F9F10FCFCC9487E7()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_F9F10FCFCC9487E7_OFFSET))();
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

	static ::System::Void Method_1_7D008406A3311600()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_7D008406A3311600_OFFSET))();
	}

	static ::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_B43C848B078B3C34_OFFSET))();
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

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_A09A55886BD7EC21(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_A09A55886BD7EC21_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_FCD576F52A8A23E7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_FCD576F52A8A23E7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B64891F4427BB61_METHOD_1_8F7825DAFFB9B517_OFFSET))();
	}
};
