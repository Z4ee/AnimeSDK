#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StarFightDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityStarFightStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B408A90)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_230D76ED49E6BC41_OFFSET UNITYSDK_OFFSET(0x1B408AE0)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_3C28EF60E5346710_OFFSET UNITYSDK_OFFSET(0x1B408260)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_824269CAE2943291_OFFSET UNITYSDK_OFFSET(0x1B408570)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B4088C0)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B408950)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B408510)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_D2B9A75C3C072A3E_OFFSET UNITYSDK_OFFSET(0x1B4086E0)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B4082E0)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B408880)
#define CLASS_1_0489BBD9A92E6D0E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B4089F0)
#define CLASS_1_0489BBD9A92E6D0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B408E40)

inline static constexpr unsigned int Class_1_0489BBD9A92E6D0E_TypeDefinitionIndex = 11915;

class Class_1_0489BBD9A92E6D0E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0489BBD9A92E6D0E_TypeDefinitionIndex)->GetStaticField(0x44380);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0489BBD9A92E6D0E_TypeDefinitionIndex)->GetStaticField(0x44388);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0489BBD9A92E6D0E_TypeDefinitionIndex)->GetStaticField(0x44390);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0489BBD9A92E6D0E_TypeDefinitionIndex)->GetStaticField(0xBB10);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0489BBD9A92E6D0E_TypeDefinitionIndex)->GetStaticField(0xBB11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>* Method_1_3C28EF60E5346710()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_3C28EF60E5346710_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*> Method_1_824269CAE2943291()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_824269CAE2943291_OFFSET))();
	}

	static ::RPG::GameCore::ActivityStarFightStageConfigRow* Method_1_D2B9A75C3C072A3E(::System::UInt32 a1, ::RPG::GameCore::StarFightDifficulty a2)
	{
		return ((::RPG::GameCore::ActivityStarFightStageConfigRow*(*)(::System::UInt32, ::RPG::GameCore::StarFightDifficulty))((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_D2B9A75C3C072A3E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_230D76ED49E6BC41(::RPG::GameCore::ActivityStarFightStageConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityStarFightStageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_0489BBD9A92E6D0E_METHOD_1_230D76ED49E6BC41_OFFSET))(a1);
	}
};
