#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class TextmapMTRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CFE887C15FBE285A_METHOD_1_19894139BD3115FC_OFFSET UNITYSDK_OFFSET(0x18DA3E90)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_4853DB67934C7921_OFFSET UNITYSDK_OFFSET(0x18DA33C0)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_5D8BD287741F7CAC_OFFSET UNITYSDK_OFFSET(0x18DA37C0)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_63ABC3141C1B9141_OFFSET UNITYSDK_OFFSET(0x18DA31F0)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_75F647961E325E6E_OFFSET UNITYSDK_OFFSET(0x18DA3720)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_7AAC4AC691E43DDA_OFFSET UNITYSDK_OFFSET(0x18DA3EE0)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_7B543B6CBEBB3A05_OFFSET UNITYSDK_OFFSET(0x18DA3C60)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18DA3450)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_9A1CCA44D4E87880_OFFSET UNITYSDK_OFFSET(0x18DA4440)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_AB33392F4F0A75B2_OFFSET UNITYSDK_OFFSET(0x18DA3D80)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x18DA3AC0)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x18DA3460)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_D4B593668BA43B89_OFFSET UNITYSDK_OFFSET(0x18DA3E00)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_E6A931C76D790616_OFFSET UNITYSDK_OFFSET(0x18DA3350)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_EA64278D1C3B0FE6_OFFSET UNITYSDK_OFFSET(0x18DA34D0)
#define CLASS_1_CFE887C15FBE285A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18DA3A80)
#define CLASS_1_CFE887C15FBE285A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DA44B0)

inline static constexpr unsigned int Class_1_CFE887C15FBE285A_TypeDefinitionIndex = 14494;

class Class_1_CFE887C15FBE285A : public ::System::Object
{
public:
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27650);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27658);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27660);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27668);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27670);
	}
	static ::System::Func_1<::System::String*>** StaticGet_Field_1_9()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27678);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27680);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0x27688);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0xA6E0);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE887C15FBE285A_TypeDefinitionIndex)->GetStaticField(0xA6E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_63ABC3141C1B9141()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_63ABC3141C1B9141_OFFSET))();
	}

	static ::System::Void Method_1_E6A931C76D790616(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_E6A931C76D790616_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>* Method_1_4853DB67934C7921()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_4853DB67934C7921_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*> Method_1_EA64278D1C3B0FE6()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_EA64278D1C3B0FE6_OFFSET))();
	}

	static ::RPG::GameCore::TextmapMTRow* Method_1_75F647961E325E6E(::RPG::Client::TextID a1)
	{
		return ((::RPG::GameCore::TextmapMTRow*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_75F647961E325E6E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_CD8EB704BDED69B6_OFFSET))();
	}

	static ::System::Void Method_1_7B543B6CBEBB3A05(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::TextmapMTRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::TextmapMTRow*))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_7B543B6CBEBB3A05_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5D8BD287741F7CAC(::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C a1, ::RPG::GameCore::TextmapMTRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_CFE887C15FBE285A_Struct_2_50C47286F23AF24C, ::RPG::GameCore::TextmapMTRow*&))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_5D8BD287741F7CAC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB33392F4F0A75B2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_AB33392F4F0A75B2_OFFSET))(a1);
	}

	static ::System::Void Method_1_D4B593668BA43B89(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_D4B593668BA43B89_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_19894139BD3115FC(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_19894139BD3115FC_OFFSET))(a1);
	}

	static ::System::Void Method_1_7AAC4AC691E43DDA(::RPG::GameCore::TextmapMTRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TextmapMTRow*))((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_7AAC4AC691E43DDA_OFFSET))(a1);
	}

	static ::System::String* Method_1_9A1CCA44D4E87880()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_9A1CCA44D4E87880_OFFSET))();
	}

	static ::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE887C15FBE285A_METHOD_1_832295EC279E5994_OFFSET))();
	}
};
