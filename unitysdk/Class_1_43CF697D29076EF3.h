#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarCutinChangeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_43CF697D29076EF3_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16CA0400)
#define CLASS_1_43CF697D29076EF3_METHOD_1_20A83B106BEEBD80_OFFSET UNITYSDK_OFFSET(0x16C9FE60)
#define CLASS_1_43CF697D29076EF3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16CA0220)
#define CLASS_1_43CF697D29076EF3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C9FBB0)
#define CLASS_1_43CF697D29076EF3_METHOD_1_76D1188AD391F99F_OFFSET UNITYSDK_OFFSET(0x16C9FB30)
#define CLASS_1_43CF697D29076EF3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16CA02C0)
#define CLASS_1_43CF697D29076EF3_METHOD_1_BDD44090073B6CAD_OFFSET UNITYSDK_OFFSET(0x16CA0450)
#define CLASS_1_43CF697D29076EF3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C9FE00)
#define CLASS_1_43CF697D29076EF3_METHOD_1_D8F42A88DCB9D7B9_OFFSET UNITYSDK_OFFSET(0x16CA0010)
#define CLASS_1_43CF697D29076EF3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16CA01E0)
#define CLASS_1_43CF697D29076EF3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16CA0360)
#define CLASS_1_43CF697D29076EF3__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA07B0)

inline static constexpr unsigned int Class_1_43CF697D29076EF3_TypeDefinitionIndex = 11616;

class Class_1_43CF697D29076EF3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43CF697D29076EF3_TypeDefinitionIndex)->GetStaticField(0x5540);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43CF697D29076EF3_TypeDefinitionIndex)->GetStaticField(0x5548);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43CF697D29076EF3_TypeDefinitionIndex)->GetStaticField(0x5550);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43CF697D29076EF3_TypeDefinitionIndex)->GetStaticField(0x2CC0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43CF697D29076EF3_TypeDefinitionIndex)->GetStaticField(0x2CC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>* Method_1_76D1188AD391F99F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_76D1188AD391F99F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*> Method_1_20A83B106BEEBD80()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_20A83B106BEEBD80_OFFSET))();
	}

	static ::RPG::GameCore::AvatarCutinChangeConfigRow* Method_1_D8F42A88DCB9D7B9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarCutinChangeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_D8F42A88DCB9D7B9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BDD44090073B6CAD(::RPG::GameCore::AvatarCutinChangeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarCutinChangeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_43CF697D29076EF3_METHOD_1_BDD44090073B6CAD_OFFSET))(a1);
	}
};
