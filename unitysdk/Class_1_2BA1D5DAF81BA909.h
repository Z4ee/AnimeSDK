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

#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C00DF0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C00C10)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_4D1230FA89E120D2_OFFSET UNITYSDK_OFFSET(0x16C00E40)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_55569F4E5153E858_OFFSET UNITYSDK_OFFSET(0x16C00A40)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C005E0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C00CB0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_C0ACFEEA05D7644D_OFFSET UNITYSDK_OFFSET(0x16C00560)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C00830)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_EE112C0AC91C3C7A_OFFSET UNITYSDK_OFFSET(0x16C00890)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C00BD0)
#define CLASS_1_2BA1D5DAF81BA909_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C00D50)
#define CLASS_1_2BA1D5DAF81BA909__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C01150)

inline static constexpr unsigned int Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex = 12202;

class Class_1_2BA1D5DAF81BA909 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0x297B0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0x297B8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0x297C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0xDAA0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BA1D5DAF81BA909_TypeDefinitionIndex)->GetStaticField(0xDAA1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*> Method_1_EE112C0AC91C3C7A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaTypeBasicInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_EE112C0AC91C3C7A_OFFSET))();
	}

	static ::RPG::GameCore::GachaTypeBasicInfoRow* Method_1_55569F4E5153E858(::RPG::GameCore::GachaType a1)
	{
		return ((::RPG::GameCore::GachaTypeBasicInfoRow*(*)(::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_55569F4E5153E858_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BA1D5DAF81BA909_METHOD_1_30D1209326FA87FC_OFFSET))();
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
