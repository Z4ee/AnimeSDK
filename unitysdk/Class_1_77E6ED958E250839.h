#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCSubStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77E6ED958E250839_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B5E2280)
#define CLASS_1_77E6ED958E250839_METHOD_1_0CD9426FA399FA92_OFFSET UNITYSDK_OFFSET(0x1B5E1D70)
#define CLASS_1_77E6ED958E250839_METHOD_1_5DC2DFE3F249866B_OFFSET UNITYSDK_OFFSET(0x1B5E22D0)
#define CLASS_1_77E6ED958E250839_METHOD_1_80F6CCF6B9627805_OFFSET UNITYSDK_OFFSET(0x1B5E1A60)
#define CLASS_1_77E6ED958E250839_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B5E20B0)
#define CLASS_1_77E6ED958E250839_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5E2140)
#define CLASS_1_77E6ED958E250839_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B5E1D10)
#define CLASS_1_77E6ED958E250839_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B5E1AE0)
#define CLASS_1_77E6ED958E250839_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5E2070)
#define CLASS_1_77E6ED958E250839_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B5E21E0)
#define CLASS_1_77E6ED958E250839_METHOD_1_FE5A7DF52BDD1570_OFFSET UNITYSDK_OFFSET(0x1B5E1EE0)
#define CLASS_1_77E6ED958E250839__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5E2640)

inline static constexpr unsigned int Class_1_77E6ED958E250839_TypeDefinitionIndex = 14215;

class Class_1_77E6ED958E250839 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E6ED958E250839_TypeDefinitionIndex)->GetStaticField(0x44520);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E6ED958E250839_TypeDefinitionIndex)->GetStaticField(0x44528);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E6ED958E250839_TypeDefinitionIndex)->GetStaticField(0x44530);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E6ED958E250839_TypeDefinitionIndex)->GetStaticField(0xBBB0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E6ED958E250839_TypeDefinitionIndex)->GetStaticField(0xBBB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>* Method_1_80F6CCF6B9627805()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_80F6CCF6B9627805_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*> Method_1_0CD9426FA399FA92()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_0CD9426FA399FA92_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCSubStoryRow* Method_1_FE5A7DF52BDD1570(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCSubStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_FE5A7DF52BDD1570_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5DC2DFE3F249866B(::RPG::GameCore::RogueDLCSubStoryRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCSubStoryRow*))((::PBYTE)hIl2Cpp + CLASS_1_77E6ED958E250839_METHOD_1_5DC2DFE3F249866B_OFFSET))(a1);
	}
};
