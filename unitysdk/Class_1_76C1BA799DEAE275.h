#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MonopolyCellType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyContentDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_76C1BA799DEAE275_METHOD_1_0848E0E8B6FAC2BE_OFFSET UNITYSDK_OFFSET(0x1B3B2530)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B3B2A90)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_295C38F40B6827D1_OFFSET UNITYSDK_OFFSET(0x1B3B2220)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_51051063C9695F0F_OFFSET UNITYSDK_OFFSET(0x1B3B2AE0)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3B28C0)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B3B2950)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_CDC8D9356349C575_OFFSET UNITYSDK_OFFSET(0x1B3B26A0)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B3B24D0)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B3B22A0)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B3B2880)
#define CLASS_1_76C1BA799DEAE275_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3B29F0)
#define CLASS_1_76C1BA799DEAE275__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3B2E80)

inline static constexpr unsigned int Class_1_76C1BA799DEAE275_TypeDefinitionIndex = 11618;

class Class_1_76C1BA799DEAE275 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76C1BA799DEAE275_TypeDefinitionIndex)->GetStaticField(0xD220);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76C1BA799DEAE275_TypeDefinitionIndex)->GetStaticField(0xD228);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76C1BA799DEAE275_TypeDefinitionIndex)->GetStaticField(0xD230);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76C1BA799DEAE275_TypeDefinitionIndex)->GetStaticField(0x4A90);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76C1BA799DEAE275_TypeDefinitionIndex)->GetStaticField(0x4A91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>* Method_1_295C38F40B6827D1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_295C38F40B6827D1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*> Method_1_0848E0E8B6FAC2BE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_0848E0E8B6FAC2BE_OFFSET))();
	}

	static ::RPG::GameCore::MonopolyContentDisplayRow* Method_1_CDC8D9356349C575(::System::UInt32 a1, ::RPG::GameCore::MonopolyCellType a2)
	{
		return ((::RPG::GameCore::MonopolyContentDisplayRow*(*)(::System::UInt32, ::RPG::GameCore::MonopolyCellType))((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_CDC8D9356349C575_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_51051063C9695F0F(::RPG::GameCore::MonopolyContentDisplayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MonopolyContentDisplayRow*))((::PBYTE)hIl2Cpp + CLASS_1_76C1BA799DEAE275_METHOD_1_51051063C9695F0F_OFFSET))(a1);
	}
};
