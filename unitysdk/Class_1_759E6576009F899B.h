#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveAvatarRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_759E6576009F899B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1854D880)
#define CLASS_1_759E6576009F899B_METHOD_1_117A0E72A0DED0CD_OFFSET UNITYSDK_OFFSET(0x1854D490)
#define CLASS_1_759E6576009F899B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1854D6A0)
#define CLASS_1_759E6576009F899B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1854D030)
#define CLASS_1_759E6576009F899B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1854D740)
#define CLASS_1_759E6576009F899B_METHOD_1_BE3105158AC6D44B_OFFSET UNITYSDK_OFFSET(0x1854CFB0)
#define CLASS_1_759E6576009F899B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1854D280)
#define CLASS_1_759E6576009F899B_METHOD_1_E095B478BC5AA0CC_OFFSET UNITYSDK_OFFSET(0x1854D2E0)
#define CLASS_1_759E6576009F899B_METHOD_1_EB7AC53C2F247239_OFFSET UNITYSDK_OFFSET(0x1854D8D0)
#define CLASS_1_759E6576009F899B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1854D660)
#define CLASS_1_759E6576009F899B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1854D7E0)
#define CLASS_1_759E6576009F899B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1854DC30)

inline static constexpr unsigned int Class_1_759E6576009F899B_TypeDefinitionIndex = 11163;

class Class_1_759E6576009F899B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x18FA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x18FA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x18FB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x6A80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x6A81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>* Method_1_BE3105158AC6D44B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_BE3105158AC6D44B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*> Method_1_E095B478BC5AA0CC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_E095B478BC5AA0CC_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveAvatarRarityRow* Method_1_117A0E72A0DED0CD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveAvatarRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_117A0E72A0DED0CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB7AC53C2F247239(::RPG::GameCore::IdleLiveAvatarRarityRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarRarityRow*))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_EB7AC53C2F247239_OFFSET))(a1);
	}
};
