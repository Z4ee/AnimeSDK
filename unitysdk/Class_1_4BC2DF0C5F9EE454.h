#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicSubAffixBaseValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C71CC80)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_11DA19996AF716D8_OFFSET UNITYSDK_OFFSET(0x1C71C460)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_2D79051CD35408C1_OFFSET UNITYSDK_OFFSET(0x1C71C770)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_637D21A27C4EA2E1_OFFSET UNITYSDK_OFFSET(0x1C71C8E0)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C71CAB0)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C71CB40)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C71C710)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C71C4E0)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_E961E9478D3106D4_OFFSET UNITYSDK_OFFSET(0x1C71CCD0)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C71CA70)
#define CLASS_1_4BC2DF0C5F9EE454_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C71CBE0)
#define CLASS_1_4BC2DF0C5F9EE454__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C71D040)

inline static constexpr unsigned int Class_1_4BC2DF0C5F9EE454_TypeDefinitionIndex = 10866;

class Class_1_4BC2DF0C5F9EE454 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC2DF0C5F9EE454_TypeDefinitionIndex)->GetStaticField(0x49420);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC2DF0C5F9EE454_TypeDefinitionIndex)->GetStaticField(0x49428);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC2DF0C5F9EE454_TypeDefinitionIndex)->GetStaticField(0x49430);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC2DF0C5F9EE454_TypeDefinitionIndex)->GetStaticField(0x10D60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC2DF0C5F9EE454_TypeDefinitionIndex)->GetStaticField(0x10D61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>* Method_1_11DA19996AF716D8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_11DA19996AF716D8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*> Method_1_2D79051CD35408C1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_2D79051CD35408C1_OFFSET))();
	}

	static ::RPG::GameCore::RelicSubAffixBaseValueRow* Method_1_637D21A27C4EA2E1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::RelicSubAffixBaseValueRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_637D21A27C4EA2E1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_E961E9478D3106D4(::RPG::GameCore::RelicSubAffixBaseValueRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RelicSubAffixBaseValueRow*))((::PBYTE)hIl2Cpp + CLASS_1_4BC2DF0C5F9EE454_METHOD_1_E961E9478D3106D4_OFFSET))(a1);
	}
};
