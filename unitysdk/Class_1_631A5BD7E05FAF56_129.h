#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_6613F839F709F8CB;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x1BBB7340)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1BBB72F0)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_6B371E7FD4C13999_OFFSET UNITYSDK_OFFSET(0x1BBB6D90)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BBB7120)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1BBB6A80)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BBB71B0)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_B160DE537146D0BE_OFFSET UNITYSDK_OFFSET(0x1BBB6F00)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BBB6D30)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BBB6B00)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BBB70E0)
#define CLASS_1_631A5BD7E05FAF56_129_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BBB7250)
#define CLASS_1_631A5BD7E05FAF56_129__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB76E0)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_129_TypeDefinitionIndex = 14382;

class Class_1_631A5BD7E05FAF56_129 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_129_TypeDefinitionIndex)->GetStaticField(0xE9F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_129_TypeDefinitionIndex)->GetStaticField(0xE9F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_6613F839F709F8CB*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_6613F839F709F8CB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_129_TypeDefinitionIndex)->GetStaticField(0xEA00);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_129_TypeDefinitionIndex)->GetStaticField(0x5020);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_129_TypeDefinitionIndex)->GetStaticField(0x5021);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_6613F839F709F8CB*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_6613F839F709F8CB*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_6613F839F709F8CB*> Method_1_6B371E7FD4C13999()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_6613F839F709F8CB*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_6B371E7FD4C13999_OFFSET))();
	}

	static ::Class_1_6613F839F709F8CB* Method_1_B160DE537146D0BE(::RPG::GameCore::RogueTournRoomType a1, ::RPG::GameCore::RogueTournMarkType a2)
	{
		return ((::Class_1_6613F839F709F8CB*(*)(::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_B160DE537146D0BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C490FF1F071E8D4(::Class_1_6613F839F709F8CB* a1)
	{
		return ((::System::Void(*)(::Class_1_6613F839F709F8CB*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_129_METHOD_1_0C490FF1F071E8D4_OFFSET))(a1);
	}
};
