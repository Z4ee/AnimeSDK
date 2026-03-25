#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9.h"
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

#define CLASS_1_840C00E1BC9B1846_METHOD_1_19894139BD3115FC_OFFSET UNITYSDK_OFFSET(0x170DD950)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_1ED82B12DD419A9E_OFFSET UNITYSDK_OFFSET(0x170DCD80)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_2C8059CC030D2065_OFFSET UNITYSDK_OFFSET(0x170DD9A0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_332DCF37A42E3152_OFFSET UNITYSDK_OFFSET(0x170DD8F0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x170DD5D0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_504F1A2F5A0739A0_OFFSET UNITYSDK_OFFSET(0x170DCE00)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_63ABC3141C1B9141_OFFSET UNITYSDK_OFFSET(0x170DCBB0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_8F2A57D3822D75F4_OFFSET UNITYSDK_OFFSET(0x170DD310)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_9C5185D7A8D7071E_OFFSET UNITYSDK_OFFSET(0x170DD030)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_A9AADBD5BB9D5BC8_OFFSET UNITYSDK_OFFSET(0x170DD280)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x170DD770)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x170DCFC0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_E38094C953AE259A_OFFSET UNITYSDK_OFFSET(0x170DD7D0)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x170DD590)
#define CLASS_1_840C00E1BC9B1846_METHOD_1_F92CE63838CA8BB3_OFFSET UNITYSDK_OFFSET(0x170DCD10)
#define CLASS_1_840C00E1BC9B1846__CCTOR_OFFSET UNITYSDK_OFFSET(0x170DDE20)

inline static constexpr unsigned int Class_1_840C00E1BC9B1846_TypeDefinitionIndex = 13862;

class Class_1_840C00E1BC9B1846 : public ::System::Object
{
public:
	static ::Class_2_238EB93629797DE5** StaticGet_Field_1_4()
	{
		return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x19260);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x19268);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x19270);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x19278);
	}
	static ::RPG::GameCore::TableLRUCache_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TableLRUCache_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x19280);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x19288);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_6()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x19290);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x7290);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_840C00E1BC9B1846_TypeDefinitionIndex)->GetStaticField(0x7291);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846__CCTOR_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37 Method_1_63ABC3141C1B9141()
	{
		return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_63ABC3141C1B9141_OFFSET))();
	}

	static ::System::Void Method_1_F92CE63838CA8BB3(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_F92CE63838CA8BB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>* Method_1_1ED82B12DD419A9E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_1ED82B12DD419A9E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::AdapterEnumerator_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*> Method_1_9C5185D7A8D7071E()
	{
		return ((::RPG::GameCore::AdapterEnumerator_2<::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_9C5185D7A8D7071E_OFFSET))();
	}

	static ::RPG::GameCore::SpecialAvatarRelicRow* Method_1_A9AADBD5BB9D5BC8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SpecialAvatarRelicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_A9AADBD5BB9D5BC8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_504F1A2F5A0739A0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_504F1A2F5A0739A0_OFFSET))();
	}

	static ::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_45AA2F5085C2C40D_OFFSET))();
	}

	static ::System::Void Method_1_E38094C953AE259A(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
	{
		return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_E38094C953AE259A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8F2A57D3822D75F4(::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9 a1, ::RPG::GameCore::SpecialAvatarRelicRow*& a2)
	{
		return ((::System::Boolean(*)(::Class_1_840C00E1BC9B1846_Struct_2_2CAFACC24B6FD90A_9, ::RPG::GameCore::SpecialAvatarRelicRow*&))((::PBYTE)hIl2Cpp + CLASS_1_840C00E1BC9B1846_METHOD_1_8F2A57D3822D75F4_OFFSET))(a1, a2);
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
};
