#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RndGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RndOptionGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x197A20C0)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_22F975DB0FB4749F_OFFSET UNITYSDK_OFFSET(0x197A1D20)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_79185EBC463B725D_OFFSET UNITYSDK_OFFSET(0x197A18A0)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x197A1EF0)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x197A1F80)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_B6F6B4A76D80C943_OFFSET UNITYSDK_OFFSET(0x197A2110)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x197A1B50)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x197A1920)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_EF5D40C2774C098E_OFFSET UNITYSDK_OFFSET(0x197A1BB0)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x197A1EB0)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x197A2020)
#define CLASS_1_5A3DDFE7711EBD81__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A2480)

inline static constexpr unsigned int Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex = 13930;

class Class_1_5A3DDFE7711EBD81 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x463D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x463D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x463E0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0xCB30);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0xCB31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>* Method_1_79185EBC463B725D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_79185EBC463B725D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*> Method_1_EF5D40C2774C098E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_EF5D40C2774C098E_OFFSET))();
	}

	static ::RPG::GameCore::RndOptionGroupRow* Method_1_22F975DB0FB4749F(::RPG::GameCore::RndGroupType a1)
	{
		return ((::RPG::GameCore::RndOptionGroupRow*(*)(::RPG::GameCore::RndGroupType))((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_22F975DB0FB4749F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B6F6B4A76D80C943(::RPG::GameCore::RndOptionGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RndOptionGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_5A3DDFE7711EBD81_METHOD_1_B6F6B4A76D80C943_OFFSET))(a1);
	}
};
