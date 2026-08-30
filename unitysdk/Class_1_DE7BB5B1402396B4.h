#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DE7BB5B1402396B4_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C861ED0)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_6B12DB143AA62A7E_OFFSET UNITYSDK_OFFSET(0x1C8616B0)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C861D00)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_9C82C8592F4C2108_OFFSET UNITYSDK_OFFSET(0x1C861F20)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_A414416FB843D407_OFFSET UNITYSDK_OFFSET(0x1C8619C0)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C861D90)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C861960)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_D1B883D4904A5FA9_OFFSET UNITYSDK_OFFSET(0x1C861B30)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C861730)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C861CC0)
#define CLASS_1_DE7BB5B1402396B4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C861E30)
#define CLASS_1_DE7BB5B1402396B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C862290)

inline static constexpr unsigned int Class_1_DE7BB5B1402396B4_TypeDefinitionIndex = 11629;

class Class_1_DE7BB5B1402396B4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE7BB5B1402396B4_TypeDefinitionIndex)->GetStaticField(0x15D00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE7BB5B1402396B4_TypeDefinitionIndex)->GetStaticField(0x15D08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE7BB5B1402396B4_TypeDefinitionIndex)->GetStaticField(0x15D10);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE7BB5B1402396B4_TypeDefinitionIndex)->GetStaticField(0x85C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE7BB5B1402396B4_TypeDefinitionIndex)->GetStaticField(0x85C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>* Method_1_6B12DB143AA62A7E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_6B12DB143AA62A7E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*> Method_1_A414416FB843D407()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_A414416FB843D407_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenDialogueRow* Method_1_D1B883D4904A5FA9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityHipplenDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_D1B883D4904A5FA9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C82C8592F4C2108(::RPG::GameCore::ActivityHipplenDialogueRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenDialogueRow*))((::PBYTE)hIl2Cpp + CLASS_1_DE7BB5B1402396B4_METHOD_1_9C82C8592F4C2108_OFFSET))(a1);
	}
};
