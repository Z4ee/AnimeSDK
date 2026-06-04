#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournExhibitionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19102880)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_3D29EFD2DF346FEA_OFFSET UNITYSDK_OFFSET(0x19102350)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_72EC15E199905C97_OFFSET UNITYSDK_OFFSET(0x191024E0)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x191026B0)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19102740)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_C549C4F04A638608_OFFSET UNITYSDK_OFFSET(0x19102480)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191022F0)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x191020C0)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_E74F7C5F239FE9DB_OFFSET UNITYSDK_OFFSET(0x191028D0)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19102670)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191027E0)
#define CLASS_1_30C0F5FAE2ADD406_METHOD_1_FBF004F956021BBE_OFFSET UNITYSDK_OFFSET(0x19102040)
#define CLASS_1_30C0F5FAE2ADD406__CCTOR_OFFSET UNITYSDK_OFFSET(0x19102BF0)

inline static constexpr unsigned int Class_1_30C0F5FAE2ADD406_TypeDefinitionIndex = 14263;

class Class_1_30C0F5FAE2ADD406 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30C0F5FAE2ADD406_TypeDefinitionIndex)->GetStaticField(0x52C00);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30C0F5FAE2ADD406_TypeDefinitionIndex)->GetStaticField(0x52C08);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30C0F5FAE2ADD406_TypeDefinitionIndex)->GetStaticField(0x52C10);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30C0F5FAE2ADD406_TypeDefinitionIndex)->GetStaticField(0x10550);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30C0F5FAE2ADD406_TypeDefinitionIndex)->GetStaticField(0x10551);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>* Method_1_FBF004F956021BBE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_FBF004F956021BBE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*> Method_1_3D29EFD2DF346FEA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_3D29EFD2DF346FEA_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>, ::RPG::GameCore::RogueTournExhibitionConfigRow*> Method_1_C549C4F04A638608()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>, ::RPG::GameCore::RogueTournExhibitionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_C549C4F04A638608_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournExhibitionConfigRow* Method_1_72EC15E199905C97(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournExhibitionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_72EC15E199905C97_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_E74F7C5F239FE9DB(::RPG::GameCore::RogueTournExhibitionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournExhibitionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_30C0F5FAE2ADD406_METHOD_1_E74F7C5F239FE9DB_OFFSET))(a1);
	}
};
