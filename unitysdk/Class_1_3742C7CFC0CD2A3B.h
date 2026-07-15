#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ParkourRankingListConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B13DE60)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_0C22E4DACFDE2589_OFFSET UNITYSDK_OFFSET(0x1B13DEB0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_796DFE65127BFEBA_OFFSET UNITYSDK_OFFSET(0x1B13DAC0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B13DC90)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_9FAB767432D7D56B_OFFSET UNITYSDK_OFFSET(0x1B13D640)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B13DD20)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B13D8F0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_D132A639CADCAA08_OFFSET UNITYSDK_OFFSET(0x1B13D950)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B13D6C0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B13DC50)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B13DDC0)
#define CLASS_1_3742C7CFC0CD2A3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B13E220)

inline static constexpr unsigned int Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex = 11637;

class Class_1_3742C7CFC0CD2A3B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x489D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x489D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x489E0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0xCCB0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0xCCB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>* Method_1_9FAB767432D7D56B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_9FAB767432D7D56B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*> Method_1_D132A639CADCAA08()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_D132A639CADCAA08_OFFSET))();
	}

	static ::RPG::GameCore::ParkourRankingListConfigRow* Method_1_796DFE65127BFEBA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ParkourRankingListConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_796DFE65127BFEBA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C22E4DACFDE2589(::RPG::GameCore::ParkourRankingListConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ParkourRankingListConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_0C22E4DACFDE2589_OFFSET))(a1);
	}
};
