#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityWorldUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16DABCA0)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_1EA6F2041188FCBF_OFFSET UNITYSDK_OFFSET(0x16DAB900)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DABAC0)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DAB4A0)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_9A22FFA761B6B20B_OFFSET UNITYSDK_OFFSET(0x16DAB750)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DABB60)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_C8C9D7B96CE9AB66_OFFSET UNITYSDK_OFFSET(0x16DAB420)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DAB6F0)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_E501C291353E81CD_OFFSET UNITYSDK_OFFSET(0x16DABCF0)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DABA80)
#define CLASS_1_C0BB4A72D0770C1C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DABC00)
#define CLASS_1_C0BB4A72D0770C1C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DAC000)

inline static constexpr unsigned int Class_1_C0BB4A72D0770C1C_TypeDefinitionIndex = 10511;

class Class_1_C0BB4A72D0770C1C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0BB4A72D0770C1C_TypeDefinitionIndex)->GetStaticField(0x15E80);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0BB4A72D0770C1C_TypeDefinitionIndex)->GetStaticField(0x15E88);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0BB4A72D0770C1C_TypeDefinitionIndex)->GetStaticField(0x15E90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0BB4A72D0770C1C_TypeDefinitionIndex)->GetStaticField(0x6640);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0BB4A72D0770C1C_TypeDefinitionIndex)->GetStaticField(0x6641);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>* Method_1_C8C9D7B96CE9AB66()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_C8C9D7B96CE9AB66_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*> Method_1_9A22FFA761B6B20B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_9A22FFA761B6B20B_OFFSET))();
	}

	static ::RPG::GameCore::ActivityWorldUnlockRow* Method_1_1EA6F2041188FCBF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityWorldUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_1EA6F2041188FCBF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_E501C291353E81CD(::RPG::GameCore::ActivityWorldUnlockRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityWorldUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_C0BB4A72D0770C1C_METHOD_1_E501C291353E81CD_OFFSET))(a1);
	}
};
