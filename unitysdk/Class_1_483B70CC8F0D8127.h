#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TrainPartyGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyLogConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_483B70CC8F0D8127_METHOD_1_01151B8F7DD70492_OFFSET UNITYSDK_OFFSET(0x1799F410)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1799F800)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1799F620)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_660CD8CF9F5CB380_OFFSET UNITYSDK_OFFSET(0x1799F260)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1799EFB0)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1799F6C0)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1799F200)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_D0CED68F1ACB896F_OFFSET UNITYSDK_OFFSET(0x1799EF30)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_D2B8BB692B1983CD_OFFSET UNITYSDK_OFFSET(0x1799F850)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1799F5E0)
#define CLASS_1_483B70CC8F0D8127_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1799F760)
#define CLASS_1_483B70CC8F0D8127__CCTOR_OFFSET UNITYSDK_OFFSET(0x1799FBB0)

inline static constexpr unsigned int Class_1_483B70CC8F0D8127_TypeDefinitionIndex = 14062;

class Class_1_483B70CC8F0D8127 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_483B70CC8F0D8127_TypeDefinitionIndex)->GetStaticField(0x25B70);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_483B70CC8F0D8127_TypeDefinitionIndex)->GetStaticField(0x25B78);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_483B70CC8F0D8127_TypeDefinitionIndex)->GetStaticField(0x25B80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_483B70CC8F0D8127_TypeDefinitionIndex)->GetStaticField(0xC2E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_483B70CC8F0D8127_TypeDefinitionIndex)->GetStaticField(0xC2E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>* Method_1_D0CED68F1ACB896F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_D0CED68F1ACB896F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*> Method_1_660CD8CF9F5CB380()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyLogConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_660CD8CF9F5CB380_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyLogConfigRow* Method_1_01151B8F7DD70492(::RPG::GameCore::TrainPartyGameRecordType a1)
	{
		return ((::RPG::GameCore::TrainPartyLogConfigRow*(*)(::RPG::GameCore::TrainPartyGameRecordType))((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_01151B8F7DD70492_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D2B8BB692B1983CD(::RPG::GameCore::TrainPartyLogConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyLogConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_483B70CC8F0D8127_METHOD_1_D2B8BB692B1983CD_OFFSET))(a1);
	}
};
