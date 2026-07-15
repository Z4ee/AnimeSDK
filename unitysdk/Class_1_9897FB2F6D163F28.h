#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkBuffTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9897FB2F6D163F28_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B31D870)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_609F0769B33AB2DB_OFFSET UNITYSDK_OFFSET(0x1B31D360)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_6C9053F6989B2BF4_OFFSET UNITYSDK_OFFSET(0x1B31D8C0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B31D6A0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_99BF39E58088EF04_OFFSET UNITYSDK_OFFSET(0x1B31D4D0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B31D730)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B31D300)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B31D0D0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B31D660)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B31D7D0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_F4A160780F731212_OFFSET UNITYSDK_OFFSET(0x1B31D050)
#define CLASS_1_9897FB2F6D163F28__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B31DC30)

inline static constexpr unsigned int Class_1_9897FB2F6D163F28_TypeDefinitionIndex = 10796;

class Class_1_9897FB2F6D163F28 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x662E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x662E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x662F0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x13A80);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x13A81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>* Method_1_F4A160780F731212()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_F4A160780F731212_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*> Method_1_609F0769B33AB2DB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_609F0769B33AB2DB_OFFSET))();
	}

	static ::RPG::GameCore::ClockParkBuffTypeRow* Method_1_99BF39E58088EF04(::RPG::GameCore::ClockParkBuffType a1)
	{
		return ((::RPG::GameCore::ClockParkBuffTypeRow*(*)(::RPG::GameCore::ClockParkBuffType))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_99BF39E58088EF04_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C9053F6989B2BF4(::RPG::GameCore::ClockParkBuffTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ClockParkBuffTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_6C9053F6989B2BF4_OFFSET))(a1);
	}
};
