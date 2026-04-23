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

#define CLASS_1_29092A68802711D1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19175070)
#define CLASS_1_29092A68802711D1_METHOD_1_1690A7EC9FF193F6_OFFSET UNITYSDK_OFFSET(0x19174AD0)
#define CLASS_1_29092A68802711D1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19174E90)
#define CLASS_1_29092A68802711D1_METHOD_1_4E76F4D59C48D9AD_OFFSET UNITYSDK_OFFSET(0x191747A0)
#define CLASS_1_29092A68802711D1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19174820)
#define CLASS_1_29092A68802711D1_METHOD_1_9DD15244DC85959F_OFFSET UNITYSDK_OFFSET(0x191750C0)
#define CLASS_1_29092A68802711D1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19174F30)
#define CLASS_1_29092A68802711D1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19174A70)
#define CLASS_1_29092A68802711D1_METHOD_1_DDE3D919DDD1764B_OFFSET UNITYSDK_OFFSET(0x19174C80)
#define CLASS_1_29092A68802711D1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19174E50)
#define CLASS_1_29092A68802711D1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19174FD0)
#define CLASS_1_29092A68802711D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19175420)

inline static constexpr unsigned int Class_1_29092A68802711D1_TypeDefinitionIndex = 12085;

class Class_1_29092A68802711D1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0x42DE0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0x42DE8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0x42DF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0xEFD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_29092A68802711D1_TypeDefinitionIndex)->GetStaticField(0xEFD1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*> Method_1_1690A7EC9FF193F6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_1690A7EC9FF193F6_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEnhancedSkillRow* Method_1_DDE3D919DDD1764B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarEnhancedSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_DDE3D919DDD1764B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29092A68802711D1_METHOD_1_30D1209326FA87FC_OFFSET))();
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
