#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B4044F0)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_3534C05E56DF9838_OFFSET UNITYSDK_OFFSET(0x1B404540)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B404320)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B4043B0)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_B3F4062FE2165D18_OFFSET UNITYSDK_OFFSET(0x1B403FD0)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_C2F7C72640FC4F40_OFFSET UNITYSDK_OFFSET(0x1B404140)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_C547CA60E99732BB_OFFSET UNITYSDK_OFFSET(0x1B403CC0)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B403F70)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B403D40)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B4042E0)
#define CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B404450)
#define CLASS_1_9BBD1FDF5B5AAF63__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4048A0)

inline static constexpr unsigned int Class_1_9BBD1FDF5B5AAF63_TypeDefinitionIndex = 13770;

class Class_1_9BBD1FDF5B5AAF63 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BBD1FDF5B5AAF63_TypeDefinitionIndex)->GetStaticField(0x44200);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BBD1FDF5B5AAF63_TypeDefinitionIndex)->GetStaticField(0x44208);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BBD1FDF5B5AAF63_TypeDefinitionIndex)->GetStaticField(0x44210);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BBD1FDF5B5AAF63_TypeDefinitionIndex)->GetStaticField(0xBA80);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BBD1FDF5B5AAF63_TypeDefinitionIndex)->GetStaticField(0xBA81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>* Method_1_C547CA60E99732BB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_C547CA60E99732BB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*> Method_1_B3F4062FE2165D18()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_B3F4062FE2165D18_OFFSET))();
	}

	static ::RPG::GameCore::OfferingLevelConfigRow* Method_1_C2F7C72640FC4F40(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::OfferingLevelConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_C2F7C72640FC4F40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3534C05E56DF9838(::RPG::GameCore::OfferingLevelConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::OfferingLevelConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9BBD1FDF5B5AAF63_METHOD_1_3534C05E56DF9838_OFFSET))(a1);
	}
};
