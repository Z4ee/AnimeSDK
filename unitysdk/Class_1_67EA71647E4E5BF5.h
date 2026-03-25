#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEnhancedSkillTreeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_67EA71647E4E5BF5_METHOD_1_02C4498119DA12A6_OFFSET UNITYSDK_OFFSET(0x16DEE970)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16DEEF10)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DEED30)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_3B5F5ED6B5ABF993_OFFSET UNITYSDK_OFFSET(0x16DEEB20)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DEE6C0)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_74D3BBBF681AEA7D_OFFSET UNITYSDK_OFFSET(0x16DEE640)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DEEDD0)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DEE910)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DEECF0)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DEEE70)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_FC668AB4FB0B0BF7_OFFSET UNITYSDK_OFFSET(0x16DEEF60)
#define CLASS_1_67EA71647E4E5BF5__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DEF2C0)

inline static constexpr unsigned int Class_1_67EA71647E4E5BF5_TypeDefinitionIndex = 11678;

class Class_1_67EA71647E4E5BF5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x17ED0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x17ED8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x17EE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x6D10);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x6D11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>* Method_1_74D3BBBF681AEA7D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_74D3BBBF681AEA7D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*> Method_1_02C4498119DA12A6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_02C4498119DA12A6_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEnhancedSkillTreeRow* Method_1_3B5F5ED6B5ABF993(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarEnhancedSkillTreeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_3B5F5ED6B5ABF993_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FC668AB4FB0B0BF7(::RPG::GameCore::AvatarEnhancedSkillTreeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_FC668AB4FB0B0BF7_OFFSET))(a1);
	}
};
