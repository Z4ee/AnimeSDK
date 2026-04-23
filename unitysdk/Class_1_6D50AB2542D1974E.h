#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTutorialTaskRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6D50AB2542D1974E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x183ADBE0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_2DBF9CA965E5ED24_OFFSET UNITYSDK_OFFSET(0x183AD7F0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183ADA00)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183AD2D0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_983547140E11BB86_OFFSET UNITYSDK_OFFSET(0x183AD730)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x183ADAA0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x183AD520)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_D678CDB0F7E74A36_OFFSET UNITYSDK_OFFSET(0x183AD250)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_F0D7750D9003211A_OFFSET UNITYSDK_OFFSET(0x183ADC30)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183AD9C0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x183ADB40)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_FB062FC66B2211BB_OFFSET UNITYSDK_OFFSET(0x183AD580)
#define CLASS_1_6D50AB2542D1974E__CCTOR_OFFSET UNITYSDK_OFFSET(0x183ADF90)

inline static constexpr unsigned int Class_1_6D50AB2542D1974E_TypeDefinitionIndex = 12922;

class Class_1_6D50AB2542D1974E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x21D10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x21D18);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x21D20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x8680);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x8681);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>* Method_1_D678CDB0F7E74A36()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_D678CDB0F7E74A36_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*> Method_1_FB062FC66B2211BB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_FB062FC66B2211BB_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>, ::RPG::GameCore::GridFightTutorialTaskRow*> Method_1_983547140E11BB86()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>, ::RPG::GameCore::GridFightTutorialTaskRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_983547140E11BB86_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTutorialTaskRow* Method_1_2DBF9CA965E5ED24(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightTutorialTaskRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_2DBF9CA965E5ED24_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F0D7750D9003211A(::RPG::GameCore::GridFightTutorialTaskRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialTaskRow*))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_F0D7750D9003211A_OFFSET))(a1);
	}
};
