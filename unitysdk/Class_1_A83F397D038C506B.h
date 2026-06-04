#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousDiceBranchTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A83F397D038C506B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19EC3400)
#define CLASS_1_A83F397D038C506B_METHOD_1_09C2CA845A9F78C3_OFFSET UNITYSDK_OFFSET(0x19EC2BE0)
#define CLASS_1_A83F397D038C506B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19EC3230)
#define CLASS_1_A83F397D038C506B_METHOD_1_A3E91AA7677B9369_OFFSET UNITYSDK_OFFSET(0x19EC3450)
#define CLASS_1_A83F397D038C506B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19EC32C0)
#define CLASS_1_A83F397D038C506B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19EC2E90)
#define CLASS_1_A83F397D038C506B_METHOD_1_D86020E25985C79C_OFFSET UNITYSDK_OFFSET(0x19EC2EF0)
#define CLASS_1_A83F397D038C506B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19EC2C60)
#define CLASS_1_A83F397D038C506B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19EC31F0)
#define CLASS_1_A83F397D038C506B_METHOD_1_F25204FE7F560D4A_OFFSET UNITYSDK_OFFSET(0x19EC3060)
#define CLASS_1_A83F397D038C506B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19EC3360)
#define CLASS_1_A83F397D038C506B__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EC37C0)

inline static constexpr unsigned int Class_1_A83F397D038C506B_TypeDefinitionIndex = 14171;

class Class_1_A83F397D038C506B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A83F397D038C506B_TypeDefinitionIndex)->GetStaticField(0x4F3B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A83F397D038C506B_TypeDefinitionIndex)->GetStaticField(0x4F3B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A83F397D038C506B_TypeDefinitionIndex)->GetStaticField(0x4F3C0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A83F397D038C506B_TypeDefinitionIndex)->GetStaticField(0xF630);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A83F397D038C506B_TypeDefinitionIndex)->GetStaticField(0xF631);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>* Method_1_09C2CA845A9F78C3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_09C2CA845A9F78C3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*> Method_1_D86020E25985C79C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_D86020E25985C79C_OFFSET))();
	}

	static ::RPG::GameCore::RogueNousDiceBranchTagRow* Method_1_F25204FE7F560D4A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueNousDiceBranchTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_F25204FE7F560D4A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A3E91AA7677B9369(::RPG::GameCore::RogueNousDiceBranchTagRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceBranchTagRow*))((::PBYTE)hIl2Cpp + CLASS_1_A83F397D038C506B_METHOD_1_A3E91AA7677B9369_OFFSET))(a1);
	}
};
