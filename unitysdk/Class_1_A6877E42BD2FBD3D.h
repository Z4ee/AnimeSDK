#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotWikiDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16E309B0)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_2DAC63F69EE194A7_OFFSET UNITYSDK_OFFSET(0x16E30A00)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16E307D0)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_4AFB8560047F8ACA_OFFSET UNITYSDK_OFFSET(0x16E30410)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16E30160)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_8CF30E78EC5B57F3_OFFSET UNITYSDK_OFFSET(0x16E305C0)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_96C7C7D2ADA305F1_OFFSET UNITYSDK_OFFSET(0x16E300E0)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16E30870)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16E303B0)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16E30790)
#define CLASS_1_A6877E42BD2FBD3D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16E30910)
#define CLASS_1_A6877E42BD2FBD3D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E30D60)

inline static constexpr unsigned int Class_1_A6877E42BD2FBD3D_TypeDefinitionIndex = 13983;

class Class_1_A6877E42BD2FBD3D : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6877E42BD2FBD3D_TypeDefinitionIndex)->GetStaticField(0x19BA0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6877E42BD2FBD3D_TypeDefinitionIndex)->GetStaticField(0x19BA8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6877E42BD2FBD3D_TypeDefinitionIndex)->GetStaticField(0x19BB0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6877E42BD2FBD3D_TypeDefinitionIndex)->GetStaticField(0x74D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6877E42BD2FBD3D_TypeDefinitionIndex)->GetStaticField(0x74D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>* Method_1_96C7C7D2ADA305F1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_96C7C7D2ADA305F1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*> Method_1_4AFB8560047F8ACA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_4AFB8560047F8ACA_OFFSET))();
	}

	static ::RPG::GameCore::TarotWikiDataRow* Method_1_8CF30E78EC5B57F3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TarotWikiDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_8CF30E78EC5B57F3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2DAC63F69EE194A7(::RPG::GameCore::TarotWikiDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TarotWikiDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_A6877E42BD2FBD3D_METHOD_1_2DAC63F69EE194A7_OFFSET))(a1);
	}
};
