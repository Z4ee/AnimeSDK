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

#define CLASS_1_099EC65E81A9DDBC_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D6C4BC0)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_129FC439E5C0764A_OFFSET UNITYSDK_OFFSET(0x1D200DD0)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_4D3B0C0436630CD3_OFFSET UNITYSDK_OFFSET(0x1D2010E0)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_6BCA7364AC4369EF_OFFSET UNITYSDK_OFFSET(0x1D201250)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D201420)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D2014B0)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_B985BC64423D15EA_OFFSET UNITYSDK_OFFSET(0x1D6C4C10)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D201080)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D200E50)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D2013E0)
#define CLASS_1_099EC65E81A9DDBC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D201550)
#define CLASS_1_099EC65E81A9DDBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4F80)

inline static constexpr unsigned int Class_1_099EC65E81A9DDBC_TypeDefinitionIndex = 11078;

class Class_1_099EC65E81A9DDBC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0x3D010);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0x3D018);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0x3D020);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0xF860);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_099EC65E81A9DDBC_TypeDefinitionIndex)->GetStaticField(0xF861);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*> Method_1_4D3B0C0436630CD3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_4D3B0C0436630CD3_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingCampRow* Method_1_6BCA7364AC4369EF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingCampRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_6BCA7364AC4369EF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_099EC65E81A9DDBC_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
