#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_840C00E1BC9B1846_METHOD_1_19894139BD3115FC_OFFSET UNITYSDK_OFFSET(0x1B82A790)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_1ED82B12DD419A9E_OFFSET UNITYSDK_OFFSET(0x1B306330)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_2C8059CC030D2065_OFFSET UNITYSDK_OFFSET(0x1B82A7E0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x1B82A730)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0x1B82A020)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_8F2A57D3822D75F4_OFFSET UNITYSDK_OFFSET(0x1B82A4C0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_9C5185D7A8D7071E_OFFSET UNITYSDK_OFFSET(0x1B306420)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_A9AADBD5BB9D5BC8_OFFSET UNITYSDK_OFFSET(0x1B306670)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x1B82A360)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1B82A1D0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1B3063B0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_E01F92256A35B76C_OFFSET UNITYSDK_OFFSET(0x1B82A3C0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B829FE0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_F92CE63838CA8BB3_OFFSET UNITYSDK_OFFSET(0x1B3062C0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_F9F10FCFCC9487E7_OFFSET UNITYSDK_OFFSET(0x1B306210)
#define CLASS_1_840C00E1BC9B1846__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B306700)

inline static constexpr unsigned int Class_1_840C00E1BC9B1846_TypeDefinitionIndex = 14534;

class Class_1_840C00E1BC9B1846 : public ::System::Object
{
public:
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_0()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x659B0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x659B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x659C0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x659C8);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>** StaticGet_Field_1_4()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x659D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x659D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x659E0);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x138C0);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x138C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_7D008406A3311600()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_7D008406A3311600_OFFSET))();
	}

	static ::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_B43C848B078B3C34_OFFSET))();
	}

	static ::System::Void Method_1_E01F92256A35B76C(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_E01F92256A35B76C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8F2A57D3822D75F4(::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11 a1, ::RPG::GameCore::SpecialAvatarRelicRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*&))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_8F2A57D3822D75F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC983BB33E28F43E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_AC983BB33E28F43E_OFFSET))(a1);
	}

	static ::System::Void Method_1_332DCF37A42E3152(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_332DCF37A42E3152_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_19894139BD3115FC(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_19894139BD3115FC_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C8059CC030D2065(::RPG::GameCore::SpecialAvatarRelicRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_2C8059CC030D2065_OFFSET))(a1);
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_F9F10FCFCC9487E7()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_F9F10FCFCC9487E7_OFFSET))();
	}

	static ::System::Void Method_1_F92CE63838CA8BB3(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_F92CE63838CA8BB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>* Method_1_1ED82B12DD419A9E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_1ED82B12DD419A9E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*> Method_1_9C5185D7A8D7071E()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_11, ::RPG::GameCore::SpecialAvatarRelicRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_9C5185D7A8D7071E_OFFSET))();
	}

	static ::RPG::GameCore::SpecialAvatarRelicRow* Method_1_A9AADBD5BB9D5BC8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SpecialAvatarRelicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_A9AADBD5BB9D5BC8_OFFSET))(a1);
	}
};
