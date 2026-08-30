#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_7;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D843B00)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_259066F45778461D_OFFSET UNITYSDK_OFFSET(0x1D843760)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_706E55847AB23D50_OFFSET UNITYSDK_OFFSET(0x1D8435D0)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D843930)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_8A321F63F77C8ADD_OFFSET UNITYSDK_OFFSET(0x1D843B50)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1D8432C0)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D8439C0)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D843570)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D843340)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_E0E531FF7D319A49_OFFSET UNITYSDK_OFFSET(0x1D843700)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D8438F0)
#define CLASS_1_631A5BD7E05FAF56_56_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D843A60)
#define CLASS_1_631A5BD7E05FAF56_56__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D843E70)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_56_TypeDefinitionIndex = 11542;

class Class_1_631A5BD7E05FAF56_56 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_56_TypeDefinitionIndex)->GetStaticField(0x290B0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_56_TypeDefinitionIndex)->GetStaticField(0x290B8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_56_TypeDefinitionIndex)->GetStaticField(0x290C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_56_TypeDefinitionIndex)->GetStaticField(0xC190);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_56_TypeDefinitionIndex)->GetStaticField(0xC191);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*> Method_1_706E55847AB23D50()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_706E55847AB23D50_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*>, ::Class_1_A88C3AAF0DD46F4C_7*> Method_1_E0E531FF7D319A49()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A88C3AAF0DD46F4C_7*>, ::Class_1_A88C3AAF0DD46F4C_7*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_E0E531FF7D319A49_OFFSET))();
	}

	static ::Class_1_A88C3AAF0DD46F4C_7* Method_1_259066F45778461D(::System::UInt32 a1)
	{
		return ((::Class_1_A88C3AAF0DD46F4C_7*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_259066F45778461D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A321F63F77C8ADD(::Class_1_A88C3AAF0DD46F4C_7* a1)
	{
		return ((::System::Void(*)(::Class_1_A88C3AAF0DD46F4C_7*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_56_METHOD_1_8A321F63F77C8ADD_OFFSET))(a1);
	}
};
