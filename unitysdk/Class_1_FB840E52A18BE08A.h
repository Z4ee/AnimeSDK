#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PerformanceReplayExcludeRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FB840E52A18BE08A_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x189641A0)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_504F1A2F5A0739A0_OFFSET UNITYSDK_OFFSET(0x18963560)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_63ABC3141C1B9141_OFFSET UNITYSDK_OFFSET(0x18963310)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_68B1330FD7D48332_OFFSET UNITYSDK_OFFSET(0x189639E0)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_6B6A8D982DE37681_OFFSET UNITYSDK_OFFSET(0x18963A90)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_6F570C5D1BE65752_OFFSET UNITYSDK_OFFSET(0x18963790)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_90D2A480F48CF56F_OFFSET UNITYSDK_OFFSET(0x18964200)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_959B6E58D65BB39F_OFFSET UNITYSDK_OFFSET(0x18963470)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x18963FA0)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_C21FD44CDD91C322_OFFSET UNITYSDK_OFFSET(0x189634E0)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_C68389A611D970F0_OFFSET UNITYSDK_OFFSET(0x18964000)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x18963E00)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x18963720)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_E5BDBB0EBC3513F4_OFFSET UNITYSDK_OFFSET(0x18964250)
#define CLASS_1_FB840E52A18BE08A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18963DC0)
#define CLASS_1_FB840E52A18BE08A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18964720)

inline static constexpr unsigned int Class_1_FB840E52A18BE08A_TypeDefinitionIndex = 13605;

class Class_1_FB840E52A18BE08A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x20720);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x20728);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x20730);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x20738);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x20740);
	}
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x20748);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x20750);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x7E10);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB840E52A18BE08A_TypeDefinitionIndex)->GetStaticField(0x7E11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_63ABC3141C1B9141()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_63ABC3141C1B9141_OFFSET))();
	}

	static ::System::Void Method_1_959B6E58D65BB39F(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_959B6E58D65BB39F_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>* Method_1_C21FD44CDD91C322()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_C21FD44CDD91C322_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*> Method_1_6F570C5D1BE65752()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_6F570C5D1BE65752_OFFSET))();
	}

	static ::RPG::GameCore::PerformanceReplayExcludeRow* Method_1_68B1330FD7D48332(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::PerformanceReplayExcludeRow*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_68B1330FD7D48332_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_504F1A2F5A0739A0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_504F1A2F5A0739A0_OFFSET))();
	}

	static ::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_CD8EB704BDED69B6_OFFSET))();
	}

	static ::System::Void Method_1_C68389A611D970F0(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceReplayExcludeRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceReplayExcludeRow*))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_C68389A611D970F0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6B6A8D982DE37681(::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2 a1, ::RPG::GameCore::PerformanceReplayExcludeRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2, ::RPG::GameCore::PerformanceReplayExcludeRow*&))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_6B6A8D982DE37681_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC983BB33E28F43E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_AC983BB33E28F43E_OFFSET))(a1);
	}

	static ::System::Void Method_1_332DCF37A42E3152(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_332DCF37A42E3152_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_90D2A480F48CF56F(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_90D2A480F48CF56F_OFFSET))(a1);
	}

	static ::System::Void Method_1_E5BDBB0EBC3513F4(::RPG::GameCore::PerformanceReplayExcludeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PerformanceReplayExcludeRow*))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_METHOD_1_E5BDBB0EBC3513F4_OFFSET))(a1);
	}
};
