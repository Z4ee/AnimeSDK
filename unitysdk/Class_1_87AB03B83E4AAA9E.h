#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreAvatarTextmapConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_035136ECA3B1116F_OFFSET UNITYSDK_OFFSET(0x1B3BA3C0)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B3BA760)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_8471A8D896DE15CE_OFFSET UNITYSDK_OFFSET(0x1B3B9F40)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3BA590)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_9A3E77F4C51FD5DA_OFFSET UNITYSDK_OFFSET(0x1B3BA7B0)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B3BA620)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B3BA1F0)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B3B9FC0)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_DF8F6763696AD25B_OFFSET UNITYSDK_OFFSET(0x1B3BA250)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B3BA550)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3BA6C0)
#define CLASS_1_87AB03B83E4AAA9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3BAB20)

inline static constexpr unsigned int Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex = 13978;

class Class_1_87AB03B83E4AAA9E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0x455A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0x455A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0x455B0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0xC120);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0xC121);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>* Method_1_8471A8D896DE15CE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_8471A8D896DE15CE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*> Method_1_DF8F6763696AD25B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_DF8F6763696AD25B_OFFSET))();
	}

	static ::RPG::GameCore::PreAvatarTextmapConfigRow* Method_1_035136ECA3B1116F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PreAvatarTextmapConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_035136ECA3B1116F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9A3E77F4C51FD5DA(::RPG::GameCore::PreAvatarTextmapConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PreAvatarTextmapConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_9A3E77F4C51FD5DA_OFFSET))(a1);
	}
};
