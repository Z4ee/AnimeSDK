#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1913A460)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_26C842FEA369BE96_OFFSET UNITYSDK_OFFSET(0x19139EC0)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_276EAC272AC5933D_OFFSET UNITYSDK_OFFSET(0x1913A4B0)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1913A280)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_3FD84C8F974D3C8D_OFFSET UNITYSDK_OFFSET(0x19139B90)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19139C10)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1913A320)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19139E60)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_EDA16A368E2419A9_OFFSET UNITYSDK_OFFSET(0x1913A070)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1913A240)
#define CLASS_1_EC4DA1B30011C0F1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1913A3C0)
#define CLASS_1_EC4DA1B30011C0F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1913A810)

inline static constexpr unsigned int Class_1_EC4DA1B30011C0F1_TypeDefinitionIndex = 12217;

class Class_1_EC4DA1B30011C0F1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC4DA1B30011C0F1_TypeDefinitionIndex)->GetStaticField(0x40660);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC4DA1B30011C0F1_TypeDefinitionIndex)->GetStaticField(0x40668);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC4DA1B30011C0F1_TypeDefinitionIndex)->GetStaticField(0x40670);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC4DA1B30011C0F1_TypeDefinitionIndex)->GetStaticField(0xE7E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC4DA1B30011C0F1_TypeDefinitionIndex)->GetStaticField(0xE7E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>* Method_1_3FD84C8F974D3C8D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_3FD84C8F974D3C8D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*> Method_1_26C842FEA369BE96()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_26C842FEA369BE96_OFFSET))();
	}

	static ::RPG::GameCore::CakeDialogueRow* Method_1_EDA16A368E2419A9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_EDA16A368E2419A9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_276EAC272AC5933D(::RPG::GameCore::CakeDialogueRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CakeDialogueRow*))((::PBYTE)hIl2Cpp + CLASS_1_EC4DA1B30011C0F1_METHOD_1_276EAC272AC5933D_OFFSET))(a1);
	}
};
