#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RaidNpcMonsterOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D0AF1E66D6645608_METHOD_1_0C1C691FD71226C4_OFFSET UNITYSDK_OFFSET(0x16F40D30)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16F41590)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_32DD2FD0D413B780_OFFSET UNITYSDK_OFFSET(0x16F415E0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16F413C0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16F41450)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16F40FE0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16F40DB0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_E924F6FD3DE92451_OFFSET UNITYSDK_OFFSET(0x16F411B0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_EA6080CA8236C8DD_OFFSET UNITYSDK_OFFSET(0x16F41040)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16F41380)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16F414F0)
#define CLASS_1_D0AF1E66D6645608__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F41980)

inline static constexpr unsigned int Class_1_D0AF1E66D6645608_TypeDefinitionIndex = 14439;

class Class_1_D0AF1E66D6645608 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x3B170);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x3B178);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x3B180);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0xF3A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0xF3A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>* Method_1_0C1C691FD71226C4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_0C1C691FD71226C4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*> Method_1_EA6080CA8236C8DD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_EA6080CA8236C8DD_OFFSET))();
	}

	static ::RPG::GameCore::RaidNpcMonsterOverrideRow* Method_1_E924F6FD3DE92451(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RaidNpcMonsterOverrideRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_E924F6FD3DE92451_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_32DD2FD0D413B780(::RPG::GameCore::RaidNpcMonsterOverrideRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RaidNpcMonsterOverrideRow*))((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_32DD2FD0D413B780_OFFSET))(a1);
	}
};
