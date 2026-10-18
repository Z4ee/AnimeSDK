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

#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CD0AD30)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_22F975DB0FB4749F_OFFSET UNITYSDK_OFFSET(0x1CD0A990)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_79185EBC463B725D_OFFSET UNITYSDK_OFFSET(0x1CD0A510)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD0AB60)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD0ABF0)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_B6F6B4A76D80C943_OFFSET UNITYSDK_OFFSET(0x1CD0AD80)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD0A7C0)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD0A590)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_EF5D40C2774C098E_OFFSET UNITYSDK_OFFSET(0x1CD0A820)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD0AB20)
#define CLASS_1_5A3DDFE7711EBD81_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD0AC90)
#define CLASS_1_5A3DDFE7711EBD81__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD0B0F0)

inline static constexpr unsigned int Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex = 14663;

class Class_1_5A3DDFE7711EBD81 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x48530);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x48538);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x48540);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x10DD0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A3DDFE7711EBD81_TypeDefinitionIndex)->GetStaticField(0x10DD1);
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
