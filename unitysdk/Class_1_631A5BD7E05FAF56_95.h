#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_349BE0BAA6D56377;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18FB3770)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x18FB37C0)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_259066F45778461D_OFFSET UNITYSDK_OFFSET(0x18FB33D0)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_6B371E7FD4C13999_OFFSET UNITYSDK_OFFSET(0x18FB31E0)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_7E80B35EF5C1C6BE_OFFSET UNITYSDK_OFFSET(0x18FB3350)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FB35A0)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x18FB2ED0)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FB3630)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FB3180)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FB2F50)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FB3560)
#define CLASS_1_631A5BD7E05FAF56_95_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FB36D0)
#define CLASS_1_631A5BD7E05FAF56_95__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FB3B30)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_95_TypeDefinitionIndex = 14253;

class Class_1_631A5BD7E05FAF56_95 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_95_TypeDefinitionIndex)->GetStaticField(0x348F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_95_TypeDefinitionIndex)->GetStaticField(0x348F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_95_TypeDefinitionIndex)->GetStaticField(0x34900);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_95_TypeDefinitionIndex)->GetStaticField(0xA4A0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_95_TypeDefinitionIndex)->GetStaticField(0xA4A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*> Method_1_6B371E7FD4C13999()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_6B371E7FD4C13999_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*>, ::Class_1_349BE0BAA6D56377*> Method_1_7E80B35EF5C1C6BE()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_349BE0BAA6D56377*>, ::Class_1_349BE0BAA6D56377*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_7E80B35EF5C1C6BE_OFFSET))();
	}

	static ::Class_1_349BE0BAA6D56377* Method_1_259066F45778461D(::System::UInt32 a1)
	{
		return ((::Class_1_349BE0BAA6D56377*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_259066F45778461D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C490FF1F071E8D4(::Class_1_349BE0BAA6D56377* a1)
	{
		return ((::System::Void(*)(::Class_1_349BE0BAA6D56377*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_95_METHOD_1_0C490FF1F071E8D4_OFFSET))(a1);
	}
};
