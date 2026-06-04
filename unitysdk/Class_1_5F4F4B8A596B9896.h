#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarBreakDamageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5F4F4B8A596B9896_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18FDF6F0)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_33F4D050084AD169_OFFSET UNITYSDK_OFFSET(0x18FDF220)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_4DC768B4EF6F70E3_OFFSET UNITYSDK_OFFSET(0x18FDF740)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_5571EA8521F8D5A8_OFFSET UNITYSDK_OFFSET(0x18FDEF10)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FDF520)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FDF5B0)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FDF1C0)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FDEF90)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_E741D1FF58A52091_OFFSET UNITYSDK_OFFSET(0x18FDF390)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FDF4E0)
#define CLASS_1_5F4F4B8A596B9896_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FDF650)
#define CLASS_1_5F4F4B8A596B9896__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FDFA60)

inline static constexpr unsigned int Class_1_5F4F4B8A596B9896_TypeDefinitionIndex = 12148;

class Class_1_5F4F4B8A596B9896 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F4F4B8A596B9896_TypeDefinitionIndex)->GetStaticField(0x36000);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F4F4B8A596B9896_TypeDefinitionIndex)->GetStaticField(0x36008);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F4F4B8A596B9896_TypeDefinitionIndex)->GetStaticField(0x36010);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F4F4B8A596B9896_TypeDefinitionIndex)->GetStaticField(0xAC20);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F4F4B8A596B9896_TypeDefinitionIndex)->GetStaticField(0xAC21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>* Method_1_5571EA8521F8D5A8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_5571EA8521F8D5A8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*> Method_1_33F4D050084AD169()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_33F4D050084AD169_OFFSET))();
	}

	static ::RPG::GameCore::AvatarBreakDamageRow* Method_1_E741D1FF58A52091(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarBreakDamageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_E741D1FF58A52091_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_4DC768B4EF6F70E3(::RPG::GameCore::AvatarBreakDamageRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarBreakDamageRow*))((::PBYTE)hIl2Cpp + CLASS_1_5F4F4B8A596B9896_METHOD_1_4DC768B4EF6F70E3_OFFSET))(a1);
	}
};
