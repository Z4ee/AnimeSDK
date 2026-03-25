#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5BF7B43A197A060F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16AFB590)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_21D3B59F08B6F40C_OFFSET UNITYSDK_OFFSET(0x16AFAFF0)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16AFB3B0)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16AFAD40)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16AFB450)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_AE00273478DCE271_OFFSET UNITYSDK_OFFSET(0x16AFB1A0)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_C416E99BC7D3766F_OFFSET UNITYSDK_OFFSET(0x16AFACC0)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16AFAF90)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_DA2438E851F02035_OFFSET UNITYSDK_OFFSET(0x16AFB5E0)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16AFB370)
#define CLASS_1_5BF7B43A197A060F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16AFB4F0)
#define CLASS_1_5BF7B43A197A060F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AFB940)

inline static constexpr unsigned int Class_1_5BF7B43A197A060F_TypeDefinitionIndex = 12346;

class Class_1_5BF7B43A197A060F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BF7B43A197A060F_TypeDefinitionIndex)->GetStaticField(0x27A10);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BF7B43A197A060F_TypeDefinitionIndex)->GetStaticField(0x27A18);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BF7B43A197A060F_TypeDefinitionIndex)->GetStaticField(0x27A20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BF7B43A197A060F_TypeDefinitionIndex)->GetStaticField(0xCF80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BF7B43A197A060F_TypeDefinitionIndex)->GetStaticField(0xCF81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* Method_1_C416E99BC7D3766F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_C416E99BC7D3766F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*> Method_1_21D3B59F08B6F40C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_21D3B59F08B6F40C_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleBackendRankConfigRow* Method_1_AE00273478DCE271(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRoleBackendRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_AE00273478DCE271_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_DA2438E851F02035(::RPG::GameCore::GridFightRoleBackendRankConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleBackendRankConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_5BF7B43A197A060F_METHOD_1_DA2438E851F02035_OFFSET))(a1);
	}
};
