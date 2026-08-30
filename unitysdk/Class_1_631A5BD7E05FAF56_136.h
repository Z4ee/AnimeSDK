#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_94DA8F72DD5B40AA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1C8B33A0)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_6B371E7FD4C13999_OFFSET UNITYSDK_OFFSET(0x1C8B2ED0)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8B31D0)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_8A321F63F77C8ADD_OFFSET UNITYSDK_OFFSET(0x1C8B33F0)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1C8B2BC0)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8B3260)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8B2E70)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8B2C40)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_EE739C2861F949E2_OFFSET UNITYSDK_OFFSET(0x1C8B3040)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8B3190)
#define CLASS_1_631A5BD7E05FAF56_136_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8B3300)
#define CLASS_1_631A5BD7E05FAF56_136__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8B3710)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_136_TypeDefinitionIndex = 14782;

class Class_1_631A5BD7E05FAF56_136 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_94DA8F72DD5B40AA*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_94DA8F72DD5B40AA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_136_TypeDefinitionIndex)->GetStaticField(0x53BA0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_136_TypeDefinitionIndex)->GetStaticField(0x53BA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_136_TypeDefinitionIndex)->GetStaticField(0x53BB0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_136_TypeDefinitionIndex)->GetStaticField(0x113C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_136_TypeDefinitionIndex)->GetStaticField(0x113C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_94DA8F72DD5B40AA*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_94DA8F72DD5B40AA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_94DA8F72DD5B40AA*> Method_1_6B371E7FD4C13999()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_94DA8F72DD5B40AA*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_6B371E7FD4C13999_OFFSET))();
	}

	static ::Class_1_94DA8F72DD5B40AA* Method_1_EE739C2861F949E2(::RPG::GameCore::RogueTournAreaGroupID a1)
	{
		return ((::Class_1_94DA8F72DD5B40AA*(*)(::RPG::GameCore::RogueTournAreaGroupID))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_EE739C2861F949E2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A321F63F77C8ADD(::Class_1_94DA8F72DD5B40AA* a1)
	{
		return ((::System::Void(*)(::Class_1_94DA8F72DD5B40AA*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_136_METHOD_1_8A321F63F77C8ADD_OFFSET))(a1);
	}
};
