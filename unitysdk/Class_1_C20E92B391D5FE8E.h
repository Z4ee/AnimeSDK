#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2AvatarCutinRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C20E92B391D5FE8E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x183E9EE0)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_3051E719006305A6_OFFSET UNITYSDK_OFFSET(0x183E9610)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183E9D00)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183E9690)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_812376E87A781F7A_OFFSET UNITYSDK_OFFSET(0x183E9F30)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_8B717E85C3DE4964_OFFSET UNITYSDK_OFFSET(0x183E9AF0)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x183E9DA0)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x183E98E0)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_E7FC7928F8AA117B_OFFSET UNITYSDK_OFFSET(0x183E9940)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183E9CC0)
#define CLASS_1_C20E92B391D5FE8E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x183E9E40)
#define CLASS_1_C20E92B391D5FE8E__CCTOR_OFFSET UNITYSDK_OFFSET(0x183EA290)

inline static constexpr unsigned int Class_1_C20E92B391D5FE8E_TypeDefinitionIndex = 11398;

class Class_1_C20E92B391D5FE8E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C20E92B391D5FE8E_TypeDefinitionIndex)->GetStaticField(0x24FA0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C20E92B391D5FE8E_TypeDefinitionIndex)->GetStaticField(0x24FA8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C20E92B391D5FE8E_TypeDefinitionIndex)->GetStaticField(0x24FB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C20E92B391D5FE8E_TypeDefinitionIndex)->GetStaticField(0x9B10);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C20E92B391D5FE8E_TypeDefinitionIndex)->GetStaticField(0x9B11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>* Method_1_3051E719006305A6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_3051E719006305A6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*> Method_1_E7FC7928F8AA117B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_E7FC7928F8AA117B_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2AvatarCutinRow* Method_1_8B717E85C3DE4964(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2AvatarCutinRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_8B717E85C3DE4964_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_812376E87A781F7A(::RPG::GameCore::MatchThreeV2AvatarCutinRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2AvatarCutinRow*))((::PBYTE)hIl2Cpp + CLASS_1_C20E92B391D5FE8E_METHOD_1_812376E87A781F7A_OFFSET))(a1);
	}
};
