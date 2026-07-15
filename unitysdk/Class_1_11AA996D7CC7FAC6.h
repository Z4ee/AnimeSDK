#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaNewsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B3FE600)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_29DF4BDD2BB4F99B_OFFSET UNITYSDK_OFFSET(0x1B3FE650)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_777F2E48784E654A_OFFSET UNITYSDK_OFFSET(0x1B3FE0F0)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3FE430)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B3FE4C0)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B3FE090)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_CE548EE740D4BA47_OFFSET UNITYSDK_OFFSET(0x1B3FE220)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_CF4D50B9BB771406_OFFSET UNITYSDK_OFFSET(0x1B3FDDE0)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B3FDE60)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B3FE3F0)
#define CLASS_1_11AA996D7CC7FAC6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3FE560)
#define CLASS_1_11AA996D7CC7FAC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3FE9B0)

inline static constexpr unsigned int Class_1_11AA996D7CC7FAC6_TypeDefinitionIndex = 12869;

class Class_1_11AA996D7CC7FAC6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11AA996D7CC7FAC6_TypeDefinitionIndex)->GetStaticField(0x44090);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11AA996D7CC7FAC6_TypeDefinitionIndex)->GetStaticField(0x44098);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11AA996D7CC7FAC6_TypeDefinitionIndex)->GetStaticField(0x440A0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11AA996D7CC7FAC6_TypeDefinitionIndex)->GetStaticField(0xB9F0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11AA996D7CC7FAC6_TypeDefinitionIndex)->GetStaticField(0xB9F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>* Method_1_CF4D50B9BB771406()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_CF4D50B9BB771406_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*> Method_1_777F2E48784E654A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaNewsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_777F2E48784E654A_OFFSET))();
	}

	static ::RPG::GameCore::GachaNewsRow* Method_1_CE548EE740D4BA47(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GachaNewsRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_CE548EE740D4BA47_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_29DF4BDD2BB4F99B(::RPG::GameCore::GachaNewsRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GachaNewsRow*))((::PBYTE)hIl2Cpp + CLASS_1_11AA996D7CC7FAC6_METHOD_1_29DF4BDD2BB4F99B_OFFSET))(a1);
	}
};
