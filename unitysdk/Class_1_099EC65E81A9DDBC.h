#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingCampRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_099EC65E81A9DDBC_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16C0AC40)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_129FC439E5C0764A_OFFSET UNITYSDK_OFFSET(0x16C0A370)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C0AA60)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_5083320BCBD9103F_OFFSET UNITYSDK_OFFSET(0x16C0A6A0)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C0A3F0)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C0AB00)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_B985BC64423D15EA_OFFSET UNITYSDK_OFFSET(0x16C0AC90)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_CADC9AD54CC452F4_OFFSET UNITYSDK_OFFSET(0x16C0A850)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C0A640)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C0AA20)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C0ABA0)
#define CLASS_1_099EC65E81A9DDBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C0AFF0)

inline static constexpr unsigned int Class_1_099EC65E81A9DDBC_TypeDefinitionIndex = 10390;

class Class_1_099EC65E81A9DDBC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0x29A40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0x29A48);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0x29A50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0xDB90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0xDB91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>* Method_1_129FC439E5C0764A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_129FC439E5C0764A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*> Method_1_5083320BCBD9103F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_5083320BCBD9103F_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingCampRow* Method_1_CADC9AD54CC452F4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingCampRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_CADC9AD54CC452F4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B985BC64423D15EA(::RPG::GameCore::ChenLingCampRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingCampRow*))((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_B985BC64423D15EA_OFFSET))(a1);
	}
};
