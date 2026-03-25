#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class BattleEventDataRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C29474570D9C1049_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16B044D0)
#define CLASS_1_C29474570D9C1049_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x16B04470)
#define CLASS_1_C29474570D9C1049_METHOD_1_35E17849EDB30169_OFFSET UNITYSDK_OFFSET(0x16B03900)
#define CLASS_1_C29474570D9C1049_METHOD_1_410A9988BCD4765D_OFFSET UNITYSDK_OFFSET(0x16B03BB0)
#define CLASS_1_C29474570D9C1049_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x16B04150)
#define CLASS_1_C29474570D9C1049_METHOD_1_504F1A2F5A0739A0_OFFSET UNITYSDK_OFFSET(0x16B03980)
#define CLASS_1_C29474570D9C1049_METHOD_1_63ABC3141C1B9141_OFFSET UNITYSDK_OFFSET(0x16B03730)
#define CLASS_1_C29474570D9C1049_METHOD_1_81BD5314A0F4140F_OFFSET UNITYSDK_OFFSET(0x16B03E90)
#define CLASS_1_C29474570D9C1049_METHOD_1_84CB677139DAB3DB_OFFSET UNITYSDK_OFFSET(0x16B03E00)
#define CLASS_1_C29474570D9C1049_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x16B042F0)
#define CLASS_1_C29474570D9C1049_METHOD_1_B2BB2605B7D013CF_OFFSET UNITYSDK_OFFSET(0x16B04350)
#define CLASS_1_C29474570D9C1049_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x16B03B40)
#define CLASS_1_C29474570D9C1049_METHOD_1_D36FF6441522C242_OFFSET UNITYSDK_OFFSET(0x16B04520)
#define CLASS_1_C29474570D9C1049_METHOD_1_E6AC30B5B7884D12_OFFSET UNITYSDK_OFFSET(0x16B03890)
#define CLASS_1_C29474570D9C1049_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B04110)
#define CLASS_1_C29474570D9C1049__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B049A0)

inline static constexpr unsigned int Class_1_C29474570D9C1049_TypeDefinitionIndex = 11738;

class Class_1_C29474570D9C1049 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0x27EB0);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0x27EB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0x27EC0);
	}
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0x27EC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0x27ED0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0x27ED8);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0x27EE0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0xD190);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C29474570D9C1049_TypeDefinitionIndex)->GetStaticField(0xD191);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_63ABC3141C1B9141()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_63ABC3141C1B9141_OFFSET))();
	}

	static ::System::Void Method_1_E6AC30B5B7884D12(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_E6AC30B5B7884D12_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>* Method_1_35E17849EDB30169()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_35E17849EDB30169_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*> Method_1_410A9988BCD4765D()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_410A9988BCD4765D_OFFSET))();
	}

	static ::RPG::GameCore::BattleEventDataRow* Method_1_84CB677139DAB3DB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattleEventDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_84CB677139DAB3DB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_504F1A2F5A0739A0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_504F1A2F5A0739A0_OFFSET))();
	}

	static ::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_45AA2F5085C2C40D_OFFSET))();
	}

	static ::System::Void Method_1_B2BB2605B7D013CF(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::BattleEventDataRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::BattleEventDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_B2BB2605B7D013CF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_81BD5314A0F4140F(::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A a1, ::RPG::GameCore::BattleEventDataRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_C29474570D9C1049_Struct_2_2CAFACC24B6FD90A, ::RPG::GameCore::BattleEventDataRow*&))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_81BD5314A0F4140F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC983BB33E28F43E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_AC983BB33E28F43E_OFFSET))(a1);
	}

	static ::System::Void Method_1_332DCF37A42E3152(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_332DCF37A42E3152_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D36FF6441522C242(::RPG::GameCore::BattleEventDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleEventDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_C29474570D9C1049_METHOD_1_D36FF6441522C242_OFFSET))(a1);
	}
};
