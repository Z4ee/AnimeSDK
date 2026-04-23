#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemStroyLineRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1C97C8B852121E99_METHOD_1_0B21D6A7CAC87BFE_OFFSET UNITYSDK_OFFSET(0x1877E1D0)
#define CLASS_1_1C97C8B852121E99_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1877E720)
#define CLASS_1_1C97C8B852121E99_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1877E540)
#define CLASS_1_1C97C8B852121E99_METHOD_1_434F344B1516C336_OFFSET UNITYSDK_OFFSET(0x1877E380)
#define CLASS_1_1C97C8B852121E99_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1877DF20)
#define CLASS_1_1C97C8B852121E99_METHOD_1_84B97FA447F24A42_OFFSET UNITYSDK_OFFSET(0x1877E770)
#define CLASS_1_1C97C8B852121E99_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1877E5E0)
#define CLASS_1_1C97C8B852121E99_METHOD_1_AFC5A8A8630F7C55_OFFSET UNITYSDK_OFFSET(0x1877DEA0)
#define CLASS_1_1C97C8B852121E99_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1877E170)
#define CLASS_1_1C97C8B852121E99_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1877E500)
#define CLASS_1_1C97C8B852121E99_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1877E680)
#define CLASS_1_1C97C8B852121E99__CCTOR_OFFSET UNITYSDK_OFFSET(0x1877EA80)

inline static constexpr unsigned int Class_1_1C97C8B852121E99_TypeDefinitionIndex = 13170;

class Class_1_1C97C8B852121E99 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C97C8B852121E99_TypeDefinitionIndex)->GetStaticField(0x1BA10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C97C8B852121E99_TypeDefinitionIndex)->GetStaticField(0x1BA18);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C97C8B852121E99_TypeDefinitionIndex)->GetStaticField(0x1BA20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C97C8B852121E99_TypeDefinitionIndex)->GetStaticField(0x71E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C97C8B852121E99_TypeDefinitionIndex)->GetStaticField(0x71E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>* Method_1_AFC5A8A8630F7C55()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_AFC5A8A8630F7C55_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*> Method_1_0B21D6A7CAC87BFE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemStroyLineRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_0B21D6A7CAC87BFE_OFFSET))();
	}

	static ::RPG::GameCore::ItemStroyLineRow* Method_1_434F344B1516C336(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ItemStroyLineRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_434F344B1516C336_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_84B97FA447F24A42(::RPG::GameCore::ItemStroyLineRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ItemStroyLineRow*))((::PBYTE)hIl2Cpp + CLASS_1_1C97C8B852121E99_METHOD_1_84B97FA447F24A42_OFFSET))(a1);
	}
};
