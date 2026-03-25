#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CutsceneActorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E8B25AF70E09F012_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16C5EF30)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C5ED50)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_4EE58B60A57B3A86_OFFSET UNITYSDK_OFFSET(0x16C5EF80)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_698918F64E998402_OFFSET UNITYSDK_OFFSET(0x16C5E640)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C5E6C0)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_754CAA61F0EFB737_OFFSET UNITYSDK_OFFSET(0x16C5EB20)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_8CB3D360DC712497_OFFSET UNITYSDK_OFFSET(0x16C5E970)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C5EDF0)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C5E910)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C5ED10)
#define CLASS_1_E8B25AF70E09F012_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C5EE90)
#define CLASS_1_E8B25AF70E09F012__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C5F2E0)

inline static constexpr unsigned int Class_1_E8B25AF70E09F012_TypeDefinitionIndex = 11951;

class Class_1_E8B25AF70E09F012 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8B25AF70E09F012_TypeDefinitionIndex)->GetStaticField(0x1480);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8B25AF70E09F012_TypeDefinitionIndex)->GetStaticField(0x1488);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8B25AF70E09F012_TypeDefinitionIndex)->GetStaticField(0x1490);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8B25AF70E09F012_TypeDefinitionIndex)->GetStaticField(0xD70);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8B25AF70E09F012_TypeDefinitionIndex)->GetStaticField(0xD71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>* Method_1_698918F64E998402()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_698918F64E998402_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*> Method_1_8CB3D360DC712497()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_8CB3D360DC712497_OFFSET))();
	}

	static ::RPG::GameCore::CutsceneActorRow* Method_1_754CAA61F0EFB737(::System::String* a1)
	{
		return ((::RPG::GameCore::CutsceneActorRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_754CAA61F0EFB737_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4EE58B60A57B3A86(::RPG::GameCore::CutsceneActorRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CutsceneActorRow*))((::PBYTE)hIl2Cpp + CLASS_1_E8B25AF70E09F012_METHOD_1_4EE58B60A57B3A86_OFFSET))(a1);
	}
};
