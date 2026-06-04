#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyMtRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7E574D06CFB88500_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19B7C410)
#define CLASS_1_7E574D06CFB88500_METHOD_1_16FB14849E109D88_OFFSET UNITYSDK_OFFSET(0x19B7C460)
#define CLASS_1_7E574D06CFB88500_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19B7C240)
#define CLASS_1_7E574D06CFB88500_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19B7C2D0)
#define CLASS_1_7E574D06CFB88500_METHOD_1_AE047263E927FDBC_OFFSET UNITYSDK_OFFSET(0x19B7C7D0)
#define CLASS_1_7E574D06CFB88500_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19B7C850)
#define CLASS_1_7E574D06CFB88500_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19B7C010)
#define CLASS_1_7E574D06CFB88500_METHOD_1_E5C27DBA718B77AD_OFFSET UNITYSDK_OFFSET(0x19B7C8B0)
#define CLASS_1_7E574D06CFB88500_METHOD_1_EEF81D0D3A262909_OFFSET UNITYSDK_OFFSET(0x19B7CA20)
#define CLASS_1_7E574D06CFB88500_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19B7BFD0)
#define CLASS_1_7E574D06CFB88500_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19B7C370)
#define CLASS_1_7E574D06CFB88500__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B7CBB0)

inline static constexpr unsigned int Class_1_7E574D06CFB88500_TypeDefinitionIndex = 14594;

class Class_1_7E574D06CFB88500 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E574D06CFB88500_TypeDefinitionIndex)->GetStaticField(0x48F40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E574D06CFB88500_TypeDefinitionIndex)->GetStaticField(0x48F48);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E574D06CFB88500_TypeDefinitionIndex)->GetStaticField(0x48F50);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E574D06CFB88500_TypeDefinitionIndex)->GetStaticField(0xD760);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E574D06CFB88500_TypeDefinitionIndex)->GetStaticField(0xD761);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_16FB14849E109D88(::RPG::GameCore::TrainPartyMtRankConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyMtRankConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_16FB14849E109D88_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>* Method_1_AE047263E927FDBC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_AE047263E927FDBC_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*> Method_1_E5C27DBA718B77AD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_E5C27DBA718B77AD_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyMtRankConfigRow* Method_1_EEF81D0D3A262909(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartyMtRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E574D06CFB88500_METHOD_1_EEF81D0D3A262909_OFFSET))(a1);
	}
};
