#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class QuestKeyPointRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_40581E00B7E6282F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1BBB30B0)
#define CLASS_1_40581E00B7E6282F_METHOD_1_280B9650111AF835_OFFSET UNITYSDK_OFFSET(0x1BBB3100)
#define CLASS_1_40581E00B7E6282F_METHOD_1_8102AB117B5247D0_OFFSET UNITYSDK_OFFSET(0x1BBB2BA0)
#define CLASS_1_40581E00B7E6282F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BBB2EE0)
#define CLASS_1_40581E00B7E6282F_METHOD_1_8F024E0373C8CD57_OFFSET UNITYSDK_OFFSET(0x1BBB2890)
#define CLASS_1_40581E00B7E6282F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BBB2F70)
#define CLASS_1_40581E00B7E6282F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BBB2B40)
#define CLASS_1_40581E00B7E6282F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BBB2910)
#define CLASS_1_40581E00B7E6282F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BBB2EA0)
#define CLASS_1_40581E00B7E6282F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BBB3010)
#define CLASS_1_40581E00B7E6282F_METHOD_1_FDC5F93E4671431E_OFFSET UNITYSDK_OFFSET(0x1BBB2D10)
#define CLASS_1_40581E00B7E6282F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB3470)

inline static constexpr unsigned int Class_1_40581E00B7E6282F_TypeDefinitionIndex = 13949;

class Class_1_40581E00B7E6282F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40581E00B7E6282F_TypeDefinitionIndex)->GetStaticField(0xE830);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40581E00B7E6282F_TypeDefinitionIndex)->GetStaticField(0xE838);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40581E00B7E6282F_TypeDefinitionIndex)->GetStaticField(0xE840);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_40581E00B7E6282F_TypeDefinitionIndex)->GetStaticField(0x4FA0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_40581E00B7E6282F_TypeDefinitionIndex)->GetStaticField(0x4FA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>* Method_1_8F024E0373C8CD57()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_8F024E0373C8CD57_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*> Method_1_8102AB117B5247D0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_8102AB117B5247D0_OFFSET))();
	}

	static ::RPG::GameCore::QuestKeyPointRewardRow* Method_1_FDC5F93E4671431E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::QuestKeyPointRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_FDC5F93E4671431E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_280B9650111AF835(::RPG::GameCore::QuestKeyPointRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::QuestKeyPointRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_40581E00B7E6282F_METHOD_1_280B9650111AF835_OFFSET))(a1);
	}
};
