#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILBattleAvatarTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D8C75273D0548D4D_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18554F80)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18554DA0)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_627734DF65C5ADD8_OFFSET UNITYSDK_OFFSET(0x18554BD0)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18554770)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_6EE00A69F86AB61E_OFFSET UNITYSDK_OFFSET(0x18554A20)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_999D1D4C0BD8F0F9_OFFSET UNITYSDK_OFFSET(0x185546F0)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18554E40)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x185549C0)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_EB8D5D22FB7D11AE_OFFSET UNITYSDK_OFFSET(0x18554FD0)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18554D60)
#define CLASS_1_D8C75273D0548D4D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18554EE0)
#define CLASS_1_D8C75273D0548D4D__CCTOR_OFFSET UNITYSDK_OFFSET(0x185552E0)

inline static constexpr unsigned int Class_1_D8C75273D0548D4D_TypeDefinitionIndex = 13060;

class Class_1_D8C75273D0548D4D : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C75273D0548D4D_TypeDefinitionIndex)->GetStaticField(0x19310);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C75273D0548D4D_TypeDefinitionIndex)->GetStaticField(0x19318);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C75273D0548D4D_TypeDefinitionIndex)->GetStaticField(0x19320);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C75273D0548D4D_TypeDefinitionIndex)->GetStaticField(0x6B30);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C75273D0548D4D_TypeDefinitionIndex)->GetStaticField(0x6B31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>* Method_1_999D1D4C0BD8F0F9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_999D1D4C0BD8F0F9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*> Method_1_6EE00A69F86AB61E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_6EE00A69F86AB61E_OFFSET))();
	}

	static ::RPG::GameCore::ILBattleAvatarTagConfigRow* Method_1_627734DF65C5ADD8(::RPG::GameCore::ILBattleAvatarTag a1)
	{
		return ((::RPG::GameCore::ILBattleAvatarTagConfigRow*(*)(::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_627734DF65C5ADD8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB8D5D22FB7D11AE(::RPG::GameCore::ILBattleAvatarTagConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarTagConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D8C75273D0548D4D_METHOD_1_EB8D5D22FB7D11AE_OFFSET))(a1);
	}
};
