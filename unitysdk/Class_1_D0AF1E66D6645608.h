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

#define CLASS_1_D0AF1E66D6645608_METHOD_1_0C1C691FD71226C4_OFFSET UNITYSDK_OFFSET(0x183D1820)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x183D2130)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183D1F50)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_32DD2FD0D413B780_OFFSET UNITYSDK_OFFSET(0x183D2180)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183D18A0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x183D1FF0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x183D1AF0)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_EF736CF71D7EFB28_OFFSET UNITYSDK_OFFSET(0x183D1D00)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183D1F10)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x183D2090)
#define CLASS_1_D0AF1E66D6645608_METHOD_1_F9C25B0BB00CB329_OFFSET UNITYSDK_OFFSET(0x183D1B50)
#define CLASS_1_D0AF1E66D6645608__CCTOR_OFFSET UNITYSDK_OFFSET(0x183D2530)

inline static constexpr unsigned int Class_1_D0AF1E66D6645608_TypeDefinitionIndex = 13807;

class Class_1_D0AF1E66D6645608 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x240A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x240A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x240B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x9580);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0AF1E66D6645608_TypeDefinitionIndex)->GetStaticField(0x9581);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*> Method_1_F9C25B0BB00CB329()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_F9C25B0BB00CB329_OFFSET))();
	}

	static ::RPG::GameCore::RaidNpcMonsterOverrideRow* Method_1_EF736CF71D7EFB28(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RaidNpcMonsterOverrideRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_EF736CF71D7EFB28_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0AF1E66D6645608_METHOD_1_30D1209326FA87FC_OFFSET))();
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
