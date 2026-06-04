#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerRoomTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5CABB49CB3A709A9_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1937C9C0)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1937C7F0)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_9C5DA256B99902A2_OFFSET UNITYSDK_OFFSET(0x1937C4B0)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1937C880)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_B92AA1EB3E411A4D_OFFSET UNITYSDK_OFFSET(0x1937C1A0)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_BC1D17671351AFCB_OFFSET UNITYSDK_OFFSET(0x1937CA10)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1937C450)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1937C220)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_E711C800F2F28F60_OFFSET UNITYSDK_OFFSET(0x1937C620)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1937C7B0)
#define CLASS_1_5CABB49CB3A709A9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1937C920)
#define CLASS_1_5CABB49CB3A709A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1937CD80)

inline static constexpr unsigned int Class_1_5CABB49CB3A709A9_TypeDefinitionIndex = 13823;

class Class_1_5CABB49CB3A709A9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CABB49CB3A709A9_TypeDefinitionIndex)->GetStaticField(0x56EF0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CABB49CB3A709A9_TypeDefinitionIndex)->GetStaticField(0x56EF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CABB49CB3A709A9_TypeDefinitionIndex)->GetStaticField(0x56F00);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CABB49CB3A709A9_TypeDefinitionIndex)->GetStaticField(0x11390);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CABB49CB3A709A9_TypeDefinitionIndex)->GetStaticField(0x11391);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>* Method_1_B92AA1EB3E411A4D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_B92AA1EB3E411A4D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*> Method_1_9C5DA256B99902A2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_9C5DA256B99902A2_OFFSET))();
	}

	static ::RPG::GameCore::PlayerRoomTagConfigRow* Method_1_E711C800F2F28F60(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerRoomTagConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_E711C800F2F28F60_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC1D17671351AFCB(::RPG::GameCore::PlayerRoomTagConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerRoomTagConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_5CABB49CB3A709A9_METHOD_1_BC1D17671351AFCB_OFFSET))(a1);
	}
};
