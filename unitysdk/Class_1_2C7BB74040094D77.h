#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BookSeriesWorldConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2C7BB74040094D77_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1C8C8B00)
#define CLASS_1_2C7BB74040094D77_METHOD_1_591DE24F34EA86B4_OFFSET UNITYSDK_OFFSET(0x1C8C8630)
#define CLASS_1_2C7BB74040094D77_METHOD_1_860B7293572A4027_OFFSET UNITYSDK_OFFSET(0x1C8C8320)
#define CLASS_1_2C7BB74040094D77_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8C8930)
#define CLASS_1_2C7BB74040094D77_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8C89C0)
#define CLASS_1_2C7BB74040094D77_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8C85D0)
#define CLASS_1_2C7BB74040094D77_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8C83A0)
#define CLASS_1_2C7BB74040094D77_METHOD_1_E78C4FB3759D1E82_OFFSET UNITYSDK_OFFSET(0x1C8C87A0)
#define CLASS_1_2C7BB74040094D77_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8C88F0)
#define CLASS_1_2C7BB74040094D77_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8C8A60)
#define CLASS_1_2C7BB74040094D77_METHOD_1_F717DCE04F618054_OFFSET UNITYSDK_OFFSET(0x1C8C8B50)
#define CLASS_1_2C7BB74040094D77__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8C8E70)

inline static constexpr unsigned int Class_1_2C7BB74040094D77_TypeDefinitionIndex = 12798;

class Class_1_2C7BB74040094D77 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C7BB74040094D77_TypeDefinitionIndex)->GetStaticField(0x54740);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C7BB74040094D77_TypeDefinitionIndex)->GetStaticField(0x54748);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C7BB74040094D77_TypeDefinitionIndex)->GetStaticField(0x54750);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C7BB74040094D77_TypeDefinitionIndex)->GetStaticField(0x11540);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C7BB74040094D77_TypeDefinitionIndex)->GetStaticField(0x11541);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>* Method_1_860B7293572A4027()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_860B7293572A4027_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*> Method_1_591DE24F34EA86B4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_591DE24F34EA86B4_OFFSET))();
	}

	static ::RPG::GameCore::BookSeriesWorldConfigRow* Method_1_E78C4FB3759D1E82(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BookSeriesWorldConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_E78C4FB3759D1E82_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_F717DCE04F618054(::RPG::GameCore::BookSeriesWorldConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BookSeriesWorldConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2C7BB74040094D77_METHOD_1_F717DCE04F618054_OFFSET))(a1);
	}
};
