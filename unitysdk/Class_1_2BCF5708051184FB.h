#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GMAccountItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2BCF5708051184FB_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x17744910)
#define CLASS_1_2BCF5708051184FB_METHOD_1_0F517F707C22C154_OFFSET UNITYSDK_OFFSET(0x17744370)
#define CLASS_1_2BCF5708051184FB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17744730)
#define CLASS_1_2BCF5708051184FB_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x177440C0)
#define CLASS_1_2BCF5708051184FB_METHOD_1_70EFBAA06EF7F263_OFFSET UNITYSDK_OFFSET(0x17744040)
#define CLASS_1_2BCF5708051184FB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x177447D0)
#define CLASS_1_2BCF5708051184FB_METHOD_1_B7D47B2197F80689_OFFSET UNITYSDK_OFFSET(0x17744960)
#define CLASS_1_2BCF5708051184FB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17744310)
#define CLASS_1_2BCF5708051184FB_METHOD_1_D8F34186D24E6AAD_OFFSET UNITYSDK_OFFSET(0x17744520)
#define CLASS_1_2BCF5708051184FB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x177446F0)
#define CLASS_1_2BCF5708051184FB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17744870)
#define CLASS_1_2BCF5708051184FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17744CC0)

inline static constexpr unsigned int Class_1_2BCF5708051184FB_TypeDefinitionIndex = 12188;

class Class_1_2BCF5708051184FB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BCF5708051184FB_TypeDefinitionIndex)->GetStaticField(0x20C00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BCF5708051184FB_TypeDefinitionIndex)->GetStaticField(0x20C08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BCF5708051184FB_TypeDefinitionIndex)->GetStaticField(0x20C10);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BCF5708051184FB_TypeDefinitionIndex)->GetStaticField(0x8B20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BCF5708051184FB_TypeDefinitionIndex)->GetStaticField(0x8B21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>* Method_1_70EFBAA06EF7F263()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_70EFBAA06EF7F263_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*> Method_1_0F517F707C22C154()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_0F517F707C22C154_OFFSET))();
	}

	static ::RPG::GameCore::GMAccountItemConfigRow* Method_1_D8F34186D24E6AAD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GMAccountItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_D8F34186D24E6AAD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B7D47B2197F80689(::RPG::GameCore::GMAccountItemConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GMAccountItemConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2BCF5708051184FB_METHOD_1_B7D47B2197F80689_OFFSET))(a1);
	}
};
