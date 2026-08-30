#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLivePowerByTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77B03B04A06420B5_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C8F3480)
#define CLASS_1_77B03B04A06420B5_METHOD_1_2321C82174291E1F_OFFSET UNITYSDK_OFFSET(0x1C8F34D0)
#define CLASS_1_77B03B04A06420B5_METHOD_1_378602B7D06ABEB9_OFFSET UNITYSDK_OFFSET(0x1C8F2C10)
#define CLASS_1_77B03B04A06420B5_METHOD_1_3F540C098370C61C_OFFSET UNITYSDK_OFFSET(0x1C8F3090)
#define CLASS_1_77B03B04A06420B5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8F32B0)
#define CLASS_1_77B03B04A06420B5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8F3340)
#define CLASS_1_77B03B04A06420B5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8F2EC0)
#define CLASS_1_77B03B04A06420B5_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8F2C90)
#define CLASS_1_77B03B04A06420B5_METHOD_1_DF2716C4A70471AA_OFFSET UNITYSDK_OFFSET(0x1C8F2F20)
#define CLASS_1_77B03B04A06420B5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8F3270)
#define CLASS_1_77B03B04A06420B5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8F33E0)
#define CLASS_1_77B03B04A06420B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8F3870)

inline static constexpr unsigned int Class_1_77B03B04A06420B5_TypeDefinitionIndex = 11692;

class Class_1_77B03B04A06420B5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77B03B04A06420B5_TypeDefinitionIndex)->GetStaticField(0x1EB20);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77B03B04A06420B5_TypeDefinitionIndex)->GetStaticField(0x1EB28);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77B03B04A06420B5_TypeDefinitionIndex)->GetStaticField(0x1EB30);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77B03B04A06420B5_TypeDefinitionIndex)->GetStaticField(0xA3F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77B03B04A06420B5_TypeDefinitionIndex)->GetStaticField(0xA3F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>* Method_1_378602B7D06ABEB9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_378602B7D06ABEB9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*> Method_1_DF2716C4A70471AA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_DF2716C4A70471AA_OFFSET))();
	}

	static ::RPG::GameCore::IdleLivePowerByTagRow* Method_1_3F540C098370C61C(::RPG::GameCore::ILBattleAvatarTag a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::IdleLivePowerByTagRow*(*)(::RPG::GameCore::ILBattleAvatarTag, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_3F540C098370C61C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2321C82174291E1F(::RPG::GameCore::IdleLivePowerByTagRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLivePowerByTagRow*))((::PBYTE)hIl2Cpp + CLASS_1_77B03B04A06420B5_METHOD_1_2321C82174291E1F_OFFSET))(a1);
	}
};
