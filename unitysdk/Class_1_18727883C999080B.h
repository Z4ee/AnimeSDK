#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StroyLineTrialAvatarDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_18727883C999080B_METHOD_1_02A5B61C11F66570_OFFSET UNITYSDK_OFFSET(0x17997CB0)
#define CLASS_1_18727883C999080B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17997C60)
#define CLASS_1_18727883C999080B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17997A80)
#define CLASS_1_18727883C999080B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17997460)
#define CLASS_1_18727883C999080B_METHOD_1_76F5D4674A8345F4_OFFSET UNITYSDK_OFFSET(0x179978C0)
#define CLASS_1_18727883C999080B_METHOD_1_9946719A161D86BB_OFFSET UNITYSDK_OFFSET(0x179973E0)
#define CLASS_1_18727883C999080B_METHOD_1_A5B3C915568D1A4C_OFFSET UNITYSDK_OFFSET(0x17997710)
#define CLASS_1_18727883C999080B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17997B20)
#define CLASS_1_18727883C999080B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179976B0)
#define CLASS_1_18727883C999080B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17997A40)
#define CLASS_1_18727883C999080B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17997BC0)
#define CLASS_1_18727883C999080B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17997FC0)

inline static constexpr unsigned int Class_1_18727883C999080B_TypeDefinitionIndex = 13920;

class Class_1_18727883C999080B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18727883C999080B_TypeDefinitionIndex)->GetStaticField(0x258A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18727883C999080B_TypeDefinitionIndex)->GetStaticField(0x258A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18727883C999080B_TypeDefinitionIndex)->GetStaticField(0x258B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18727883C999080B_TypeDefinitionIndex)->GetStaticField(0xC1D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18727883C999080B_TypeDefinitionIndex)->GetStaticField(0xC1D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>* Method_1_9946719A161D86BB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_9946719A161D86BB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*> Method_1_A5B3C915568D1A4C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_A5B3C915568D1A4C_OFFSET))();
	}

	static ::RPG::GameCore::StroyLineTrialAvatarDataRow* Method_1_76F5D4674A8345F4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::StroyLineTrialAvatarDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_76F5D4674A8345F4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_02A5B61C11F66570(::RPG::GameCore::StroyLineTrialAvatarDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StroyLineTrialAvatarDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_18727883C999080B_METHOD_1_02A5B61C11F66570_OFFSET))(a1);
	}
};
