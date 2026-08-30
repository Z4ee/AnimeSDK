#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarSourceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0B0907366C0D0475_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CF12120)
#define CLASS_1_0B0907366C0D0475_METHOD_1_23FF22DDFC8D7324_OFFSET UNITYSDK_OFFSET(0x1CF12170)
#define CLASS_1_0B0907366C0D0475_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF11F50)
#define CLASS_1_0B0907366C0D0475_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CF11FE0)
#define CLASS_1_0B0907366C0D0475_METHOD_1_B35FD5E79BAE402D_OFFSET UNITYSDK_OFFSET(0x1CF118C0)
#define CLASS_1_0B0907366C0D0475_METHOD_1_B56C1B392E6D4026_OFFSET UNITYSDK_OFFSET(0x1CF11D80)
#define CLASS_1_0B0907366C0D0475_METHOD_1_B681DB6388957F50_OFFSET UNITYSDK_OFFSET(0x1CF11D00)
#define CLASS_1_0B0907366C0D0475_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CF11B70)
#define CLASS_1_0B0907366C0D0475_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CF11940)
#define CLASS_1_0B0907366C0D0475_METHOD_1_E489E1C8820228EB_OFFSET UNITYSDK_OFFSET(0x1CF11BD0)
#define CLASS_1_0B0907366C0D0475_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CF11F10)
#define CLASS_1_0B0907366C0D0475_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CF12080)
#define CLASS_1_0B0907366C0D0475__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF12490)

inline static constexpr unsigned int Class_1_0B0907366C0D0475_TypeDefinitionIndex = 10925;

class Class_1_0B0907366C0D0475 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0907366C0D0475_TypeDefinitionIndex)->GetStaticField(0x51E50);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0907366C0D0475_TypeDefinitionIndex)->GetStaticField(0x51E58);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0907366C0D0475_TypeDefinitionIndex)->GetStaticField(0x51E60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0907366C0D0475_TypeDefinitionIndex)->GetStaticField(0x11050);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B0907366C0D0475_TypeDefinitionIndex)->GetStaticField(0x11051);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>* Method_1_B35FD5E79BAE402D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_B35FD5E79BAE402D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*> Method_1_E489E1C8820228EB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_E489E1C8820228EB_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>, ::RPG::GameCore::AvatarSourceConfigRow*> Method_1_B681DB6388957F50()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>, ::RPG::GameCore::AvatarSourceConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_B681DB6388957F50_OFFSET))();
	}

	static ::RPG::GameCore::AvatarSourceConfigRow* Method_1_B56C1B392E6D4026(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarSourceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_B56C1B392E6D4026_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_23FF22DDFC8D7324(::RPG::GameCore::AvatarSourceConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarSourceConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_0B0907366C0D0475_METHOD_1_23FF22DDFC8D7324_OFFSET))(a1);
	}
};
