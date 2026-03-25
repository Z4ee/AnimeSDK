#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournKeywordRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F7090C5F35A1CE56_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16DFCE40)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DFCC60)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_51C677E41ECDF775_OFFSET UNITYSDK_OFFSET(0x16DFCAA0)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DFC580)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_7EE01A6939F46D06_OFFSET UNITYSDK_OFFSET(0x16DFC9E0)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_A85D8F0218808B6B_OFFSET UNITYSDK_OFFSET(0x16DFC830)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DFCD00)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_B13477BF2BAA91EB_OFFSET UNITYSDK_OFFSET(0x16DFCE90)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DFC7D0)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_E292D8CD8B33F336_OFFSET UNITYSDK_OFFSET(0x16DFC500)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DFCC20)
#define CLASS_1_F7090C5F35A1CE56_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DFCDA0)
#define CLASS_1_F7090C5F35A1CE56__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DFD1A0)

inline static constexpr unsigned int Class_1_F7090C5F35A1CE56_TypeDefinitionIndex = 13749;

class Class_1_F7090C5F35A1CE56 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F7090C5F35A1CE56_TypeDefinitionIndex)->GetStaticField(0x18260);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F7090C5F35A1CE56_TypeDefinitionIndex)->GetStaticField(0x18268);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F7090C5F35A1CE56_TypeDefinitionIndex)->GetStaticField(0x18270);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F7090C5F35A1CE56_TypeDefinitionIndex)->GetStaticField(0x6E00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F7090C5F35A1CE56_TypeDefinitionIndex)->GetStaticField(0x6E01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>* Method_1_E292D8CD8B33F336()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_E292D8CD8B33F336_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*> Method_1_A85D8F0218808B6B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_A85D8F0218808B6B_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>, ::RPG::GameCore::RogueTournKeywordRow*> Method_1_7EE01A6939F46D06()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>, ::RPG::GameCore::RogueTournKeywordRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_7EE01A6939F46D06_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournKeywordRow* Method_1_51C677E41ECDF775(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournKeywordRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_51C677E41ECDF775_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B13477BF2BAA91EB(::RPG::GameCore::RogueTournKeywordRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournKeywordRow*))((::PBYTE)hIl2Cpp + CLASS_1_F7090C5F35A1CE56_METHOD_1_B13477BF2BAA91EB_OFFSET))(a1);
	}
};
