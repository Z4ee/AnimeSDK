#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookCharacterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3D4AE9BE1006271_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1797E4C0)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_28D06AFB200CDE5D_OFFSET UNITYSDK_OFFSET(0x1797DF50)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1797E2E0)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1797DCA0)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_94031C76956363DA_OFFSET UNITYSDK_OFFSET(0x1797E510)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1797E380)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_C9D36CFF2C51FA7D_OFFSET UNITYSDK_OFFSET(0x1797DC20)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1797DEF0)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_E00163DADA8088D7_OFFSET UNITYSDK_OFFSET(0x1797E0D0)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1797E2A0)
#define CLASS_1_F3D4AE9BE1006271_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1797E420)
#define CLASS_1_F3D4AE9BE1006271__CCTOR_OFFSET UNITYSDK_OFFSET(0x1797E820)

inline static constexpr unsigned int Class_1_F3D4AE9BE1006271_TypeDefinitionIndex = 13957;

class Class_1_F3D4AE9BE1006271 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D4AE9BE1006271_TypeDefinitionIndex)->GetStaticField(0x24F10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D4AE9BE1006271_TypeDefinitionIndex)->GetStaticField(0x24F18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D4AE9BE1006271_TypeDefinitionIndex)->GetStaticField(0x24F20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D4AE9BE1006271_TypeDefinitionIndex)->GetStaticField(0x9EE0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D4AE9BE1006271_TypeDefinitionIndex)->GetStaticField(0x9EE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>* Method_1_C9D36CFF2C51FA7D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_C9D36CFF2C51FA7D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*> Method_1_28D06AFB200CDE5D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_28D06AFB200CDE5D_OFFSET))();
	}

	static ::RPG::GameCore::TarotBookCharacterRow* Method_1_E00163DADA8088D7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TarotBookCharacterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_E00163DADA8088D7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_94031C76956363DA(::RPG::GameCore::TarotBookCharacterRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TarotBookCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_F3D4AE9BE1006271_METHOD_1_94031C76956363DA_OFFSET))(a1);
	}
};
