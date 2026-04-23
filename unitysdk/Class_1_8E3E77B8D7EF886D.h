#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesGachaBasicRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18397D10)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_2DD38782AF0C6CFD_OFFSET UNITYSDK_OFFSET(0x183977F0)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18397B30)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18397540)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_86F5AE3CFAADB9CE_OFFSET UNITYSDK_OFFSET(0x18397D60)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_8A41FC1A0E2969C9_OFFSET UNITYSDK_OFFSET(0x183974C0)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18397BD0)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18397790)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_EB3F668C0396747A_OFFSET UNITYSDK_OFFSET(0x18397970)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18397AF0)
#define CLASS_1_8E3E77B8D7EF886D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18397C70)
#define CLASS_1_8E3E77B8D7EF886D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18398070)

inline static constexpr unsigned int Class_1_8E3E77B8D7EF886D_TypeDefinitionIndex = 11546;

class Class_1_8E3E77B8D7EF886D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E3E77B8D7EF886D_TypeDefinitionIndex)->GetStaticField(0x21390);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E3E77B8D7EF886D_TypeDefinitionIndex)->GetStaticField(0x21398);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E3E77B8D7EF886D_TypeDefinitionIndex)->GetStaticField(0x213A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E3E77B8D7EF886D_TypeDefinitionIndex)->GetStaticField(0x8290);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E3E77B8D7EF886D_TypeDefinitionIndex)->GetStaticField(0x8291);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>* Method_1_8A41FC1A0E2969C9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_8A41FC1A0E2969C9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*> Method_1_2DD38782AF0C6CFD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_2DD38782AF0C6CFD_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesGachaBasicRow* Method_1_EB3F668C0396747A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesGachaBasicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_EB3F668C0396747A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_86F5AE3CFAADB9CE(::RPG::GameCore::PlanetFesGachaBasicRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesGachaBasicRow*))((::PBYTE)hIl2Cpp + CLASS_1_8E3E77B8D7EF886D_METHOD_1_86F5AE3CFAADB9CE_OFFSET))(a1);
	}
};
