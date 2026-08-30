#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaTypeBasicInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D5C4310)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_36B161033222F0B6_OFFSET UNITYSDK_OFFSET(0x1D5C3E40)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_4D1230FA89E120D2_OFFSET UNITYSDK_OFFSET(0x1D5C4360)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D5C4140)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D5C41D0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_C0ACFEEA05D7644D_OFFSET UNITYSDK_OFFSET(0x1D5C3B30)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D5C3DE0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D5C3BB0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_DF2E24C10CD0EB5A_OFFSET UNITYSDK_OFFSET(0x1D5C3FB0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D5C4100)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D5C4270)
#define CLASS_1_2BA1D5DAF81BA909__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5C4680)

inline static constexpr unsigned int Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex = 13253;

class Class_1_2BA1D5DAF81BA909 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0x2FDB0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0x2FDB8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0x2FDC0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0xCC60);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0xCC61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>* Method_1_C0ACFEEA05D7644D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_C0ACFEEA05D7644D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*> Method_1_36B161033222F0B6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_36B161033222F0B6_OFFSET))();
	}

	static ::RPG::GameCore::GachaTypeBasicInfoRow* Method_1_DF2E24C10CD0EB5A(::RPG::GameCore::GachaType a1)
	{
		return ((::RPG::GameCore::GachaTypeBasicInfoRow*(*)(::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_DF2E24C10CD0EB5A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D1230FA89E120D2(::RPG::GameCore::GachaTypeBasicInfoRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GachaTypeBasicInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_4D1230FA89E120D2_OFFSET))(a1);
	}
};
