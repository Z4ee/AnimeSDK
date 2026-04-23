#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PerformanceSkipCharacterRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_19894139BD3115FC_OFFSET UNITYSDK_OFFSET(0x183B9A30)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x183B99D0)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_4C4E3EC00CF31F97_OFFSET UNITYSDK_OFFSET(0x183B8FF0)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_504F1A2F5A0739A0_OFFSET UNITYSDK_OFFSET(0x183B8DC0)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_63ABC3141C1B9141_OFFSET UNITYSDK_OFFSET(0x183B8B70)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_783BD6D3036A5E2C_OFFSET UNITYSDK_OFFSET(0x183B9A80)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_8973EAFBC6F738B5_OFFSET UNITYSDK_OFFSET(0x183B9830)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_8D733516603252CF_OFFSET UNITYSDK_OFFSET(0x183B8D40)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_90D48BAFDDABEC22_OFFSET UNITYSDK_OFFSET(0x183B8CD0)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x183B97D0)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_BB851D1FC4938AB8_OFFSET UNITYSDK_OFFSET(0x183B9240)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_C39BD676AFA11284_OFFSET UNITYSDK_OFFSET(0x183B92E0)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x183B9630)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x183B8F80)
#define CLASS_1_A3136BDA3EA6DDB3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183B95F0)
#define CLASS_1_A3136BDA3EA6DDB3__CCTOR_OFFSET UNITYSDK_OFFSET(0x183B9F30)

inline static constexpr unsigned int Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex = 13617;

class Class_1_A3136BDA3EA6DDB3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x22B90);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x22B98);
	}
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x22BA0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x22BA8);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x22BB0);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x22BB8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x22BC0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x8C80);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3136BDA3EA6DDB3_TypeDefinitionIndex)->GetStaticField(0x8C81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_63ABC3141C1B9141()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_63ABC3141C1B9141_OFFSET))();
	}

	static ::System::Void Method_1_90D48BAFDDABEC22(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_90D48BAFDDABEC22_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>* Method_1_8D733516603252CF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_8D733516603252CF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*> Method_1_4C4E3EC00CF31F97()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_4C4E3EC00CF31F97_OFFSET))();
	}

	static ::RPG::GameCore::PerformanceSkipCharacterRow* Method_1_BB851D1FC4938AB8(::System::String* a1)
	{
		return ((::RPG::GameCore::PerformanceSkipCharacterRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_BB851D1FC4938AB8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_504F1A2F5A0739A0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_504F1A2F5A0739A0_OFFSET))();
	}

	static ::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_CD8EB704BDED69B6_OFFSET))();
	}

	static ::System::Void Method_1_8973EAFBC6F738B5(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceSkipCharacterRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceSkipCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_8973EAFBC6F738B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C39BD676AFA11284(::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78 a1, ::RPG::GameCore::PerformanceSkipCharacterRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_A3136BDA3EA6DDB3_Struct_2_EEBA4D32658E9B78, ::RPG::GameCore::PerformanceSkipCharacterRow*&))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_C39BD676AFA11284_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC983BB33E28F43E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_AC983BB33E28F43E_OFFSET))(a1);
	}

	static ::System::Void Method_1_332DCF37A42E3152(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_332DCF37A42E3152_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_19894139BD3115FC(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_19894139BD3115FC_OFFSET))(a1);
	}

	static ::System::Void Method_1_783BD6D3036A5E2C(::RPG::GameCore::PerformanceSkipCharacterRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PerformanceSkipCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_A3136BDA3EA6DDB3_METHOD_1_783BD6D3036A5E2C_OFFSET))(a1);
	}
};
