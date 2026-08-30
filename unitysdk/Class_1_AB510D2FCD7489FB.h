#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarSkillLinkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AB510D2FCD7489FB_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C8A2D70)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_2C0BAF232ED0CCBE_OFFSET UNITYSDK_OFFSET(0x1C8A29D0)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_41AAEEBBBAC3D50C_OFFSET UNITYSDK_OFFSET(0x1C8A2860)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8A2BA0)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8A2C30)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8A2800)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_CFF05089456670E5_OFFSET UNITYSDK_OFFSET(0x1C8A2DC0)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_D895F3BD198E765F_OFFSET UNITYSDK_OFFSET(0x1C8A2550)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8A25D0)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8A2B60)
#define CLASS_1_AB510D2FCD7489FB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8A2CD0)
#define CLASS_1_AB510D2FCD7489FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8A3130)

inline static constexpr unsigned int Class_1_AB510D2FCD7489FB_TypeDefinitionIndex = 12682;

class Class_1_AB510D2FCD7489FB : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB510D2FCD7489FB_TypeDefinitionIndex)->GetStaticField(0x19930);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB510D2FCD7489FB_TypeDefinitionIndex)->GetStaticField(0x19938);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB510D2FCD7489FB_TypeDefinitionIndex)->GetStaticField(0x19940);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB510D2FCD7489FB_TypeDefinitionIndex)->GetStaticField(0x92F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB510D2FCD7489FB_TypeDefinitionIndex)->GetStaticField(0x92F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>* Method_1_D895F3BD198E765F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_D895F3BD198E765F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*> Method_1_41AAEEBBBAC3D50C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_41AAEEBBBAC3D50C_OFFSET))();
	}

	static ::RPG::GameCore::AvatarSkillLinkRow* Method_1_2C0BAF232ED0CCBE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarSkillLinkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_2C0BAF232ED0CCBE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFF05089456670E5(::RPG::GameCore::AvatarSkillLinkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarSkillLinkRow*))((::PBYTE)hIl2Cpp + CLASS_1_AB510D2FCD7489FB_METHOD_1_CFF05089456670E5_OFFSET))(a1);
	}
};
