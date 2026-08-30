#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SilverWolfCollectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SilverWolfCollectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8B084C5562F58E3A_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CB238F0)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_286AE61F888F9F37_OFFSET UNITYSDK_OFFSET(0x1CB23940)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_35887BAD2C19A19A_OFFSET UNITYSDK_OFFSET(0x1CB230C0)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB23720)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB237B0)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB23370)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB23140)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_EB2F22094685C252_OFFSET UNITYSDK_OFFSET(0x1CB233D0)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_F0D0661D0136416A_OFFSET UNITYSDK_OFFSET(0x1CB23500)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB236E0)
#define CLASS_1_8B084C5562F58E3A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB23850)
#define CLASS_1_8B084C5562F58E3A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB23CA0)

inline static constexpr unsigned int Class_1_8B084C5562F58E3A_TypeDefinitionIndex = 12262;

class Class_1_8B084C5562F58E3A : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B084C5562F58E3A_TypeDefinitionIndex)->GetStaticField(0x567E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B084C5562F58E3A_TypeDefinitionIndex)->GetStaticField(0x567E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfCollectionRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfCollectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B084C5562F58E3A_TypeDefinitionIndex)->GetStaticField(0x567F0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B084C5562F58E3A_TypeDefinitionIndex)->GetStaticField(0x121C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B084C5562F58E3A_TypeDefinitionIndex)->GetStaticField(0x121C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfCollectionRow*>* Method_1_35887BAD2C19A19A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_35887BAD2C19A19A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfCollectionRow*> Method_1_EB2F22094685C252()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfCollectionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_EB2F22094685C252_OFFSET))();
	}

	static ::RPG::GameCore::SilverWolfCollectionRow* Method_1_F0D0661D0136416A(::RPG::GameCore::SilverWolfCollectionType a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::SilverWolfCollectionRow*(*)(::RPG::GameCore::SilverWolfCollectionType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_F0D0661D0136416A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_286AE61F888F9F37(::RPG::GameCore::SilverWolfCollectionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SilverWolfCollectionRow*))((::PBYTE)hIl2Cpp + CLASS_1_8B084C5562F58E3A_METHOD_1_286AE61F888F9F37_OFFSET))(a1);
	}
};
