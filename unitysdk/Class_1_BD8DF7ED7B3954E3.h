#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournExpRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_0E13C80F6B965F03_OFFSET UNITYSDK_OFFSET(0x183837B0)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18384090)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18383EB0)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18383830)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_A2FBF6C48CC512B8_OFFSET UNITYSDK_OFFSET(0x183840E0)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_A455AEA3DD046417_OFFSET UNITYSDK_OFFSET(0x18383AE0)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18383F50)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18383A80)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_ECE8ED04CBA7B085_OFFSET UNITYSDK_OFFSET(0x18383C60)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18383E70)
#define CLASS_1_BD8DF7ED7B3954E3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18383FF0)
#define CLASS_1_BD8DF7ED7B3954E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x18384440)

inline static constexpr unsigned int Class_1_BD8DF7ED7B3954E3_TypeDefinitionIndex = 14185;

class Class_1_BD8DF7ED7B3954E3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD8DF7ED7B3954E3_TypeDefinitionIndex)->GetStaticField(0x20860);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD8DF7ED7B3954E3_TypeDefinitionIndex)->GetStaticField(0x20868);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD8DF7ED7B3954E3_TypeDefinitionIndex)->GetStaticField(0x20870);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD8DF7ED7B3954E3_TypeDefinitionIndex)->GetStaticField(0x7EB0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD8DF7ED7B3954E3_TypeDefinitionIndex)->GetStaticField(0x7EB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>* Method_1_0E13C80F6B965F03()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_0E13C80F6B965F03_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*> Method_1_A455AEA3DD046417()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_A455AEA3DD046417_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournExpRewardRow* Method_1_ECE8ED04CBA7B085(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueTournExpRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_ECE8ED04CBA7B085_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_A2FBF6C48CC512B8(::RPG::GameCore::RogueTournExpRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournExpRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_BD8DF7ED7B3954E3_METHOD_1_A2FBF6C48CC512B8_OFFSET))(a1);
	}
};
