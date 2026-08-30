#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEnhancedSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_29092A68802711D1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16F3D370)
#define CLASS_1_29092A68802711D1_METHOD_1_4E76F4D59C48D9AD_OFFSET UNITYSDK_OFFSET(0x16F3CB50)
#define CLASS_1_29092A68802711D1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16F3D1A0)
#define CLASS_1_29092A68802711D1_METHOD_1_9DD15244DC85959F_OFFSET UNITYSDK_OFFSET(0x16F3D3C0)
#define CLASS_1_29092A68802711D1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16F3D230)
#define CLASS_1_29092A68802711D1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16F3CE00)
#define CLASS_1_29092A68802711D1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16F3CBD0)
#define CLASS_1_29092A68802711D1_METHOD_1_EA5735A5B00CFA22_OFFSET UNITYSDK_OFFSET(0x16F3CE60)
#define CLASS_1_29092A68802711D1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16F3D160)
#define CLASS_1_29092A68802711D1_METHOD_1_F187FA4E84A3AE9C_OFFSET UNITYSDK_OFFSET(0x16F3CFD0)
#define CLASS_1_29092A68802711D1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16F3D2D0)
#define CLASS_1_29092A68802711D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F3D730)

inline static constexpr unsigned int Class_1_29092A68802711D1_TypeDefinitionIndex = 12698;

class Class_1_29092A68802711D1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0x3AFE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0x3AFE8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0x3AFF0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0xF240);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0xF241);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>* Method_1_4E76F4D59C48D9AD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_4E76F4D59C48D9AD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*> Method_1_EA5735A5B00CFA22()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_EA5735A5B00CFA22_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEnhancedSkillRow* Method_1_F187FA4E84A3AE9C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarEnhancedSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_F187FA4E84A3AE9C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_9DD15244DC85959F(::RPG::GameCore::AvatarEnhancedSkillRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_9DD15244DC85959F_OFFSET))(a1);
	}
};
